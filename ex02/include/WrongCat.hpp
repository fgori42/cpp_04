#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
public:
	WrongCat();
	WrongCat(const WrongCat &Origin);
	~WrongCat();
	WrongCat & operator=(const WrongCat &origin);

	void makeSound() const;
};


#endif