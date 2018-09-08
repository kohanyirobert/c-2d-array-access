#include <stdio.h>
#include <stdlib.h>

#define ROWS 2
#define COLS 10

int main(void)
{
	int p[ROWS][COLS];
	int *q = *p;

	printf("rows:         %u\n", ROWS);
	printf("cols:         %u\n", COLS);
	printf("rows * cols:  %u\n", ROWS * COLS);
	printf("sizeof (int): %u\n", sizeof (int));
	printf("sizeof p:     %u (ROWS * COLS * sizeof (int))\n", sizeof p);
	printf("sizeof q:     %u\n", sizeof q);
	printf("sizeof *p:    %u (COLS * sizeof (int))\n", sizeof *p);
	printf("sizeof *q:    %u (sizeof (int))\n", sizeof *q);
	printf("p:            %u\n", p);
	printf("p + 1;        %u\n", p + 1);
	printf("q:            %u\n", q);
	printf("q + 1:        %u\n", q + 1);

	for (size_t i = 0; i < ROWS; ++i) {
		for (size_t j = 0; j < COLS; ++j) {
			/*
			printf("%u\n", p[i][j]);
			printf("%u\n", *(*(p + i) + j));
			printf("%u\n", *(q + i * COLS + j));
			*/
		}
	}

	for (size_t i = 0; i < ROWS * COLS; ++i) {
		/*
		printf("%u\n", q[i]);
		printf("%u\n", *(q + i));
		*/
	}

	return EXIT_SUCCESS;
}
