CC=gcc

default: passgen

passgen: passgen.c
	$(CC) -o $@ passgen.c

install: passgen
	cp passgen /usr/local/bin

uninstall: /usr/local/bin/passgen
	rm -f /usr/local/bin/passgen

clean:
	rm -rf passgen
