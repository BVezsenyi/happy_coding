CC=gcc

OBJ_DIR=OBJ
SRC_DIR=SRC
TARGET_DIR=./TARGET/
VALID_TARGET_LIST= \
target \
simulator

#Check if goal is valid: 

GENERAL_OBJ_LIST = $(foreach var, $(GENERAL_SRC_LIST), $(subst $(SRC_DIR),$(OBJ_DIR),$(var:.c=.o) ) ) 
EXE_FILE = $(TARGET_DIR)$(EXE_NAME)

DIR_GUARD=@mkdir -p $(@D)
PRINTER = echo "$(CC) $@"

.PHONY: clean update

clean: 
	rm -rf	$(GENERAL_OBJ_LIST) $(TARGET_DIR)

.SECONDEXPANSION:

$(GENERAL_OBJ_LIST): %.o: $$(subst $(OBJ_DIR),$(SRC_DIR),$$*).c
	$(PRINTER)
	$(DIR_GUARD)
	$(CC) $(INCLUDE)  $(C_FLAGS) -c $< -o $@

$(EXE_FILE): $(GENERAL_OBJ_LIST)
	$(PRINTER)
	$(DIR_GUARD)
	$(CC) -g $^ -o $@

$(VALID_TARGET_LIST): $(EXE_FILE)