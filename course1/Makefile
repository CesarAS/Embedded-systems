#******************************************************************************
# Copyright (C) 2017 by Alex Fosdick - University of Colorado
#
# Redistribution, modification or use of this software in source or binary
# forms is permitted as long as the files maintain this copyright. Users are 
# permitted to modify this and use it to learn about the field of embedded
# software. Alex Fosdick and the University of Colorado are not liable for any
# misuse of this material. 
#
#*****************************************************************************

#------------------------------------------------------------------------------
# <Put a Description Here>
#
# Use: make [TARGET] [PLATFORM-OVERRIDES]
#
# Build Targets:
#      <FILE>.i - Generate the preprocessed output of c-program source files
#	   <FILE>.asm - Generate assembly output of c-program source files
#	   <FILE>.o - Generate the object file for c-program source files (but do not link) by specifying the object file you want to compile
#      compile-all - Compile all object files, but DO NOT link
#      build - Compile all object files and link into a final executable
#      clean - removes all generated files
#
# Platform Overrides:
#     PLATFORM - Platform to compile (HOST, MSP432)
#	  TARGET - Executable name
#
#------------------------------------------------------------------------------
include sources.mk


# Architectures Specific Flags
ifeq ($(PLATFORM),HOST)
	CC = gcc
	LD = ld
	ARCH := $(shell arch)
	SIZE = size
	PLATFORM_FLAGS = 
else
	CC = arm-none-eabi-gcc
	LD = arm-none-eabi-ld
	LINKER_FILE = -T ../msp432p401r.lds
	CPU = cortex-m4
	ARCH = armv7e-m
	SPECS = nosys.specs
	SIZE = arm-none-eabi-size
	PLATFORM_FLAGS = -mcpu=cortex-m4 -mthumb -march=armv7e-m -mfloat-abi=hard -mfpu=fpv4-sp-d16 --specs=nosys.specs
endif

 
# Compiler Flags and Defines

CFLAGS = -Wall -g -O0 -std=c99 $(INCLUDES) -D$(PLATFORM) $(PLATFORM_FLAGS) -D$(COURSE) -DVERBOSE 
CPPFLAGS = -MD
LDFLAGS = $(LINKER_FILE) -Xlinker -Map=$(TARGET).map
OBJS = $(SOURCES:.c=.o)
ASMS = $(SOURCES:.c=.asm)
PREP = $(SOURCES:.c=.i)
DEPS = $(SOURCES:.c=.d)

%.i : %.c 
	$(CC) -E $< $(CFLAGS) -o $@

%.asm : %.c
	$(CC) -S $< $(CFLAGS) -o $@

%.o : %.c 
	$(CC) -c $< $(CFLAGS) -o $@
	$(SIZE) $@

.PHONY: compile-all
compile-all:
	$(CC) -c $(SOURCES) $(CFLAGS)
	$(SIZE) $(OBJS)


.PHONY: build
build: 
	$(CC) $(SOURCES) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) -o $(TARGET).out
	$(SIZE) $(TARGET).out


.PHONY: clean
clean:
	rm -f $(OBJS) $(ASMS) $(PREP) $(DEPS) $(TARGET).out $(TARGET).map $(TARGET).d