#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <string>
# include <iostream>
# include "AMateria.hpp"

class ICharacter
{
protected:
public:
ICharacter();
virtual ~ICharacter();
ICharacter(const ICharacter &org);
virtual ICharacter &operator=(const ICharacter &org);

virtual AMateria *getInventory(int i4) = 0;
virtual std::string const & getName() const = 0;
virtual void equip(AMateria* m) = 0;
virtual void unequip(int idx) = 0;
virtual void use(int idx, ICharacter& target) = 0;
};

ICharacter::ICharacter()
{
	std::cout << "Icharacter inizialized" << std::endl;
}
ICharacter::~ICharacter()
{
	std::cout << "Icharacter destructor" << std::endl;
}
ICharacter::ICharacter(const ICharacter &org)
{}

ICharacter &ICharacter::operator=(const ICharacter &org)
{}

AMateria *ICharacter::getInventory(int i4)
{}
std::string const & ICharacter::getName() const
{}
void ICharacter::equip(AMateria* m)
{}
void ICharacter::unequip(int idx)
{}
void ICharacter::use(int idx, ICharacter& target)
{}
#endif