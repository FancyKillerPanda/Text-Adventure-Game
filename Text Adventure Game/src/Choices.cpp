#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include <algorithm>
#include <sstream>


void choice_1()
{
	std::cout << "-----STAGE 1-----\n\n";
	std::cout << "As you wander around the massive castle, you come across four (4) doors, labelled '1'," << std::endl;
	std::cout << "'2', '3' and '4'. The voice reappears and tells you that only one of the doors will" << std::endl;
	std::cout << "lead to the next stage, and once a door is picked your choice cannot be changed.\n" << std::endl;
	std::cout << "Which door do you pick? ";
	
	std::string choice_door_num;
	srand((int)time(0));
	int real_door_num = (rand() % 4) + 1;
	//int real_door_num = 1;

	std::getline(std::cin, choice_door_num);
	
	system("CLS");

	if (std::to_string(real_door_num) == choice_door_num)
	{
		std::cout << "You slowly open door " << choice_door_num << ", hoping it isn't a trap. But it looks like" << std::endl;
		std::cout << "you picked the correct one. After being led through a dark passageway and into" << std::endl;
		std::cout << "an even darker room, the raspy voice speaks again. \"Well, well. It looks like" << std::endl;
		std::cout << "you got a little lucky there. Well good for you, but know that luck will not" << std::endl;
		std::cout << "always be on your side.\"" << std::endl;
	}
	else
	{
		std::cout << "You slowly open door " << choice_door_num << ", hoping it isn't a trap. At first you think" << std::endl;
		std::cout << "you have made the right choice, but as the door slams shut behind you and an" << std::endl;
		std::cout << "evil laughter echos around, your heart drops. \"If you couldn't even make it past" << std::endl;
		std::cout << "Stage 1, you deserve to be in the position you're in. Oh well, it sucks to be you.\"" << std::endl;
		std::cout << "A silence fills the room, before the ground beneath you drops out and you fall into" << std::endl;
		std::cout << "a well of lava. DEAD! GAME OVER!\n" << std::endl;

		system("PAUSE");
		exit(0);
	}

}


void choice_2()
{
	std::cout << "-----STAGE 2-----\n\n";
	std::cout << "The voice speaks again. It asks you what you would do if it set you free. Would you:" << std::endl;
	std::cout << "\ta) Return home and never speak of the incident again, or" << std::endl;
	std::cout << "\tb) Gather troops to fight the creature that is holding you captive, or" << std::endl;
	std::cout << "\tc) Tell friends and family about the perils you faced in the castle, or" << std::endl;
	std::cout << "\td) None of the above." << std::endl;
	std::cout << "\nPlease enter A, B, C, or D: ";

	std::string path_choice;
	std::getline(std::cin, path_choice);

	system("CLS");

	if (path_choice == "a" or path_choice == "A")
	{
		std::cout << "The Master likes your answer, and he is willing to move you on to the next stage" << std::endl;
		std::cout << "if you promise to do as you have said.\n" << std::endl;			
	}
	else if (path_choice == "b" or path_choice == "B")
	{
		std::cout << "The Master likes your honesty, but will not allow it. He does not want to draw" << std::endl;
		std::cout << "attention to himself, and thus wishes to kill you. Before you are able to respond," << std::endl;
		std::cout << "the floor of the room you are in collapses, leaving you to fall 246 meters to an" << std::endl;
		std::cout << "unfortunate end. DEAD! GAME OVER!\n" << std::endl;
			
		system("PAUSE");
		exit(0);
	}
	else if (path_choice == "c" or path_choice == "C")
	{
		std::cout << "The Master does not want attention drawn to him, so he will not have you telling" << std::endl;
		std::cout << "anyone about anything that went on in the castle. To make sure absolutely nothing" << std::endl;
		std::cout << "slips from your \"puny mouth\" (the Master's words, not mine), he has sentenced you" << std::endl;
		std::cout << "to death. Before you can say anything, the floor of the room collapses, leaving you" << std::endl;
		std::cout << "to fall 246 meters to an unfortunate end. DEAD! GAME OVER!\n" << std::endl;
			
		system("PAUSE");
		exit(0);
	}
	else if (path_choice == "d" or path_choice == "D")
	{
		std::cout << "The Master does not take kindly to your ignorance. He only tortures people who conform" << std::endl;
		std::cout << "to his standards (i.e. picking one of his response options). He sentences you to death," << std::endl;
		std::cout << "and before you are able to respond, the floor of the room you are in collapses, leaving" << std::endl;
		std::cout << "you to fall 246 meters to an unfortunate end. DEAD! GAME OVER!\n" << std::endl;
			
		system("PAUSE");
		exit(0);
	}
	else
	{
		std::cout << "That is not a valid choice. The Master sees that you are incompetent, and has sentenced" << std::endl;
		std::cout << "you to death. Before you are able to respond, the floor of the room you are in collapses" << std::endl;
		std::cout << "you fall 246 meters to an unfortunate end. DEAD! GAME OVER!\n" << std::endl;

		system("PAUSE");
		exit(0);
	}
		
}


void choice_3()
{
	std::cout << "-----STAGE 3-----\n\n";
	std::cout << "The Master speaks another time. You can tell from his voice that he is getting" << std::endl;
	std::cout << "worried. He tells you he is thinking of a number between 1 and 20. If you guess" << std::endl;
	std::cout << "the number correctly within 4 tries, he will move you on to the next stage. If" << std::endl;
	std::cout << "not, he will sentence you to death.\n" << std::endl;

	srand((int)time(0));
	int mystery_number = (rand() % 20) + 1;
	int attempts = 0;
	std::string guess;

	system("PAUSE");
	system("CLS");

	for (int i = 0; i < 4; i++)
	{
		attempts += 1;
		
		std::cout << "What number would you like to guess? " << std::endl;
		std::getline(std::cin, guess);

		int int_guess;
		std::stringstream(guess) >> int_guess;

		if (int_guess == mystery_number)
		{
			attempts = 0;
			break;
		}
		else if (int_guess < 1 || int_guess > 20)
		{
			std::cout << "\nYou either guessed a number out of the range 1-25, or typed in a different character." << std::endl;
			std::cout << "Either way, bad choice.\n" << std::endl;
		}
		
		else if (int_guess < mystery_number)
		{
			std::cout << "\nThat number was too low...\n" << std::endl;
		}
		else if (int_guess > mystery_number)
		{
			std::cout << "\nThat number was too high...\n" << std::endl;
		}
	}

	system("CLS");

	if (attempts == 4)
	{
		std::cout << "You have not guessed the number in 4 tries. As the Master said, you shall now" << std::endl;
		std::cout << "be killed. Before you could say anything in response, the ceiling of the room" << std::endl;
		std::cout << "collapsed and crushed you. DEAD! GAME OVER!\n" << std::endl;

		system("PAUSE");
		exit(0);
	}
	else
	{
		std::cout << "Well Done. The Master congratulates you on guessing the number correctly," << std::endl;
		std::cout << "but he still has 1 last challenge for you.\n" << std::endl;
	}
}


void choice_4()
{
	std::cout << "-----STAGE 4-----\n\n";
	std::cout << "The Master is tired of having you here, so he decides" << std::endl;
	std::cout << "to let you out before the final task. I suggest you take" << std::endl;
	std::cout << "this opportunity before it is too late. Well Done, Have Fun." << std::endl;
}