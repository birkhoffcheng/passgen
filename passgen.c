#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	if (argc < 2) {
		fprintf(stderr, "Usage: %s <length of password>\n", argv[0]);
		return 1;
	}
	unsigned int num_char = atoi(argv[1]);
	unsigned int seed;
	FILE *fp = fopen("/dev/urandom", "r");
	fread(&seed, sizeof(seed), 1, fp);
	fclose(fp);
	srand(seed);
	unsigned int i;
	for (i = 0; i < num_char; i++) {
		printf("%c", rand() % 94 + 33);
	}
	printf("\n");
	return 0;
}
