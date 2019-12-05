CURR_DIR := ./SIMULATOR/

TARGET_DIR=./TARGET/
TARGET_NAME:=simulator
EXE_FILE = $(TARGET_DIR)$(TARGET_NAME).elf

GENERAL_SRC_LIST := $(GENERAL_SRC_LIST) \
$(CURR_DIR)SRC/sim_api.c \
$(CURR_DIR)SRC/sim_init.c \
$(CURR_DIR)SRC/sim_led_handler.c \


INCLUDE := $(INCLUDE) \
-I$(CURR_DIR)HEADER/

C_FLAGS+= \
-std=gnu99 \
-g \
-Wall \

CP_FLAGS:= \
CP_FORMAT:= \

