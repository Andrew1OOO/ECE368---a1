CC = gcc
CFLAGS = -Wall -Wextra -std=c11
LDFLAGS = 
TARGET = a1
SRC = a1.c

$(TARGET) : $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET) $(LDFLAGS) 

run: a1 
	./a1 

clean: 
	rm -f $(TARGET)

.PHONY: all clean