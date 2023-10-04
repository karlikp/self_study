#include "Header.h"

void ex_1_1()
{
	char buf[10];
	std::cin >> buf;
	for (int i = 0; i < 10; i++)
	{
		std::cout << buf[i];
	}
}

void ex_1_2()
{
	char buf[15];
	//std::cin >> std::setw(10) >> buf;
	std::cin >> buf;

	for (int i = 0; i < 10; i++)
	{
		std::cout << buf[i];
	}
	return;
}

void ex_1_3() // 'std::cin' discard whitespace 
{
	char ch;
	while (std::cin >> ch)
		std::cout << ch;

	return;
}

void ex_1_4() //get() function extract even whitespace
{
	char ch;
	while (std::cin.get(ch))
		std::cout << ch;
}

void ex_1_5() //std::get() also has a string version with limit to read 
{
	// Read up to 10 characters
	char strBuf[11];
	std::cin.get(strBuf, 10);
	std::cout << strBuf << '\n';

	// Read up to 10 more characters (or not?)
	// NOT, because new line stop work of std:cin.get()
	std::cin.get(strBuf, 10);
	std::cout << strBuf << '\n';

	return;
}

void ex_1_6()
{
	char strBuf[11];
	// Read up to 10 characters
	std::cin.getline(strBuf, 11);
	std::cout << strBuf << '\n';

	// Read up to 10 more characters
	// In this case, program work normal, because is used memer function: .getline()

	std::cin.getline(strBuf, 11);
	std::cout << strBuf << '\n';

	return;
}

void ex_1_7()
{
	char strBuf[100];
	std::cin.getline(strBuf, 100);
	std::cout << strBuf << '\n';
	std::cout << std::cin.gcount() << " characters were read" << '\n';
	// std::cin.gcount() let know you how many character were extracred

	return;
}

void ex_1_8()
{	// Essential is #include <string>

	// Special version of getline () for std::string
	
	std::string strBuf;
	std::getline(std::cin, strBuf);
	std::cout << strBuf << '\n';

	return;
}