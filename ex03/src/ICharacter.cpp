#include "ICharacter.hpp"


ICharacter::~ICharacter()
{
	std::cout << "\033[33m" << "Icharacter destructor" << "\033[0m" << std::endl;
}

std::string const & ICharacter::getName() const
{}

void ICharacter::equip(AMateria* m)
{}

void ICharacter::unequip(int idx)
{}

void ICharacter::use(int idx, ICharacter& target)
{}
