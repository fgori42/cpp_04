#include "Cat.hpp"

Cat::Cat() : Animal()
{
	type = "cat";
	std::cout << "is a magnificent " << type << std::endl;
}

Cat::~Cat()
{
	std::cout << "the " << type << "seems offended by your presence" << std::endl;
}

Cat::Cat(const Cat &origin) : Animal()
{
	type = origin.type;
	std::cout << "it is a beautiful "<< type << " like the previous one" << std::endl;
}

Cat & Cat::operator=(const Cat &origin)
{
	this->type = origin.type;
	std::cout << "now the two cats are identical" << std::endl;
	return(*this);
}

void Cat::makeSound() const
{
	std::cout << type << ": Miaooooo! Miaoo!" << std::endl;
}
