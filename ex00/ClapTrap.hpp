#ifndef _CLAPTRAP_H_
#define _CLAPTRAP_H_

#include <iostream>
#include <string>
#include <limits>

class ClapTrap
{
	private:
	 std::string _name;
	 long _hitPoints; //HP
	 long _energyPoints; //MP
	 long _attackDamage;

	public:
	 ClapTrap();
	 ClapTrap(std::string name);
	 ~ClapTrap();
	 ClapTrap(const ClapTrap &other);
	 ClapTrap& operator=(const ClapTrap &other);

	 bool canAction();

	 void attack(const std::string& target);
	 void takeDamage(unsigned int amount);
	 void beRepaired(unsigned int amount);
};

#endif // _CLAPTRAP_H_
