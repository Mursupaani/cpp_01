#include "Harl.hpp"

Level hashString(const std::string &level)
{
	if (level == "debug")
		return (Level::DEBUG);
	else if (level == "info")
		return (Level::INFO);
	else if (level == "warning")
		return (Level::WARNING);
	else if (level == "error")
		return (Level::ERROR);
	else
		return (Level::NONE);
}


void	Harl::complain(std::string level)
{
	void(Harl::*func[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	Level lvl = hashString(level);
	int	i;

	switch (lvl) {
		case Level::NONE:
			return;
		case Level::DEBUG:
			i = DEBUG;
			break;
		case Level::INFO:
			i = INFO;
			break;
		case Level::WARNING:
			i = WARNING;
			break;
		case Level::ERROR:
			i = ERROR;
			break;
	}
	for (int j = 0; j <= i; ++j)
	{
		(this->*func[j])();
		if (j != i)
			std::cout << std::endl;
	}
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
