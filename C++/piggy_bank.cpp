# include <iostream>

int	main()
{
	float pesos, reais, soles = 0;

	std::cout << "Enter the number of Colombian Pesos: ";
	std::cin >> pesos;
	std::cout << "Enter the number of Brazilian Reais: ";
	std::cin >> reais;
	std::cout << "Enter the number of Peruvian Soles: ";
	std::cin >> soles;
	// std::cout << "Enter the number of American Dollars: ";
	// std::cin >> dollars;

	float	dollars_pesos = 0.049 * pesos;
	float	dollars_reais = 0.17 * reais;
	float	dollars_soles = 0.26 * soles;
	float	total_dollars = dollars_pesos + dollars_reais + dollars_soles;

	std::cout << "When converting your " << pesos << ", you got $" << dollars_pesos << "\n";
	std::cout << "When converting your " << reais << ", you got $" << dollars_reais << "\n";
	std::cout << "When converting your " << soles << ", you got $" << dollars_soles << "\n";
	std::cout << "When converting your all your currencies, you got $" << total_dollars << "\n";

	return (0);
}