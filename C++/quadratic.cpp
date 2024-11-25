# include <iostream>
# include <cmath>

int	main()
{
	float a, b, c = 0;
	float root_1, root_2 = 0;

	std::cout << "Enter a:\n";
	std::cin >> a;
	std::cout << "Enter b:\n";
	std::cin >> b;
	std::cout << "Enter c:\n";
	std::cin >> c;

	root_1 = (-b + std::sqrt(b * b - 4 * a * c)) / (2 * a);
	root_2 = (-b - std::sqrt(b * b - 4 * a * c)) / (2 * a);

	std::cout << "Root 1: " << root_1 << "\nRoot 2: " << root_2 << "\n";
	return (0);
}