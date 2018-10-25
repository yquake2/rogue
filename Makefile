# ----------------------------------------------------- #
# Makefile for the rogue game module for Quake II       #
#                                                       #
# Just type "make" to compile the                       #
#  - Ground Zero Game (game.so)                         #
#                                                       #
# Dependencies:                                         #
# - None, but you need a Quake II to play.              #
#   While in theorie every client should work           #
#   Yamagi Quake II ist recommended.                    #
#                                                       #
# Platforms:                                            #
# - FreeBSD                                             #
# - Linux                                               #
# - Mac OS X                                            #
# - OpenBSD                                             #
# - Windows                                             #
# ----------------------------------------------------- #

# Detect the OS
ifdef SystemRoot
OSTYPE := Windows
else
OSTYPE := $(shell uname -s)
endif

# Special case for MinGW
ifneq (,$(findstring MINGW,$(OSTYPE)))
OSTYPE := Windows
endif

# Detect the architecture
ifeq ($(OSTYPE), Windows)
ifdef PROCESSOR_ARCHITEW6432
# 64 bit Windows
ARCH := $(PROCESSOR_ARCHITEW6432)
else
# 32 bit Windows
ARCH := $(PROCESSOR_ARCHITECTURE)
endif
else
# Normalize some abiguous ARCH strings
ARCH := $(shell uname -m | sed -e 's/i.86/i386/' -e 's/amd64/x86_64/' -e 's/^arm.*/arm/')
endif

# Detect the compiler
ifeq ($(shell $(CC) -v 2>&1 | grep -c "clang version"), 1)
COMPILER := clang
COMPILERVER := $(shell $(CC)  -dumpversion | sed -e 's/\.\([0-9][0-9]\)/\1/g' -e 's/\.\([0-9]\)/0\1/g' -e 's/^[0-9]\{3,4\}$$/&00/')
else ifeq ($(shell $(CC) -v 2>&1 | grep -c -E "(gcc version|gcc-Version)"), 1)
COMPILER := gcc
COMPILERVER := $(shell $(CC)  -dumpversion | sed -e 's/\.\([0-9][0-9]\)/\1/g' -e 's/\.\([0-9]\)/0\1/g' -e 's/^[0-9]\{3,4\}$$/&00/')
else
COMPILER := unknown
endif

# ----------

# Base CFLAGS. 
#
# -O2 are enough optimizations.
# 
# -fno-strict-aliasing since the source doesn't comply
#  with strict aliasing rules and it's next to impossible
#  to get it there...
#
# -fomit-frame-pointer since the framepointer is mostly
#  useless for debugging Quake II and slows things down.
#
# -g to build allways with debug symbols. Please do not
#  change this, since it's our only chance to debug this
#  crap when random crashes happen!
#
# -fPIC for position independend code.
#
# -MMD to generate header dependencies.
ifeq ($(OSTYPE), Darwin)
CFLAGS := -O2 -fno-strict-aliasing -fomit-frame-pointer \
		  -Wall -pipe -g -fwrapv -arch i386 -arch x86_64
else
CFLAGS := -O2 -fno-strict-aliasing -fomit-frame-pointer \
		  -Wall -pipe -g -MMD -fwrapv
endif

# ----------

# Switch of some annoying warnings.
ifeq ($(COMPILER), clang)
	# -Wno-missing-braces because otherwise clang complains
	#  about totally valid 'vec3_t bla = {0}' constructs.
	CFLAGS += -Wno-missing-braces
else ifeq ($(COMPILER), gcc)
	# GCC 8.0 or higher.
	ifeq ($(shell test $(COMPILERVER) -ge 80000; echo $$?),0)
	    # -Wno-format-truncation and -Wno-format-overflow
		# because GCC spams about 50 false positives.
    	CFLAGS += -Wno-format-truncation -Wno-format-overflow
	endif
endif

# ----------

# Defines the operating system and architecture
CFLAGS += -DOSTYPE=\"$(OSTYPE)\" -DARCH=\"$(ARCH)\"

# ----------

# Base LDFLAGS.
ifeq ($(OSTYPE), Darwin)
LDFLAGS := -shared -arch i386 -arch x86_64 
else ifeq ($(OSTYPE), Windows)
LDFLAGS := -shared -static-libgcc
else
LDFLAGS := -shared
endif

