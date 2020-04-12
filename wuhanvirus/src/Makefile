GCC = gcc
FLAGS = -g -O0
OBJ = ransomware
SRC = ransomware.c

$(OBJ): $(SRC)
	$(GCC) $(FLAGS) $< -o $@

.PHONY: clean
clean:
	$(RM) $(OBJ) *.ztex
	$(RM) victims/*
	cp ../recovery/* victims/.
