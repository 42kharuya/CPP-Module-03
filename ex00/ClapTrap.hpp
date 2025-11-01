#ifndef _CLAPTRAP_H_
#define _CLAPTRAP_H_

#include <iostream>
#include <string>

class ClapTrap
{
	private:
	 std::string _name;
	 long _hitPoints;
	 long _energyPoints;
	 long _attackDamage;

	public:
	 ClapTrap();
	 ClapTrap(std::string name);
	 ~ClapTrap();
	 ClapTrap(const ClapTrap &other);
	 ClapTrap& operator=(const ClapTrap &other);

	 void attack(const std::string& target);
	 void takeDamage(unsigned int amount);
	 void beRepaired(unsigned int amount);

	 std::string getName() const;
	 long getHitPoints() const;
	 long getEnergyPoints() const;
	 long getAttackDamage() const;
};

#endif // _CLAPTRAP_H_
