#include "Question.h"

Question::Question(std::ifstream& file)
{
	Question::read_file(file);
}

Question::~Question()
{
}

int Question::points_counter = 0;

void Question::read_file(std::ifstream& file)
{
	std::string temp;
	std::getline(file, content);
	std::getline(file, a);
	std::getline(file, b);
	std::getline(file, c);
	std::getline(file, d);
	file >> correct_answer;
	std::getline(file, temp);
}

void Question::ask()
{
	std::cout << content << "\n a)" << a << "\n b)" << b
		      << "\n c)" << c << "\n d)" << d << '\n';
	char answer;
	std::cin >> answer;
	if (answer == correct_answer)
		points_counter++;
	return;
}

int Question::give_points()
{
	return points_counter;
}
