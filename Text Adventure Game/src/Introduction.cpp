#include <iostream>
#include <string>
#include <algorithm>

void show_introduction()
{
	std::cout << "Welcome To: Text Adventure!\n\n";
	std::cout << "Please enter your character's name: ";
	
	std::string player_name;
	std::getline(std::cin, player_name);

	system("CLS");

	std::cout << "BACKGROUND INFORMATION: On a secretive mission for your country, you were instructed to" << std::endl;
	std::cout << "infiltrate a seemingly deserted castle. Once inside, you find that you are not alone." << std::endl;
	std::cout << "You hear a voice hiss around the castle, telling you that you could choose your path" << std::endl;
	std::cout << "out. Only one of the many paths will lead to to escape, so pick wisely." << std::endl;
	std::cout << "\n----------------------------------------\n" << std::endl;

	while (true)
	{
		std::string begin;

		std::cout << "Type READY to begin: ";
		std::getline(std::cin, begin);

		std::transform(begin.begin(), begin.end(), begin.begin(), toupper);

		if (begin == "READY")
		{
			break;
		}
	}
}
