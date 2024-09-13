#include "Ice.hpp"


Ice::Ice() : AMateria("ice")
{
	_type = "ice";
	std::cout << "Ice created" << std::endl;
}

Ice::Ice(const Ice &ori): AMateria(ori._type)
{
	_type = ori._type;
	std::cout << "Ice cloned" << std::endl;
}

Ice &Ice::operator=(const Ice &ori)
{
	if (this != &ori)
		_type = ori._type;
	std::cout << "Ice copied" << std::endl;
	return(*this);
}

Ice::~Ice()
{
	std::cout << "Ice material distroyed" << std::endl;
}

Ice *Ice::clone() const
{
	return( new Ice(*this));
}
//void Ice::use(ICharacter& target)
//{}