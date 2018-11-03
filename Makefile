CC=gcc

default: passgen

passgen: passgen.c
	$(CC) -o $@ passgen.c

install: passgen
	cp passgen /usr/bin

clean:
	rm -rf passgen
