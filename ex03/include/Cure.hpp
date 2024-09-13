#ifndef CURE_HPP
# define CURE_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Cure : public AMateria
{
private:
	std::string _type;
public:
	Cure();
	Cure(const Cure &ori);
	~Cure();

	Cure &operator=(const Cure &ori);
	Cure *clone() const;
	//void use(ICharacter& target);
};

#endif