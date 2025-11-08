#include "ScavTrap.hpp"

int main(void)
{
	{
		std::cout << "------------------- ver:1 -------------------" << std::endl;
		ScavTrap bob("Bob");

		bob.showStatus();

		bob.attack("John");
		bob.takeDamage(100);
		bob.attack("John");

		bob.beRepaired(1);
		bob.attack("John");
	}

	{
		std::cout << "\n------------------- ver:2 -------------------" << std::endl;
		ScavTrap bob("Bob");

		bob.showStatus();

		bob.guardGate();
	}
}
