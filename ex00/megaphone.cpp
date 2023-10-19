#include <iostream>
#include <string>

int	main(int argc, char *argv[])
{
	std::string str;
	int			i;
	int			j;

	i = 1;
	j = 0;
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return 0;
	}
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			str += toupper(argv[i][j]);
			j++;
		}
		i++;
	}
	std::cout << str << std::endl;
	return 0;
}