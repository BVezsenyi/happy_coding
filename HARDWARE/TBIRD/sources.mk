COMPILER_PREFIX:=avr-

TARGET_NAME:=tbird.elf

CURR_DIR:=./HARDWARE/TBIRD/

GENERAL_SRC_LIST+=$(CURR_DIR)SRC/hw_main.c \
$(CURR_DIR)SRC/hw_init.c \
$(CURR_DIR)SRC/hw_led_handler.c

INCLUDE+=-I$(CURR_DIR)HEADER/

C_FLAGS+= \
-std=gnu99 \
-g \
-Os \
-Wall \
-mmcu=atmega128 \
-DF_CPU=16000000
