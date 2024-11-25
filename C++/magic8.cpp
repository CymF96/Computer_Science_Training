# include <iostream>
# include <cstdlib>

int	main()
{
	srand(time(NULL));
	int 	answer = std::rand() % 10;
	char	*question;
	char	*name;

	std::cout << "\tWELCOME TO MAGIC BALL\n       ***********************\n";
	std::cout << "What is your name, friend?\n";
	std::cin >> name;
	std::cout << "What is your question, " << name << "?\n";
	std::cin >> question;

	switch(answer)
	{
		case 0:
			std::cout << "For sure\n";
			break;
		case 1:
			std::cout << "Certainly\n";
			break;
		case 2:
			std::cout << "Will happen soon\n";
			break;
		case 3:
			std::cout << "Yes\n";
			break;
		case 4:
			std::cout << "Probably\n";
			break;
		case 5:
			std::cout << "Not sure\n";
			break;
		case 6:
			std::cout << "Probably not\n";
			break;
		case 7:
			std::cout << "No\n";
			break;
		case 8:
			std::cout << "Not for now, be patient\n";
			break;
		case 9:
			std::cout << "Maybe in another lifetime\n";
			break;
	}
	return (0);
}