#include "factorial.h"
#include <stdint.h>

Factorial::Factorial()
{
	for(int i = 0; i < MAX_FACT_NUM; i++)
	{
		dyn_arr[i] = -1;
	}
};

Factorial::~Factorial(){};

uint64_t Factorial::recursive_fact(uint64_t num)
{
	if(num > MAX_FACT_NUM)
	{
		return -1;
	}

	if(num == 1)
	{
		return 1;
	}

	return num * recursive_fact(num - 1);
}

uint64_t Factorial::dynamic_fact(uint64_t num)
{
	if(num > MAX_FACT_NUM)
	{
		return -1;
	}

	if(num == 1 || num == 0)
	{
		return 1;
	}
	else if(dyn_arr[num - 1] != -1)
	{
		return dyn_arr[num - 1];
	}
	else
	{
		dyn_arr[num - 1] = num * dynamic_fact(num -1);
	}

	return dyn_arr[num - 1];
}

uint64_t Factorial::loop_fact(uint64_t num)
{
	if(num > MAX_FACT_NUM)
	{
		return -1;
	}
	uint64_t ret_value = 1;
	for(int i = 1; i <= num; i++)
	{
		ret_value *= i;
	}
	return ret_value;
}