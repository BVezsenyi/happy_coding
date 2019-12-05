CURR_DIR:=./HARDWARE/TBIRD/

TARGET_DIR=./TARGET/
TARGET_NAME:=tbird
HEX_FILE:= $(TARGET_DIR)$(TARGET_NAME).hex
EXE_FILE = $(TARGET_DIR)$(TARGET_NAME).elf

GENERAL_SRC_LIST := $(GENERAL_SRC_LIST) \
$(CURR_DIR)SRC/hw_api.c \
$(CURR_DIR)SRC/hw_init.c \
$(CURR_DIR)SRC/hw_led_handler.c

INCLUDE := $(INCLUDE) \
-I$(CURR_DIR)HEADER/

C_FLAGS+= \
-std=gnu99 \
-g \
-Os \
-Wall \
-mmcu=atmega128 \
-DF_CPU=16000000

CP_FLAGS:= \
-j .text \
-j .data

CP_FORMAT:= \
ihex

