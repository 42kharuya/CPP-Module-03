#include "ClapTrap.hpp"

int main(void)
{
	{
		std::cout << "------------------ ver: no Hit Points ------------------" << std::endl;
		ClapTrap bob("Bob");

		bob.showStatus();

		bob.attack("John");
		bob.takeDamage(100);
		bob.attack("John");

		bob.beRepaired(1);
		bob.attack("John");
	}

	{
		std::cout << "\n------------------ ver: no Energy Points ------------------" << std::endl;
		ClapTrap bob("Bob");

		bob.showStatus();

		bob.attack("Jon");
		bob.attack("Jon");
		bob.attack("Jon");
		bob.attack("Jon");
		bob.attack("Jon");
		bob.attack("Jon");
		bob.attack("Jon");
		bob.attack("Jon");
		bob.attack("Jon");
		bob.attack("Jon");
		bob.attack("Jon");

		bob.attack("Jon");
	}

	{
		std::cout << "\n------------------ ver: will be repaired ------------------" << std::endl;
		ClapTrap bob("Bob");

		bob.showStatus();

		bob.attack("John");
		bob.takeDamage(9);
		bob.attack("John");

		bob.beRepaired(100);
	}
}
