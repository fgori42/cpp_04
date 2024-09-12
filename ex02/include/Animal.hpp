#ifndef	ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(const Animal &origin);
	virtual ~Animal();

	Animal & operator=(const Animal &origin);
	
	virtual void makeSound() const = 0;
	std::string getType() const;
};

#endif