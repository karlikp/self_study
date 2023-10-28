#include "Question.h"

int main()
{
	std::cout << "The program asks a user about questions read from a file "
		"and sums points which are added for a correct answer.\n"
		"Choose answer by typing single character.\n"
		"Good luck!\n\n";

	std::vector<Question> quest_list;

	std::ifstream file("quiz.txt");
	if (file.is_open())
	{
		while (!file.eof())
		{
			Question current(file);
			quest_list.push_back(current);
		}

		for (int i = 0; i < quest_list.size(); i++)
		{
			quest_list[i].ask();
		}

		if (quest_list.size() > 0)
			std::cout << "Your point number is equel " << quest_list[0].give_points();
		else
			std::cout << "miss of questions";

	}
	file.close();

}