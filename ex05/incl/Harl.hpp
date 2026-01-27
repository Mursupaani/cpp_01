#pragma once
#include <cstdlib>
#include <string>
#include <iostream>

class Harl
{
	public:
		Harl(void);
		~Harl(void) = default;
		
		void	complain(std::string level);
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};
