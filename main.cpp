#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>
#include "factorial.h"

int main(int argc, char **argv)
{
	Factorial fact;
	uint32_t fact_num;
	uint64_t fact_answer;
	clock_t time;


	printf("Finding a factorial for: %s\n", argv[1]);
	fact_num = strtoul(argv[1], NULL, 10);

	time = clock();
	fact_answer = fact.recursive_fact(fact_num);
	time = clock() - time;


	printf ("Recrusive Factorial:\n"
		"\tAnswer: [%lu]\n"
		"\tClicks: [%ld]\n"
		"\tTime:   [%f] seconds\n",
		fact_answer, time,((float)time)/CLOCKS_PER_SEC);


	time = clock();
	fact_answer = fact.loop_fact(fact_num);
	time = clock() - time;


	printf ("Loop Factorial:\n"
		"\tAnswer: [%lu]\n"
		"\tClicks: [%ld]\n"
		"\tTime:   [%f] seconds\n",
		fact_answer, time,((float)time)/CLOCKS_PER_SEC);

	time = clock();
	fact_answer = fact.dynamic_fact(fact_num);
	time = clock() - time;


	printf ("Dynamic Factorial:\n"
		"\tAnswer: [%lu]\n"
		"\tClicks: [%ld]\n"
		"\tTime:   [%f] seconds\n",
		fact_answer, time,((float)time)/CLOCKS_PER_SEC);
}
