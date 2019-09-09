EXE_NAME = application.exe

GENERAL_SRC_LIST:= \
./LED_HANDLER/SRC/led_handler.c \
./INTERFACE/SRC/main_ifc.c \
./HARDWARE/SRC/hw_led_handler.c \

INCLUDE:= \
-I./LED_HANDLER/HEADER/ \
-I./INTERFACE/HEADER/ \
-I./HARDWARE/HEADER/ \

include ../BUILD/makefile