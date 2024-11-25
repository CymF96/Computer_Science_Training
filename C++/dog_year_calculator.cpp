# include <iostream>

/*
My program will return the human age of a dog. 
DOg_age will request the user to insert the age of their doggy friend and give them the human age.
*/

int	main()
{
	int 	dog_age = 0;
	char	*dog_name;
	std::cout << "🐕 What is the name of your companion?\n";
	std::cin >> dog_name;	
	std::cout << "🐕 How old is your companion?\n";
	std::cin >> dog_age;

	int early_years = 21;
	int later_years = (dog_age - 2) * 4;
	int human_years = early_years + later_years;

	std::cout << "🐕 " << dog_name << " is " << dog_age << " year-old, which is " << human_years << " year-old in human age. 🐕\n";

}

