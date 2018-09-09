#include <stdio.h>
#include <stdlib.h>

#define ROWS 2
#define COLS 10

int p[ROWS][COLS];
int (*q)[COLS] = p;
int *r = *p;

int main(void)
{
	printf("	       ROWS = %u\n", ROWS);
	printf("	       COLS = %u\n", COLS);
	printf("        ROWS * COLS = %u\n", ROWS * COLS);
	putchar('\n');
	printf("  int p[ROWS][COLS] = ...\n");
	printf("     int (*q)[COLS] = p\n");
	printf("	     int *r = *p\n");
	putchar('\n');
	printf("       sizeof (int) = %u\n", sizeof (int));
	putchar('\n');
	printf("	   sizeof p = %u (ROWS * COLS * sizeof (int))\n", sizeof p);
	printf("	   sizeof q = %u\n", sizeof q);
	printf("	   sizeof r = %u\n", sizeof r);
	putchar('\n');
	printf("	  sizeof *p = %u (COLS * sizeof (int))\n", sizeof *p);
	printf("	  sizeof *q = %u\n", sizeof *q);
	printf("	  sizeof *r = %u (sizeof (int))\n", sizeof *r);
	putchar('\n');
	printf("		  p = %u\n", p);
	printf("	      p + 1 = %u\n", p + 1);
	putchar('\n');
	printf("		  q = %u\n", q);
	printf("	      q + 1 = %u\n", q + 1);
	putchar('\n');
	printf("		  r = %u\n", r);
	printf("	      r + 1 = %u\n", r + 1);

	for (size_t i = 0; i < ROWS; ++i) {
		for (size_t j = 0; j < COLS; ++j) {
			/*
			printf("	    p[%u][%u] = %d\n", i, j, p[i][j]);
			printf("   *(*(p + %u) + %u)) = %d\n", i, j, *(*(p + i) + j));
			printf("	    q[%u][%u] = %d\n", i, j, q[i][j]);
			printf("   *(*(q + %u) + %u)) = %d\n", i, j, *(*(q + i) + j));
			printf("*(r + %u + COLS + %u) = %d\n", i, j, *(r + i * COLS + j));
			*/
		}
	}

	for (size_t i = 0; i < ROWS * COLS; ++i) {
		/*
		printf("	       r[%u] = %d\n", i, r[i]);
		printf("	   *(r + %u) = %d\n", i, *(r + i));
		*/
	}

	return EXIT_SUCCESS;
}
