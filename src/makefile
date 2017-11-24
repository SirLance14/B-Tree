IDIR=../include
CC=gcc
CFLAGS=-I$(IDIR)

ODIR=obj

_DEPS = b_tree.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = b_tree.o main.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

SRC = b_tree.c main.c

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	gcc -o $@ $^ $(CFLAGS)