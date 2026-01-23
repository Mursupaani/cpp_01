#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack(void)
{
	if (_weapon == nullptr)
	{
		std::cout << _name << " has no weapon" << std::endl;
		return ;
	}
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}
