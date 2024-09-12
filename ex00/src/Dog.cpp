#include "Dog.hpp"

Dog::Dog() : Animal()
{
	type = "dog";
	std::cout << "it is a wind dog!" << std::endl;
}

Dog::~Dog()
{
	std::cout << "the dog seems offended" << std::endl;
}

Dog::Dog(const Dog &origin) : Animal()
{
	type = origin.type;
	std::cout << "a dog identical to the previous one appears" << std::endl;
}

Dog & Dog::operator=(const Dog &origin)
{
	this->type = origin.type;
	std::cout << "now the two dog are twin" << std::endl;
	return(*this);
}

void Dog::makeSound() const
{
	std::cout << type << ": bauuuuuuu!!!!" << std::endl;
}