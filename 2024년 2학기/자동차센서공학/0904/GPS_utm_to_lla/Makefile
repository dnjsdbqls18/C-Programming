# Compiler
CC = g++

# Compiler Flags
CFLAGS = -w -Wall -O2

# Source File
SRCS = GPS_utm_to_lla.cpp

# Output Program Name
PROG = GPS_utm_to_lla

# Rule to build the program and then execute it
$(PROG): $(SRCS)
	$(CC) $(CFLAGS) -o $(PROG) $(SRCS)
	./$(PROG)

# Clean rule to remove the executable
clean:
	rm -f $(PROG)
