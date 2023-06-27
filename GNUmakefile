# Install
BIN = xform_demo

# Flags
CFLAGS += -Wall -Wextra -pedantic -O2

SRC = main.c
OBJ = $(SRC:.c=.o)

UNAME_S := $(shell uname -s)
LIBS = $(X) -lforms -lX11 -lm

$(BIN):
	@mkdir -p bin
	rm -f bin/$(BIN) $(OBJS)
	$(CC) $(SRC) $(CFLAGS) -o bin/$(BIN) $(LIBS)


.PHONY : clean
clean :
	-rm -rf ./bin/
