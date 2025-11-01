#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name(""),_hitPoints(10),_energyPoints(10),_attackDamage(0) {
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name),_hitPoints(10),_energyPoints(10),_attackDamage(0) {
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other) {
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
    if (this != &other) {
		this->_name = other.getName();
		this->_hitPoints = other.getHitPoints();
		this->_energyPoints = other.getEnergyPoints();
		this->_attackDamage = other.getAttackDamage();
	}
    return *this;
}

std::string ClapTrap::getName() const {
	return _name;
}

long ClapTrap::getHitPoints() const {
	return _hitPoints;
}

long ClapTrap::getEnergyPoints() const {
	return _energyPoints;
}

long ClapTrap::getAttackDamage() const {
	return _attackDamage;
}

// 今度やること：attack(),takeDamage(),beRepaired()関数の実装から
// void ClapTrap::attack(const std::string& target) {

// }

// void ClapTrap::takeDamage(unsigned int amount) {

// }

// void ClapTrap::beRepaired(unsigned int amount) {

// }
