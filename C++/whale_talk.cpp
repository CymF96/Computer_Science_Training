# include <iostream>
# include <vector>
# include <string>

int	main()
{
	std::string str = "turpentine and turtles";
	std::vector <char> vowels = {'a','e', 'i', 'o','u'};
	std::vector <char> result;

	for (int i = 0; i < str.size(); i++)
	{
		for (int j = 0; j < vowels.size(); j++)
		{
			if (str[i] == vowels[j])
			{
				if (str[i] == 'u' || str[i] == 'e')
					result.push_back(str[i]);
				result.push_back(str[i]);
			}
		}
	}
	for (int k = 0; k < result.size(); k++)
		std::cout << result[k];
	std::cout << "\n";
}