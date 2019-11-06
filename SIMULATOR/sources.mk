TARGET_NAME:=simulator.exe

GENERAL_SRC_LIST+= \
./SIMULATOR/SRC/sim_main.c \
./SIMULATOR/SRC/sim_init.c \
./SIMULATOR/SRC/sim_led_handler.c

INCLUDE+=-I./SIMULATOR/HEADER/
