#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("") {
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap " << this->_name << " default constructor called"
              << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap " << this->_name << " constructor called"
              << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->_name << " destructor called"
              << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
	std::cout << "ScavTrap " << this->_name << " Copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other) {
	std::cout << "ScavTrap " << this->_name
              << " Copy assignment operator called" << std::endl;
    if (this != &other)
        ClapTrap::operator=(other);
    return *this;
}

void ScavTrap::attack(const std::string &target) {
	if (canAction()) {
		--this->_energyPoints;
		std::cout << "ScavTrap " << this->_name
				<< " attacks " << target
				<< ", causing " <<  this->_attackDamage
				<< " points of damage!" << std::endl;
	} else
		std::cout << "Can't attack." << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->_name << " is now in Gate Keeper mode." << std::endl;
}

bool ScavTrap::canAction() const {
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
		return true;
	if (this->_energyPoints <= 0)
		std::cout << "ScavTrap " << this->_name << " has no energy points remaining. " << std::endl;
	if (this->_hitPoints <= 0)
		std::cout << "ScavTrap " << this->_name << " has no energy points remaining. " << std::endl;
	return false;
}

