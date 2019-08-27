CC=gcc

OBJ_DIR = ../OBJ/
SRC_DIR = ./
INCLUDE = ../HEADER/
TARGET_DIR = ../TARGET/

GENERAL_OBJ_LIST = $(foreach var, $(GENERAL_SRC_LIST), $(OBJ_DIR)$(var:.c=.o))
SOURCES = $(addprefix $(SRC_DIR), $(GENERAL_SRC_LIST) )
OBJS = $(addprefix $(OBJ_DIR), $(GENERAL_OBJ_LIST) )
EXE_FILE = $(TARGET_DIR)$(EXE_NAME)

DIR_GUARD=@mkdir -p $(@D)
PRINTER = echo "$(CC) $@"

.PHONY: clean update all


all: clean update  

update: $(EXE_FILE)	 

clean: 
	rm -rf	$(OBJ_DIR) $(TARGET_DIR)

.SECONDEXPANSION:

$(EXE_FILE): $(OBJS)
	$(PRINTER)
	$(DIR_GUARD)
	$(CC) -g $^ -o $@

$(OBJS): %.o: $$(subst $(OBJ_DIR),$(SRC_DIR),$$*).c
	$(PRINTER)
	$(DIR_GUARD)
	$(CC) -I$(INCLUDE) -c $< -o $@