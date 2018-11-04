CC=gcc

default: passgen

passgen: passgen.c
	$(CC) -o $@ passgen.c

install: passgen
	cp passgen /usr/bin

uninstall: /usr/bin/passgen
	rm -rf /usr/bin/passgen

clean:
	rm -rf passgen
