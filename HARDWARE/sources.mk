CUSTOM_COMPILER:=arm-none-eabi-gcc

TARGET_NAME:=application.elf

GENERAL_SRC_LIST+=./HARDWARE/SRC/hw_led_handler.c

INCLUDE+=-I./HARDWARE/HEADER/

C_FLAGS+= \
-std=gnu99 \
-g \
-O2 \
-Wall \
-mlittle-endian \
-mthumb \
-mthumb-interwork \
-mcpu=cortex-m0 \
-fsingle-precision-constant \
-Wdouble-promotion \
--specs=nosys.specs
