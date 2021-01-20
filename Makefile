CFLAGS   = -std=c99 -pedantic -Wall -Wno-deprecated-declarations

all: brad lawrence

brad: brad_ind.c
	cc ${CFLAGS} -lm brad_ind.c -o brad

lawrence: lawrence_ind.c
	cc ${CFLAGS} -lm lawrence_ind.c -o lawrence

