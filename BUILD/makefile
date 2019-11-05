OBJ_DIR=OBJ
SRC_DIR=SRC
TARGET_DIR=./TARGET/


#Check if goal is valid: 

#Set compiler
CC:=$(COMPILER_PREFIX)gcc
CP:=$(COMPILER_PREFIX)objcopy
SZ:=$(COMPILER_PREFIX)size

GENERAL_OBJ_LIST = $(foreach var, $(GENERAL_SRC_LIST), $(subst $(SRC_DIR),$(OBJ_DIR),$(var:.c=.o) ) ) 
EXE_FILE = $(TARGET_DIR)$(TARGET_NAME)

DIR_GUARD=@mkdir -p $(@D)
PRINTER = echo "$(CC) $@"

.SILENT:

.PHONY: clean 

clean: 
	rm -rf	$(dir $(GENERAL_OBJ_LIST)) $(TARGET_DIR) $(ADDITIONAL_CLEAN)

.SECONDEXPANSION:

$(GENERAL_OBJ_LIST): %.o: $$(subst $(OBJ_DIR),$(SRC_DIR),$$*).c
	$(PRINTER)
	$(DIR_GUARD)
	$(CC) $(INCLUDE)  $(C_FLAGS) -c $< -o $@

$(EXE_FILE): $(GENERAL_OBJ_LIST)
	$(PRINTER)
	$(DIR_GUARD)
	$(CC) $(C_FLAGS) $(LD_SCRIPT) $(LD_FLAGS) $^ -o $@
	$(SZ) $@

$(VALID_TARGET_LIST): $(EXE_FILE)