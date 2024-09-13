#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	_type = "cure";
	std::cout << "Cure created" << std::endl;
}

Cure::Cure(const Cure &ori): AMateria(ori._type)
{
	_type = ori._type;
	std::cout << "Cure cloned" << std::endl;
}

Cure &Cure::operator=(const Cure &ori)
{
	if (this != &ori)
		_type = ori._type;
	std::cout << "Cure copied" << std::endl;
	return(*this);
}

Cure::~Cure()
{
	std::cout << "Cure material distroyed" << std::endl;
}

Cure *Cure::clone() const
{
	return( new Cure(*this));
}
//void Cure::use(ICharacter& target)
//{}