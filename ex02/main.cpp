#include "FragTrap.hpp"

int main(void)
{
	// テストケース作る
	{
		std::cout << "------------------- ver:1 -------------------" << std::endl;
		FragTrap bob("Bob");

		bob.showStatus();

		bob.attack("John");
		bob.takeDamage(100);
		bob.attack("John");

		bob.beRepaired(1);
		bob.attack("John");
	}

	{
		std::cout << "\n------------------- ver:2 -------------------" << std::endl;
		FragTrap bob("Bob");

		bob.showStatus();

		bob.highFivesGuys();
	}

	{
		std::cout << "\n------------------- ver:3 -------------------" << std::endl;
		ClapTrap *bob = new FragTrap("Bob");

		bob->showStatus();

		bob->attack("John");
		dynamic_cast<FragTrap*>(bob)->highFivesGuys();

		delete bob;
	}
}
