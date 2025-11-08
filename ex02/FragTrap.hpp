#ifndef _FRAGTRAP_H_
#define _FRAGTRAP_H_

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public:
	 FragTrap();
	 FragTrap(const std::string &name);
	 ~FragTrap();
	 FragTrap(const FragTrap &other);
	 FragTrap& operator=(const FragTrap &other);

	 void attack(const std::string& target);
	 void highFivesGuys(void);

	private:
	 bool canAction() const;
};

#endif // _FRAGTRAP_H_
