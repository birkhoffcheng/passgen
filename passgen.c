#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	if (argc < 2) {
		fprintf(stderr, "Usage: %s <length of password>\n", argv[0]);
		return 1;
	}
	unsigned int num_char = atoi(argv[1]);
	unsigned int rand;
	FILE *fp = fopen("/dev/urandom", "rb");
	unsigned int i;
	for (i = 0; i < num_char; i++) {
		fread(&rand, sizeof(rand), 1, fp);
		printf("%c", rand % 94 + 33);
	}
	printf("\n");
	fclose(fp);
	return 0;
}
