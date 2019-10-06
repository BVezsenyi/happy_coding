EXE_NAME = application.exe

GENERAL_SRC_LIST:= \
./LED_HANDLER/SRC/led_handler.c \
./INTERFACE/SRC/main_ifc.c \

INCLUDE:= \
-I./LED_HANDLER/HEADER/ \
-I./INTERFACE/HEADER/ \

C_FLAGS:=

ifeq ($(MAKECMDGOALS),simulator)
GENERAL_SRC_LIST+= \
./SIMULATOR/SRC/sim_led_handler.c
INCLUDE+=-I./SIMULATOR/HEADER/
endif

ifeq ($(MAKECMDGOALS),target)
GENERAL_SRC_LIST+=./HARDWARE/SRC/hw_led_handler.c
INCLUDE+=-I./HARDWARE/HEADER/
endif

include ./BUILD/makefile