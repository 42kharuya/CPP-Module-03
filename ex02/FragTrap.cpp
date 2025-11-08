#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("") {
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << this->_name << " default constructor called"
              << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << this->_name << " constructor called"
              << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->_name << " destructor called"
              << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
	std::cout << "FragTrap " << this->_name << " Copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &other) {
	std::cout << "FragTrap " << this->_name
              << " Copy assignment operator called" << std::endl;
    if (this != &other)
        ClapTrap::operator=(other);
    return *this;
}

void FragTrap::attack(const std::string &target) {
	if (canAction()) {
		--this->_energyPoints;
		std::cout << "FragTrap " << this->_name
				<< " attacks " << target
				<< ", causing " <<  this->_attackDamage
				<< " points of damage!" << std::endl;
	} else
		std::cout << "Can't attack." << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << this->_name << " is requesting a positive high five!" << std::endl;
}

bool FragTrap::canAction() const {
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
		return true;
	if (this->_energyPoints <= 0)
		std::cout << "FragTrap " << this->_name << " has no energy points remaining. " << std::endl;
	if (this->_hitPoints <= 0)
		std::cout << "FragTrap " << this->_name << " There are no hits points remaining. " << std::endl;
	return false;
}
