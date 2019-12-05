CURR_DIR := ./INTERFACE/

GENERAL_SRC_LIST := $(GENERAL_SRC_LIST) \
$(CURR_DIR)SRC/main_ifc.c \
$(CURR_DIR)SRC/init_ifc.c \
$(CURR_DIR)SRC/led_handler_ifc.c \


INCLUDE := $(INCLUDE) \
-I$(CURR_DIR)HEADER/