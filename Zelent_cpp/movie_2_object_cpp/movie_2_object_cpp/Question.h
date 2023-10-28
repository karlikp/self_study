#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

/* The program asks a user about questions read from a file and sums points
which are added for a good answer.*/

class Question
{
	static int points_counter;
	std::string content, a, b, c, d;
	char correct_answer;

public:

	Question(std::ifstream&);
	~Question();
	void read_file(std::ifstream&);
	void ask();
	int give_points();

};

