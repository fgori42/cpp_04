#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"
class Character : public ICharacter 
{
private:
	std::string _name;
	AMateria *inventory[4];
	AMateria *floor[100];

public:
	Character();
	Character(std::string name);
	~Character();
	Character(const Character &org);
	Character &operator=(const Character &org);

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, Character& target);
};


#endif