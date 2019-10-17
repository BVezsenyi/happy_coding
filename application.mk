
VALID_TARGET_LIST:= \
target \
simulator

include ./LED_HANDLER/sources.mk
include ./INTERFACE/sources.mk


ifeq ($(MAKECMDGOALS),simulator)
include ./SIMULATOR/sources.mk
endif

ifeq ($(MAKECMDGOALS),target)
include ./HARDWARE/sources.mk
endif

ifeq ($(MAKECMDGOALS),clean)

ADDITIONAL_CLEAN:= \
./HARDWARE/OBJ/ \
./SIMULATOR/OBJ/ \

endif


include ./BUILD/makefile