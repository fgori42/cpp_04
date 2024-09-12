#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
private:
public:
	Cat();
	Cat(const Cat &Origin);
	~Cat();
	Cat & operator=(const Cat &origin);

	void makeSound() const;
};


#endif