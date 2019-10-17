
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

#test comment -> Test gitkraken workaround

include ./BUILD/makefile