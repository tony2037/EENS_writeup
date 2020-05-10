GCC = gcc
FLAGS = -g -O0
OBJ = ransomware decrypt
SRC = ransomware.c

$(OBJ): $(SRC)
	$(GCC) $(FLAGS) $< -o $@

.PHONY: clean
clean:
	$(RM) $(OBJ) *.ztex
	$(RM) victims/*
	cp ../recovery/* victims/.
	$(RM) peda-session-ransomware.txt
