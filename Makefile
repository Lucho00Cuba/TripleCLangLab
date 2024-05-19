# Define the compiler for C, C++, and C#
CC_C = gcc
CC_CPP = g++
CC_CS = csc # mcs

# Define the compiler flags
CFLAGS = -Wall -Wextra -O2

# Define the color codes for output
GREEN  := $(shell tput -Txterm setaf 2)
YELLOW := $(shell tput -Txterm setaf 3)
WHITE  := $(shell tput -Txterm setaf 7)
CYAN   := $(shell tput -Txterm setaf 6)
RESET  := $(shell tput -Txterm sgr0)
SHELL  := /bin/bash

.PHONY: all

all: help

# Check if the target is 'build' and ensure 'file' is provided
ifeq ($(MAKECMDGOALS),build)
    ifeq ($(file),)
        $(error You must provide a source file. Usage: make build file=source.ext)
    endif
    # Determine the compiler based on the file extension
    # Define the target executable name based on the provided source file
    ifeq ($(suffix $(file)),.cpp)
        CC = $(CC_CPP) $(CFLAGS)
		TARGET = -o $(basename $(file))
		EXEC = ./$(basename $(file))
    endif
    ifeq ($(suffix $(file)),.c)
        CC = $(CC_C) $(CFLAGS)
		TARGET = -o $(basename $(file))
		EXEC = ./$(basename $(file))
    endif
    ifeq ($(suffix $(file)),.cs)
        CC = $(CC_CS)
		TARGET = -out:$(basename $(file)).exe
		EXEC = /opt/homebrew/bin/mono $(basename $(file)).exe
    endif
    ifneq ($(suffix $(file)),.cpp)
        ifneq ($(suffix $(file)),.c)
            ifneq ($(suffix $(file)),.cs)
                $(error Unsupported file extension. Only .c, .cpp, and .cs are supported.)
            endif
        endif
    endif
endif

## Build:
build: ## Compile the provided source file into an executable
	$(CC) $(TARGET) $(file)
	# runner
	@$(EXEC)

# Define the list of extensions or filenames to ignore during clean
IGNORE_EXTENSIONS = c cpp cs bck
IGNORE_NAMES = Makefile README.md

## Clean:
clean: ## Clean the directory by removing all files that are not in the ignore list
	find . -type f $(foreach ext, $(IGNORE_EXTENSIONS), ! -name '*.$(ext)') $(foreach name, $(IGNORE_NAMES), ! -name '$(name)') -exec rm -f {} +

## Help:
help: ## Show this help.
	@echo ''
	@echo 'Usage:'
	@echo '  ${YELLOW}make${RESET} ${GREEN}<target>${RESET} ${GREEN}<options>${RESET}'
	@echo ''
	@echo 'Targets:'
	@awk 'BEGIN {FS = ":.*?## "} { \
		if (/^[a-zA-Z_-]+:.*?##.*$$/) {printf "    ${YELLOW}%-20s${GREEN}%s${RESET}\n", $$1, $$2} \
		else if (/^## .*$$/) {printf "  ${CYAN}%s${RESET}\n", substr($$1,4)} \
		}' $(MAKEFILE_LIST)