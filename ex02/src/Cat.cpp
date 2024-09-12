#include "Cat.hpp"

Cat::Cat() : Animal()
{
	type = "cat";
	std::cout << "is a magnificent " << type << std::endl;
	brain = new Brain();
	for (int i = 0; i < 100; i++)
		brain->setIdea("I love fish", i);
}

Cat::~Cat()
{
	std::cout << "the " << type << "seems offended by your presence" << std::endl;
	delete (brain);
}

Cat::Cat(const Cat &origin) : Animal()
{
	type = origin.type;
	brain = new Brain(*origin.brain);
	std::cout << "it is a beautiful "<< type << " like the previous one" << std::endl;
}

Cat & Cat::operator=(const Cat &origin)
{
	this->type = origin.type;
	delete(brain);
	brain = new Brain(*origin.brain);
	std::cout << "now the two cats are identical" << std::endl;
	return(*this);
}

void Cat::makeSound() const
{
	std::cout << type << ": Miaooooo! Miaoo!" << std::endl;
}

std::string Cat::getIdeas(int i) const
{
	return(brain->getIdea(i));
}

void	Cat::changeIdea(std::string newIdea, int i)
{
	this->brain->setIdea(newIdea, i);
}