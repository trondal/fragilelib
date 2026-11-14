CC=clang
CFLAGS :=                # start empty
CFLAGS += -g             # debug info for gdb/lldb
CFLAGS += -O1            # light optimization, still debuggable
CFLAGS += -std=c23       # use the C23 standard
CFLAGS += -Wall          # common warnings
CFLAGS += -Wextra        # extra warnings
CFLAGS += -Wpedantic     # strict ISO C compliance
#CFLAGS += -Werror        # treat warnings as errors
CFLAGS += -Wshadow       # warn on shadowed variables
#CFLAGS += -Wconversion   # warn on lossy implicit conversions
CFLAGS += -Wundef        # warn on undefined macros in #if
#CFLAGS += -Wformat=2     # strict printf/scanf format checks
SRC=src
OBJ=obj
SRCS=$(wildcard $(SRC)/*.c)
OBJS=$(patsubst $(SRC)/%.c, $(OBJ)/%.o, $(SRCS))
BINDIR=bin
BIN=$(BINDIR)/main

all:$(BIN)

$(BIN):$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@
	chmod +x $(BIN)
	./$(BIN)

$(OBJ)/%.o:$(SRC)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "Removing all except source files"
	rm -rf $(BINDIR)/* $(OBJ)/*