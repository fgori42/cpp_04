#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
private:
public:
	Dog();
	Dog(const Dog &Origin);
	~Dog();
	Dog & operator=(const Dog &origin);

	void makeSound() const;
};

#endif