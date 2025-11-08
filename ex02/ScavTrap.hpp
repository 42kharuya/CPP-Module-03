#ifndef _SCAVTRAP_H_
#define _SCAVTRAP_H_

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
	 ScavTrap();
	 ScavTrap(const std::string &name);
	 ~ScavTrap();
	 ScavTrap(const ScavTrap &other);
	 ScavTrap& operator=(const ScavTrap &other);

	 void attack(const std::string& target);
	 void guardGate();

	private:
	 bool canAction() const;
};

#endif // _SCAVTRAP_H_
