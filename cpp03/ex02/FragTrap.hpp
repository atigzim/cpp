#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
		
	public:
		FragTrap();
		FragTrap(const std::string& name);
		FragTrap(const FragTrap &other);
		FragTrap &operator=(const FragTrap &other);
		void highFivesGuys(void);
		void attack(const std::string &target);
		~FragTrap();
};




#endif 