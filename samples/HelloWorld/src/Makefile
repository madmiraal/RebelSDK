# SPDX-FileCopyrightText: 2025 Rebel SDK contributors
#
# SPDX-License-Identifier: MIT

# Simple Library Makefile

CC = gcc
CFLAGS = -std=c11 -fPIC -Iinclude
LDFLAGS = -rdynamic -shared
SRC = helloworld.c
OBJ = build/helloworld.o
LIB = build/libhelloworld.so

$(LIB): $(OBJ)
	$(CC) $(LDFLAGS) $^ -o $@

$(OBJ): build/%.o: %.c
	mkdir -p build
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm -rf build
