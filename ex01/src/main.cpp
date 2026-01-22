#include "Zombie.hpp"

int	main(void)
{
	int	n = 10;

	Zombie *horde = zombieHorde(n, "Hank");
	for (int i = 0; i < n; ++i)
	{
		std::cout << i << ": ";
		horde[i].announce();
	}
	delete horde;
	return (EXIT_SUCCESS);
}
