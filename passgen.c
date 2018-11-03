#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv) {
	if (argc != 2) {
		fprintf(stderr, "Usage: %s <length of password>\n", argv[0]);
		return 1;
	}

	int char_c = atoi(argv[1]);
	if (char_c < 1) {
		fprintf(stderr, "[\033[31m!\033[0m] Length must be a positive integer!\n");
		return 1;
	}

	srand(time(NULL));
	int i;
	for (i = 0; i < char_c; i++)
		printf("%c", rand() % 94 + 33);
	printf("\n");
	return 0;
}
