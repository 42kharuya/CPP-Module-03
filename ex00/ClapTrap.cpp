#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name(""),_hitPoints(10),_energyPoints(10),_attackDamage(0) {
	std::cout << "ClapTrap " << this->_name << " default constructor called"
              << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name),_hitPoints(10),_energyPoints(10),_attackDamage(0) {
	std::cout << "ClapTrap " << this->_name << " constructor called"
              << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << this->_name << " destructor called"
              << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
	: _name(other._name),
	  _hitPoints(other._hitPoints),
	  _energyPoints(other._energyPoints),
	  _attackDamage(other._attackDamage)
{
	std::cout << "ClapTrap " << this->_name << " Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other) {
	std::cout << "ClapTrap " << this->_name
              << " Copy assignment operator called" << std::endl;
    if (this != &other) {
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
    return *this;
}

void ClapTrap::attack(const std::string& target){
	if (canAction()) {
		--this->_energyPoints;
		std::cout << "ClapTrap " << _name
				<< " attacks " << target
				<< ", causing " <<  _attackDamage
				<< " points of damage!" << std::endl;
	} else
		std::cout << "Can't attack." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	this->_hitPoints -= amount;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	std::cout << _name << " take "
			  << amount << " damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (canAction()) {
		--this->_energyPoints;
		this->_hitPoints += amount;
		if (this->_hitPoints > std::numeric_limits<int>::max())
    		this->_hitPoints = std::numeric_limits<int>::max();
		std::cout << "ClapTrap " << _name
				<< " is repaired " << amount
				<< " hit points." << std::endl;
	} else
		std::cout << "Can't be repaired." << std::endl;
}

bool ClapTrap::canAction() {
	if (_energyPoints > 0 && _hitPoints > 0)
		return true;
	if (_energyPoints <= 0)
		std::cout << "There are no energy points remaining. " << std::endl;
	if (_hitPoints <= 0)
		std::cout << "There are no hits points remaining. " << std::endl;
	return false;
}
