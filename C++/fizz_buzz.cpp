# include <iostream>

// int	main()
// {
// 	int	num = 1;

// 	while (num <= 100)
// 	{
		// if (num % 3 == 0 && num % 5 == 0)
		// 	std::cout << "FizzBuzz\n";
		// else if (num % 3 == 0)
		// 	std::cout << "Fizz\n";
		// else if (num % 5 == 0)
		// 	std::cout << "Buzz\n";
		// else
		// 	std::cout << num << "\n";	
// 		num++;
// 	}
	
// }

int	main()
{
	for (int num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
			std::cout << "FizzBuzz\n";
		else if (num % 3 == 0)
			std::cout << "Fizz\n";
		else if (num % 5 == 0)
			std::cout << "Buzz\n";
		else
			std::cout << num << "\n";	
	}
}