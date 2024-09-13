#ifndef ICE_HPP
# define ICE_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Ice : public AMateria
{
private:
	std::string _type;
public:
	Ice();
	Ice(const Ice &ori);
	~Ice();

	Ice &operator=(const Ice &ori);
	Ice *clone() const;
	//void use(ICharacter& target);
};

#endif