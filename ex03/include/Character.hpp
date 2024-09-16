#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include <iostream>
# include "AMateria.hpp"
# include "Ichaacter.hpp"

class Character : public ICharacter 
{
private:
	std::string _name;
	AMateria *inventory[4];
	AMateria *floor[100];

public:
	Character();
	Character(std::string name);
	virtual ~Character();
	Character(const Character &org);
	virtual Character &operator=(const Character &org);

	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, Character& target) = 0;
};

Character::Character()
{
	_name = NULL;
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	for (int i = 0; i < 100; i++)
		inventory[i] = NULL;
	std::cout << "\034[34m" << "character inizialized" << "\034[0m" << std::endl;
}


#endif