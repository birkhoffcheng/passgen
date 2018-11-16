#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	if (argc < 2) {
		fprintf(stderr, "Usage: %s <length of password>\n", argv[0]);
		return 1;
	}
	int num_char = atoi(argv[1]);
	if (num_char < 0) {
		fprintf(stderr, "Usage: %s <length of password>\n", argv[0]);
		return 1;
	}
	unsigned int random;
	FILE *fp = fopen("/dev/urandom", "rb");
	unsigned int i;
	for (i = 0; i < num_char; i++) {
		fread(&random, sizeof(random), 1, fp);
		printf("%c", random % 94 + 33);
	}
	printf("\n");
	fclose(fp);
	return 0;
}
