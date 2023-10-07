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

pair<int, string> binary_sort(vector<string> array, int expected_item, int high_index) //low and high should have value 0 
{
	int current_index = ((high_index + 1) - low_index) / 2;

	if (array[current_index].first == expected_item || array.size() == 0) //check to know if current element is expected item
	{
		if (array[current_index].first == expected_item)
			return array[current_index];
		else
			cout << "\nexpected item doesn't exist";
			return;
	}

	else if (current_index < expected_item)
	{
		high_index = (current_index - 1);
		binary_sort(array, expected_item, low_index, high_index);
	}

	else if (current_index > expected_item)
	{
		low_index = current_index + 1;
		binary_sort(array, expected_item, low_index, high_index);
	}

}

void input_file(vector<pair<int, string>> record)
{
	ifstream plik;					
	plik.open("student_list.txt");
	
	while (!plik.eof())
	{
		string line;

		getline(plik, line);




	}

}

