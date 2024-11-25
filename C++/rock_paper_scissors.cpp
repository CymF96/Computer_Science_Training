# include <iostream>
# include <stdlib.h>

int	main()
{
	srand(time(NULL));
	int	computer = rand() % 3 + 1;
	int user = 0;

	std::cout << "====================\n";
	std::cout << "rock paper scissors!\n";
	std::cout << "====================\n";

	std::cout << "1) ✊\n";
	std::cout << "2) ✋\n";
	std::cout << "3) ✌️\n";

	std::cout << "shoot! ";
	std::cin >> user;
	std::cout << "Computer shoots: " << computer << "\n";
	
	if (user == 1)
	{
		if (computer == 2)
			std::cout << "YOU LOSE! 😭\n";
		else if (computer == 3)
			std::cout << "YOU WIN! 🥳\n";
		else
			std::cout << "The referee askes a rematch 🏁\n";
	}
	else if (user == 2)
	{
		if (computer == 3)
			std::cout << "YOU LOSE! 😭\n";
		else if (computer == 1)
			std::cout << "YOU WIN! 🥳\n";
		else
			std::cout << "The referee askes a rematch 🏁\n";
	}
	else
	{
		if (computer == 1)
			std::cout << "YOU LOSE! 😭\n";
		else if (computer == 2)
			std::cout << "YOU WIN! 🥳\n";
		else
			std::cout << "The referee askes a rematch 🏁\n";
	}
	return (0);
}