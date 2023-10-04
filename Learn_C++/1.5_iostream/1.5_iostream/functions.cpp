#include "functions.h"

void example_1()
{
	int x{ };
	cout << "Enter a value: ";
	cin >> x;
	cout << "Your value is equel " << x << '\n';

	return;
}

void example_2()
{
	cout << "Enter two numbers separated by a space: ";

	int x{};  //define variable x to hold user input (and zero-initialize it)
	int y{}; // define variable y to hold user input (and zero-initialize it)
	cin >> x >> y; //get two numbers and store in variable x and y respectively      

	cout << "You entered " << x << " and " << y << '\n';
	//When you try assign a fractal number to intiger, then the fractar part is ignore;
                                                                               
	return;
}

void summary()
{
	cout << "Easy way to understand reason of direction insertion (<<) and "
		"extreaction operators (>>)\n"
		"std::cin and std::cout always go on the left-hand side of the statement.\n"
		"std::cout is used to output a value (cout = character output)\n"
		"std::cin is used to get an input value (cin = character input)\n"
		"<< is used with std::cout, and shows the direction that data is moving\n"
		"(if represents the console, the output data is moving from the variable"
		"to the console).\n"
		"std::cout << x moves the value of x to the console.\n\n"

		">> is used with std::cin, and shows the direction that data is moving\n"
		"(id std::cin represents the keyboard, the input data is moving from "
		"the keyboard to the variable).\n"
		"std::cin >> x moves the value the user entered from the keyboard into x";
}  

void my_point_of_view()
{
	cout << "cout << (variable or string)\n"
		"Because (variable or string) 'move to' >> cout   //where cout = console\n"
		"\n"
		"Whereas: cin >> (variable)\n"
		"Because (cin = keyboard)\n"
		"cin >> 'move to' (variable)\n";
}
 