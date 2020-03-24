
VALID_TARGET_LIST:= \
nucleo \
nucleo_f0308r \
tbird \
simulator

include ./APPLICATION/sources.mk
include ./ERROR_HANDLER/sources.mk

ifeq ($(MAKECMDGOALS),simulator)
COMPILER_PREFIX:=
include ./SIMULATOR/sources.mk
endif

ifeq ($(MAKECMDGOALS),nucleo)
COMPILER_PREFIX:=arm-none-eabi-
include ./HARDWARE/NUCLEO/sources.mk
endif

ifeq ($(MAKECMDGOALS),nucleo_f0308r)
COMPILER_PREFIX:=arm-none-eabi-
include ./HARDWARE/NUCLEO_F0308R/sources.mk
endif

ifeq ($(MAKECMDGOALS),tbird)
COMPILER_PREFIX:=avr-
include ./HARDWARE/TBIRD/sources.mk
endif

ifeq ($(MAKECMDGOALS),clean)
COMPILER_PREFIX:=
ADDITIONAL_CLEAN:= \
./HARDWARE/NUCLEO/OBJ \
./HARDWARE/NUCLEO_F0308/OBJ \
./HARDWARE/TBIRD/OBJ \
./SIMULATOR/OBJ \
./ERROR_HANDLER/LIB/ \
./ERROR_HANDLER/OBJ/ \
./TARGET
endif

INCLUDE := $(INCLUDE) \
-I./PUBLIC/HEADER/

LIBS_NEEDED = \
-L./ERROR_HANDLER/LIB \
-lerror_handler

include ./BUILD/makefile