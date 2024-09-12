#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("strange animal")
{
	std::cout << "A " << type << " appears" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &origin) : type(origin.type)
{
	std::cout << "Another " << type << " is like the first" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << type << " is run away" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &origin)
{
	this->type = origin.type;
	return(*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << type << ": muuuuu muuu" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return(type);
}