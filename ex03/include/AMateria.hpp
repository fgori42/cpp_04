#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
protected:
	std::string _type;
public:
	AMateria(std::string const & type);
	AMateria();
	AMateria(const AMateria &origin);

	AMateria &operator=(const AMateria &origin);

	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

};


#endif