
VALID_TARGET_LIST:= \
nucleo \
tbird \
simulator

include ./APPLICATION/sources.mk
include ./INTERFACE/sources.mk


ifeq ($(MAKECMDGOALS),simulator)
include ./SIMULATOR/sources.mk
endif

ifeq ($(MAKECMDGOALS),nucleo)
include ./HARDWARE/NUCLEO/sources.mk
endif

ifeq ($(MAKECMDGOALS),tbird)
include ./HARDWARE/TBIRD/sources.mk
endif

ifeq ($(MAKECMDGOALS),clean)
ADDITIONAL_CLEAN:=./HARDWARE/NUCLEO/OBJ \
./HARDWARE/TBIRD/OBJ \
./SIMULATOR/OBJ \
./TARGET
endif

include ./BUILD/makefile