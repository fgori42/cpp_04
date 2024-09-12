#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *brain;
public:
	Dog();
	Dog(const Dog &Origin);
	~Dog();
	Dog & operator=(const Dog &origin);

	void makeSound() const;
	std::string getIdeas(int i) const;
	void	changeIdea(std::string newIdea, int i);
};

#endif