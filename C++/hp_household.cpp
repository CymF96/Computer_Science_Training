# include <iostream>
# include <string>

int	main()
{
	int	gryffindor = 0, hufflepuff = 0, ravenclaw = 0, slytherin = 0, muggle = 0;
	int	answer;

	std::cout << "Welcome to Poudlard young wizards and witches!\nPlease answer honestly the Sorting_Hat's questions to know your future household\n\n";
	answer = 0;
	std::cout << "Q1) When I'm dead, I want people to remember me as:\n\t1) The Good\n\t2) The Great\n\t3) The Wise\n\t4) The Bold\n\n";
	std::cin >> answer;
	if (answer == 1)
		gryffindor++;
	else if (answer == 2)
		hufflepuff++;
	else if (answer == 3)
		ravenclaw++;
	else if (answer == 4)
		slytherin++;
	else
		muggle = 1;
	
	answer = 0;
	std::cout << "Q2) Dawn or Dusk:\n\t1) Dawn\n\t2) Dusk\n\n";
	std::cin >> answer;
	if (answer == 1)
	{
		gryffindor++;
		ravenclaw++;
	}
	else if (answer == 2)
	{
		hufflepuff++;
		slytherin++;
	}
	else
		muggle++;

	answer = 0;
	std::cout << "Q3) Which kind of instrument most pleases your ear?\n\t1) The violin\n\t2) The trumpet\n\t3) The flute\n\t4) The piano\n\n";
	std::cin >> answer;
	if (answer == 1)
		gryffindor++;
	else if (answer == 2)
		hufflepuff++;
	else if (answer == 3)
		ravenclaw++;
	else if (answer == 4)
		slytherin++;
	else
		muggle++;

	answer = 0;
	std::cout << "Q2) You are at a crossing path and you have to choose where to go next, would you prefer:\n\t1) The right one, wide, sunny grassy lane\n\t2) The left one, twisting, leaf-strewn path through woods\n\n";
	std::cin >> answer;
	if (answer == 1)
	{
		gryffindor++;
		ravenclaw++;
	}
	else if (answer == 2)
	{
		hufflepuff++;
		slytherin++;
	}
	else
		muggle++;
	
	std::cout << "\n";
	int	max = 0, check = 0;
	std::string house;

	if (gryffindor > max)
	{
		max = gryffindor;
		house = "Gryffindor";
	}
	if (hufflepuff > max)
	{
		max = hufflepuff;
		house = "Hufflepuff";
	}	
	if (ravenclaw > max)
	{
		max = ravenclaw;
		house = "Ravenclaw";
	}
	if (slytherin > max)
	{
		max = slytherin;
		house = "Slytherin";
	}
	if (muggle > max)
	{
		max = muggle;
		check = 1;
	}

	if (check == 0)
		std::cout << "The Sorting-Hat has made his decision!\nWelcome to " << house << " dear student!\n";
	else
		std::cout << "You do not believe in magic. You cannot enter the school\n";
	
	return (0);
}