#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv) {
	
	int char_c;
	if (argc < 2)
		char_c = 0;
	else
		char_c = atoi(argv[1]);

	if (char_c < 1)
		char_c = 16;
	
	srand(time(NULL));
	int i;
	for (i = 0; i < char_c; i++)
		printf("%c", rand() % 94 + 33);
	printf("\n");
	
	return 0;
}