# ----------

# Builds everything
all: rogue

# ----------

# When make is invoked by "make VERBOSE=1" print
# the compiler and linker commands.

ifdef VERBOSE
Q :=
else
Q := @
endif

# ----------
 
# Phony targets
.PHONY : all clean rogue

# ----------
 
# Cleanup
clean:
	@echo "===> CLEAN"
	${Q}rm -Rf build release

# ----------

# The rogue game
ifeq ($(OSTYPE), Windows)
rogue:
	@echo "===> Building game.dll"
	${Q}mkdir -p release
	$(MAKE) release/game.dll

build/%.o: %.c
	@echo "===> CC $<"
	${Q}mkdir -p $(@D)
	${Q}$(CC) -c $(CFLAGS) -o $@ $<
else
rogue:
	@echo "===> Building game.so"
	${Q}mkdir -p release
	$(MAKE) release/game.so

build/%.o: %.c
	@echo "===> CC $<"
	${Q}mkdir -p $(@D)
	${Q}$(CC) -c $(CFLAGS) -o $@ $<

release/game.so : CFLAGS += -fPIC
endif
 
# ----------

ROGUE_OBJS_ = \
	src/g_ai.o \
	src/g_chase.o \
	src/g_cmds.o \
	src/g_combat.o \
	src/g_func.o \
	src/g_items.o \
	src/g_main.o \
	src/g_misc.o \
	src/g_monster.o \
	src/g_newai.o \
	src/g_newdm.o \
	src/g_newfnc.o \
	src/g_newtarg.o \
	src/g_newtrig.o \
	src/g_newweap.o \
	src/g_phys.o \
	src/g_spawn.o \
	src/g_sphere.o \
	src/g_svcmds.o \
	src/g_target.o \
	src/g_trigger.o \
	src/g_turret.o \
	src/g_utils.o \
	src/g_weapon.o \
	src/dm/ball.o \
	src/dm/tag.o \
	src/monster/berserker/berserker.o \
	src/monster/boss2/boss2.o \
	src/monster/boss3/boss3.o \
	src/monster/boss3/boss31.o \
	src/monster/boss3/boss32.o \
	src/monster/brain/brain.o \
	src/monster/carrier/carrier.o \
	src/monster/chick/chick.o \
	src/monster/flipper/flipper.o \
	src/monster/float/float.o \
	src/monster/flyer/flyer.o \
	src/monster/gladiator/gladiator.o \
	src/monster/gunner/gunner.o \
	src/monster/hover/hover.o \
	src/monster/infantry/infantry.o \
	src/monster/insane/insane.o \
	src/monster/medic/medic.o \
	src/monster/misc/move.o \
	src/monster/mutant/mutant.o \
	src/monster/parasite/parasite.o \
	src/monster/soldier/soldier.o \
	src/monster/stalker/stalker.o \
	src/monster/supertank/supertank.o \
	src/monster/tank/tank.o \
	src/monster/turret/turret.o \
	src/monster/widow/widow.o \
	src/monster/widow/widow2.o \
	src/player/client.o \
	src/player/hud.o \
	src/player/trail.o \
	src/player/view.o \
	src/player/weapon.o \
	src/savegame/savegame.o \
	src/shared/flash.o \
	src/shared/rand.o \
	src/shared/shared.o 

# ----------

# Rewrite pathes to our object directory
ROGUE_OBJS = $(patsubst %,build/%,$(ROGUE_OBJS_))

# ----------

# Generate header dependencies
ROGUE_DEPS= $(ROGUE_OBJS:.o=.d)

# ----------

# Suck header dependencies in
-include $(ROGUE_DEPS)

# ----------

ifeq ($(OSTYPE), Windows)
release/game.dll : $(ROGUE_OBJS)
	@echo "===> LD $@"
	${Q}$(CC) $(LDFLAGS) -o $@ $(ROGUE_OBJS)
else ifeq ($(OSTYPE), Darwin)
release/game.dylib : $(ROGUE_OBJS)
	@echo "===> LD $@"
	${Q}$(CC) $(LDFLAGS) -o $@ $(ROGUE_OBJS)
else
release/game.so : $(ROGUE_OBJS)
	@echo "===> LD $@"
	${Q}$(CC) $(LDFLAGS) -o $@ $(ROGUE_OBJS)
endif

# ----------
