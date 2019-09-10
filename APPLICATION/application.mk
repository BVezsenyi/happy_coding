EXE_NAME = application.exe

#Fill variant dependent layer and variant dependent include 

GENERAL_SRC_LIST:= \
./LED_HANDLER/SRC/led_handler.c \
./INTERFACE/SRC/main_ifc.c \
./HARDWARE/SRC/hw_led_handler.c \

INCLUDE:= \
-I./LED_HANDLER/HEADER/ \
-I./INTERFACE/HEADER/ \
-I./HARDWARE/HEADER/ \

#ifeq ($(MAKECMDGOALS),"simulator")
#GENERAL_SRC_LIST+=./SIMULATOR/SRC/sim_led_handler.c
#INCLUDE+=-I./SIMULATOR/HEADER/
#endif
#
#ifeq ($(MAKECMDGOALS),"target")
#GENERAL_SRC_LIST+=./HARDWARE/SRC/hw_led_handler.c
#INCLUDE+=-I./HARDWARE/HEADER/
#endif

include ../BUILD/makefile