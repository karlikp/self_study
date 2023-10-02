// 4_quicksort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "functions.h"

int main()
{	//exercise 1

	/*vector<int> tab = { 1, 2, 3, 4, 5, 5 };

	int result = sum(tab);

	cout << "sum result is equal " << result;
	cout << "\nlast element is equal " << tab.back();*/ 

	//exercise 2
#if 0

	list<int> number_members = { 1, 2, 3, 4, 12, 13, 16 };

	cout << "Our club include " << counter(number_members) << " members.";

#endif

	//exercise 3

	list<int> elements = { 1, 2, 3, 4, 12, 1447, 16 };
	int max{ 0 };
	cout << "Max element of the list is equal " << max_element(elements,max);



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
