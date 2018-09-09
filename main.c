#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#define ROWS 2
#define COLS 5

uint8_t p[ROWS][COLS];
uint8_t (*q)[COLS] = p;
uint8_t *r = *p;

uint8_t main(void)
{
	printf("	           ROWS = %u\n", ROWS);
	printf("	           COLS = %u\n", COLS);
	printf("	    ROWS * COLS = %u\n", ROWS * COLS);
	putchar('\n');
	printf("  uint8_t p[ROWS][COLS] = ...\n");
	printf("     uint8_t (*q)[COLS] = p\n");
	printf("	     uint8_t *r = *p\n");
	putchar('\n');
	printf("       sizeof (uint8_t) = %u\n", sizeof (uint8_t));
	putchar('\n');
	printf("	       sizeof p = %u (ROWS * COLS * sizeof (uint8_t))\n", sizeof p);
	printf("	       sizeof q = %u\n", sizeof q);
	printf("	       sizeof r = %u\n", sizeof r);
	putchar('\n');
	printf("	      sizeof *p = %u (COLS * sizeof (uint8_t))\n", sizeof *p);
	printf("	      sizeof *q = %u\n", sizeof *q);
	printf("	      sizeof *r = %u (sizeof (uint8_t))\n", sizeof *r);
	putchar('\n');
	printf("		      p = %u\n", p);
	printf("		  p + 1 = %u\n", p + 1);
	putchar('\n');
	printf("		      q = %u\n", q);
	printf("		  q + 1 = %u\n", q + 1);
	putchar('\n');
	printf("		      r = %u\n", r);
	printf("		  r + 1 = %u\n", r + 1);

	for (size_t i = 0; i < ROWS; ++i) {
		for (size_t j = 0; j < COLS; ++j) {
			/*
			printf("		p[%u][%u] = %" PRIu8 "\n", i, j, p[i][j]);
			printf("       *(*(p + %u) + %u)) = %" PRIu8 "\n", i, j, *(*(p + i) + j));
			printf("		q[%u][%u] = %" PRIu8 "\n", i, j, q[i][j]);
			printf("       *(*(q + %u) + %u)) = %" PRIu8 "\n", i, j, *(*(q + i) + j));
			printf("    *(r + %u + COLS + %u) = %" PRIu8 "\n", i, j, *(r + i * COLS + j));
			*/
		}
	}

	for (size_t i = 0; i < ROWS * COLS; ++i) {
		/*
		printf("		   r[%u] = %" PRIu8 "\n", i, r[i]);
		printf("	       *(r + %u) = %" PRIu8 "\n", i, *(r + i));
		*/
	}

	return EXIT_SUCCESS;
}
