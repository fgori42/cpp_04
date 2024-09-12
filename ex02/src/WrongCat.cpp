#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	type = "Wrongcat";
	std::cout << "is a magnificent big big " << type << " whit an unusual mane around the neck"<< std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "the " << type << "seems offended by your presence" << std::endl;
}

WrongCat::WrongCat(const WrongCat &origin) : WrongAnimal()
{
	type = origin.type;
	std::cout << "it is a imponent "<< type << " like the previous one" << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat &origin)
{
	this->type = origin.type;
	std::cout << "now the two " << type << " are identical" << std::endl;
	return(*this);
}

void WrongCat::makeSound() const
{
	std::cout << type << ": Rooooooaaaaaar" << std::endl;
}