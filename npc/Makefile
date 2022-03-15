all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."

commit: 

	$(call git_commit, $(MyMessage)) # DO NOT REMOVE THIS LINE!!!
	@echo $(MyMessage)

include ../Makefile

NXDC_FILES := constr/$(TOPNAME).nxdc

VERILATOR = verilator
VERILATOR_CFLAGS += -MMD -MP -build -cc -O3 --x-assign fast --x-initial fast --noassert
ifeq ($(TRACE), y)
VERILATOR_CFLAGS += --trace
endif

BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME) 

default : $(BIN)

$(shell mkdir -p $(BUILD_DIR))

NVBOARD_SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)

VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
#CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
CSRCS = $(abspath $(wildcard ./csrc/*.c ./csrc/*.cpp))


INC_PATH ?= 
INC = $(addprefix -I, $(INC_PATH))
CFLAGS += $(INC) -DTOP_NAME="\"V$(TOPNAME)\""

ifeq ($(NVBOARD),y)
$(NVBOARD_SRC_AUTO_BIND): $(NXDC_FILES) 
python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@
CSRCS += $(NVBOARD_SRC_AUTO_BIND)                       
include $(NVBOARD_HOME)/scripts/nvboard.mk
LDFLAGS += -lSDL2 -lSDL2_image
# nvboard_archive is from other makefile
$(BIN): $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE)
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) -top $(TOPNAME) $^ \
	$(addprefix -CFLAGS , $(CFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
	--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))	
else

$(BIN): $(VSRCS) $(CSRCS)
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) -top $(TOPNAME) $^ \
	$(addprefix -CFLAGS , $(CFLAGS))  \
	--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))	

endif

DEPS := $(CSRCS:.o=.d)
ifneq ($(DEPS),)
#include $(DEPS)
endif

run: $(BIN)
	@$^

.PHONY: clean run

clean: 
	rm -rf $(BUILD_DIR)
