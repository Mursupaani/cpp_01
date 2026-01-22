#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*horde = (Zombie *)operator new(sizeof(Zombie) * N);
	int		i = 0;

	try
	{
		for (; i < N; ++i)
			new (&horde[i]) Zombie(name);
	}
	catch (...)
	{
		--i;
		for (; i >= 0; --i)
			horde[i].~Zombie();
		operator delete(horde);
		return (nullptr);
	}
	return (horde);
}
