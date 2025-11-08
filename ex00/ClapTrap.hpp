#ifndef _CLAPTRAP_H_
#define _CLAPTRAP_H_

#include <iostream>
#include <string>
#include <limits>

class ClapTrap
{
	public:
	 ClapTrap();
	 ClapTrap(const std::string &name);
	 ~ClapTrap();
	 ClapTrap(const ClapTrap &other);
	 ClapTrap& operator=(const ClapTrap &other);

	 void attack(const std::string& target);
	 void takeDamage(unsigned int amount);
	 void beRepaired(unsigned int amount);

	 void showStatus() const;

	private:
	 std::string _name;
	 long _hitPoints;
	 long _energyPoints;
	 long _attackDamage;

	 bool canAction() const;
};

#endif // _CLAPTRAP_H_
