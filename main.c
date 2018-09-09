#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#define ROWS (size_t)2
#define COLS (size_t)5

uint8_t p[ROWS][COLS];
uint8_t (*q)[COLS] = p;
uint8_t *r = *p;

uint8_t main(void)
{
	printf("	           ROWS = %zu\n", ROWS);
	printf("	           COLS = %zu\n", COLS);
	printf("	    ROWS * COLS = %zu\n", ROWS * COLS);
	putchar('\n');
	printf("  uint8_t p[ROWS][COLS] = ...\n");
	printf("     uint8_t (*q)[COLS] = p\n");
	printf("	     uint8_t *r = *p\n");
	putchar('\n');
	printf("       sizeof (uint8_t) = %zu\n", sizeof (uint8_t));
	putchar('\n');
	printf("	       sizeof p = %zu (ROWS * COLS * sizeof (uint8_t))\n", sizeof p);
	printf("	       sizeof q = %zu\n", sizeof q);
	printf("	       sizeof r = %zu\n", sizeof r);
	putchar('\n');
	printf("	      sizeof *p = %zu (COLS * sizeof (uint8_t))\n", sizeof *p);
	printf("	      sizeof *q = %zu\n", sizeof *q);
	printf("	      sizeof *r = %zu (sizeof (uint8_t))\n", sizeof *r);
	putchar('\n');
	printf("		      p = %zu (%p)\n", p, p);
	printf("		  p + 1 = %zu (%p)\n", p + 1, p + 1);
	putchar('\n');
	printf("		      q = %zu (%p)\n", q, q);
	printf("		  q + 1 = %zu (%p)\n", q + 1, q + 1);
	putchar('\n');
	printf("		      r = %zu (%p)\n", r, r);
	printf("		  r + 1 = %zu (%p)\n", r + 1, r + 1);

	for (size_t i = 0; i < ROWS; ++i) {
		for (size_t j = 0; j < COLS; ++j) {
			/*
			printf("		p[%zu][%zu] = %" PRIu8 "\n", i, j, p[i][j]);
			printf("       *(*(p + %zu) + %zu)) = %" PRIu8 "\n", i, j, *(*(p + i) + j));
			printf("		q[%zu][%zu] = %" PRIu8 "\n", i, j, q[i][j]);
			printf("       *(*(q + %zu) + %zu)) = %" PRIu8 "\n", i, j, *(*(q + i) + j));
			printf("    *(r + %zu + COLS + %zu) = %" PRIu8 "\n", i, j, *(r + i * COLS + j));
			*/
		}
	}

	for (size_t i = 0; i < ROWS * COLS; ++i) {
		/*
		printf("		   r[%zu] = %" PRIu8 "\n", i, r[i]);
		printf("	       *(r + %zu) = %" PRIu8 "\n", i, *(r + i));
		*/
	}

	return EXIT_SUCCESS;
}
