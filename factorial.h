#ifndef __FACTORIAL_H__
#define __FACTORIAL_H__

#include <stdint.h>
#define MAX_FACT_NUM 20
/*
A utility class to calculate the factorial
- Recursion
- Dynamic Programming
- Regular For Loop
*/
class Factorial
{

public:
Factorial(); // I don't think there is any use for these
~Factorial();

uint64_t recursive_fact(uint64_t);
uint64_t dynamic_fact(uint64_t);
uint64_t loop_fact(uint64_t);

private:
uint64_t dyn_arr[MAX_FACT_NUM];
};

#endif