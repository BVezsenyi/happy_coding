COMPILER_PREFIX:=arm-none-eabi-

TARGET_DIR=./TARGET/
TARGET_NAME:=nucleo
HEX_FILE:= $(TARGET_DIR)$(TARGET_NAME).hex
EXE_FILE = $(TARGET_DIR)$(TARGET_NAME).elf

CURR_DIR:=./HARDWARE/NUCLEO/

STARTUP:=startup_stm32f303xe.s

GENERAL_SRC_LIST+= \
$(STARTUP) \
$(CURR_DIR)SRC/hw_api.c \
$(CURR_DIR)SRC/hw_init.c \
$(CURR_DIR)SRC/hw_led_handler.c 

INCLUDE+=-I$(CURR_DIR)HEADER/

CPU:= -mcpu=cortex-m4

C_FLAGS+= \
-std=gnu99 \
-g \
-O2 \
-Wall \
-mlittle-endian \
-mthumb \
-mthumb-interwork \
$(CPU) \
-fsingle-precision-constant \
-Wdouble-promotion \
--specs=nosys.specs

LD_SCRIPT:= STM32F303RETx_FLASH.ld

LD_FLAGS:=