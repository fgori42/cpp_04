#include "Dog.hpp"

Dog::Dog() : Animal()
{
	type = "dog";
	std::cout << "it is a wind dog!" << std::endl;
	brain = new Brain();
	for (int i = 0; i < 100; i++)
		brain->setIdea("I love fish", i);
}

Dog::~Dog()
{
	std::cout << "the dog seems offended" << std::endl;
	delete (brain);
}

Dog::Dog(const Dog &origin) : Animal()
{
	type = origin.type;
	brain = new Brain(*origin.brain);
	std::cout << "a dog identical to the previous one appears" << std::endl;
}

Dog & Dog::operator=(const Dog &origin)
{
	this->type = origin.type;
	delete(brain);
	brain = new Brain(*origin.brain);
	std::cout << "now the two dog are twin" << std::endl;
	return(*this);
}

void Dog::makeSound() const
{
	std::cout << type << ": bauuuuuuu!!!!" << std::endl;
}

std::string Dog::getIdeas(int i) const
{
	return(brain->getIdea(i));
}

void	Dog::changeIdea(std::string newIdea, int i)
{
	this->brain->setIdea(newIdea, i);
}