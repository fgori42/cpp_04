#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "brain created" << std::endl;
}

Brain::~Brain()
{
	std::cout << "brain destroyed" << std::endl;
}

Brain::Brain(const Brain &origin)
{
	for (int i =0; i < 100; i++)
		ideas[i] = origin.getIdea(i);
	std::cout << "brain copied" << std::endl;
}

Brain &Brain::operator=(const Brain &original)
{
	if (this != &original)
		for (int i = 0; i < 100; i++)
			this->ideas[i] = original.ideas[i];
	std::cout << "brain operator called" << std::endl;
	return (*this);
}

void Brain::setIdea(std::string idea, int i)
{
	ideas[i] = idea;
}

std::string Brain::getIdea(int i) const
{
	return (ideas[i]);
}