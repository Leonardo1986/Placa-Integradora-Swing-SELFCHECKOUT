################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include Drv/subdir.mk
-include Drivers/STM32F0xx_HAL_Driver/Src/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := CtrSwingMp_TSI_SelfCheckOut
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
CtrSwingMp_TSI_SelfCheckOut.elf \

MAP_FILES += \
CtrSwingMp_TSI_SelfCheckOut.map \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
CtrSwingMp_TSI_SelfCheckOut.list \

OBJCOPY_HEX += \
CtrSwingMp_TSI_SelfCheckOut.hex \

OBJCOPY_BIN += \
CtrSwingMp_TSI_SelfCheckOut.bin \


# All Target
all: main-build

# Main-build Target
main-build: CtrSwingMp_TSI_SelfCheckOut.elf secondary-outputs

# Tool invocations
CtrSwingMp_TSI_SelfCheckOut.elf CtrSwingMp_TSI_SelfCheckOut.map: $(OBJS) $(USER_OBJS) C:\WorkSpaceGitHub\Placa-Integradora-Swing-SELFCHECKOUT\CtrSwingMp_TSI_SelfCheckOut\STM32F030R8TX_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -o "CtrSwingMp_TSI_SelfCheckOut.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m0 -T"C:\WorkSpaceGitHub\Placa-Integradora-Swing-SELFCHECKOUT\CtrSwingMp_TSI_SelfCheckOut\STM32F030R8TX_FLASH.ld" --specs=nosys.specs -Wl,-Map="CtrSwingMp_TSI_SelfCheckOut.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

CtrSwingMp_TSI_SelfCheckOut.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "CtrSwingMp_TSI_SelfCheckOut.list"
	@echo 'Finished building: $@'
	@echo ' '

CtrSwingMp_TSI_SelfCheckOut.hex: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objcopy  -O ihex $(EXECUTABLES) "CtrSwingMp_TSI_SelfCheckOut.hex"
	@echo 'Finished building: $@'
	@echo ' '

CtrSwingMp_TSI_SelfCheckOut.bin: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "CtrSwingMp_TSI_SelfCheckOut.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) CtrSwingMp_TSI_SelfCheckOut.bin CtrSwingMp_TSI_SelfCheckOut.elf CtrSwingMp_TSI_SelfCheckOut.hex CtrSwingMp_TSI_SelfCheckOut.list CtrSwingMp_TSI_SelfCheckOut.map default.size.stdout
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_HEX) $(OBJCOPY_BIN)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents main-build fail-specified-linker-script-missing warn-no-linker-script-specified

-include ../makefile.targets
