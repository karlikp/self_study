#include "functions.h"

void test_ofstream()
{
	std::ofstream plik;   // output file stream - wczytanie informacji 
	plik.open("liczby.txt");
	if (plik.is_open()) // czy plik jest otwarty?
	{
		plik << 123 << std::endl;

		plik.close();
	}
}

void test_array()
{
	int arr[100];

}

void foreach_loop()
{
	int arr[5];
	int j{ 0 };
#if 0
	for (int i : arr) // foreach loop isn't use to input data to array
	{
		j++;
		i = j;
	}
#endif

	
	for (int i : arr) // foreach loop is good way to read data from array 
	{
		std::cout << i << '\n';
	}

	
}