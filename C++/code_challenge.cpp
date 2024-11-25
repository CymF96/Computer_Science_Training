# include <iostream>
# include <string>
# include <vector>

void	introduction(std::string name, std::string surname)
{
	std::cout << surname << ", " << name << " " << surname << "\n";
}

int main()
{
	std::string name1 = "Coline";
	std::string surname1 = "Fischer";
	std::string name2 = "Peanut";
	std::string surname2 = "Butter";

	introduction(name1, surname1);
	introduction(name2, surname2);
}