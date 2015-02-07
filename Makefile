CC = gcc
Target = link.out
OBJS = 0207/link.c

$(Target): $(OBJS)
	$(CC) $^ -o $@
