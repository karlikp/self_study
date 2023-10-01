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

int max_element(list<int> roll)
{
	if (roll.empty())
		if()
}