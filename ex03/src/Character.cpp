#include "Character.hpp"

Character::Character(std::string name)
{
	_name = name;
	std::cout << "\033[34m" << "character inizialized" << "\033[0m" << std::endl;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (inventory[i])
			delete (inventory[i]);
	for (int i = 0; i < 100; i++)
		if (floor[i])
			delete (floor[i]);
	std::cout << "\033[34m" << "character destructor" << "\033[0m" << std::endl;
}

Character::Character(const Character &org) : Character(org._name)
{
	std::cout << "\033[34m" << "character cloning" << "\033[0m" << std::endl;
}

Character &Character::operator=(const Character &org)
{
	if (*this != org)
		_name = org._name;
		for (int i = 0; i < 4; i++)
			if (org.inventory[i])
				inventory[i] = org.inventory[i]->clone();
	std::cout << "\033[34m" << "character operator called" << "\033[0m" << std::endl;
	return(*this);
}

std::string const & Character::getName() const
{
	return(_name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
		if (inventory[i] == NULL)
		{
			inventory[i] = m;
			return ;
		}
	std::cout << "inventory full" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >= 0 || idx <= 3)
	{
		if (inventory[idx])
		{
			for (int i = 0; i < 100; i++)
				if (floor[i] == NULL)
				{
					floor = inventory[idx];
					break;
				}
		}
	}
	inventory[inx] = NULL;
}

void Character::use(int idx, Character& target)
{
	inventory[idx]->use();
}