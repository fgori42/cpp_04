#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include <string>
# include <iostream>
# include "AMateria.hpp"

class IMateriaSource
{
protected:
	//IMateriaSource();
	//IMateriaSource(const IMateriaSource &org);
	//IMateriaSource &operator=(const IMateriaSource & org);
public:
	virtual ~IMateriaSource();
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};


#endif