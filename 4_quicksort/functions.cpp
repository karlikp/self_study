#include "functions.h"

int sum(vector<int> arr)
{
	if (arr.empty())
		return 0;
	else 
	{	
		int temp;
		temp = arr.back();
		arr.pop_back();
		return temp + sum(arr);
	}
}

int counter(list<int> roll) //roll = lista
{	
	int count{ 0 };

	if (roll.empty())
		return 0;
	else
	{
		count++;
		roll.pop_back();
		return 1 + counter(roll);
	}
}

int max_element(list<int> roll, int max) // max is comparing variable which save the bigest value from list
{

	if (roll.empty())
		return max;
	else
	{
		if (max < roll.back())
		{
			max = roll.back();
			
		}

		roll.pop_back();
		return max_element(roll, max);
	}
}

