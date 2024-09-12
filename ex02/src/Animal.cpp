#include "Animal.hpp"

Animal::Animal() : type("common animal")
{
	std::cout << "A " << type << " appears" << std::endl;
}

Animal::Animal(const Animal &origin) : type(origin.type)
{
	std::cout << "Another " << type << " is like the first" << std::endl;
}

Animal::~Animal()
{
	std::cout << type << " is chased away" << std::endl;
}

Animal & Animal::operator=(const Animal &origin)
{
	this->type = origin.type;
	return(*this);
}

void	Animal::makeSound() const
{
	std::cout << type << ": make a unknown sound" << std::endl;
}

std::string Animal::getType() const
{
	return(type);
}