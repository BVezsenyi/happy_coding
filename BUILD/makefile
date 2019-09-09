CC=gcc

OBJ_DIR=OBJ
SRC_DIR=SRC
TARGET_DIR=./TARGET/

GENERAL_OBJ_LIST = $(foreach var, $(GENERAL_SRC_LIST), $(subst $(SRC_DIR),$(OBJ_DIR),$(var:.c=.o) ) ) 
EXE_FILE = $(TARGET_DIR)$(EXE_NAME)

DIR_GUARD=@mkdir -p $(@D)
PRINTER = echo "$(CC) $@"

.PHONY: clean update all


all: clean update  

update: $(EXE_FILE)	 

clean: 
	rm -rf	$(OBJ_DIR) $(TARGET_DIR)

.SECONDEXPANSION:

$(EXE_FILE): $(GENERAL_OBJ_LIST)
	$(PRINTER)
	$(DIR_GUARD)
	$(CC) -g $^ -o $@

$(GENERAL_OBJ_LIST): %.o: $$(subst $(OBJ_DIR),$(SRC_DIR),$$*).c
	$(PRINTER)
	$(DIR_GUARD)
	$(CC) $(INCLUDE) -c $< -o $@