#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <string>
# include <iostream>
# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *knowledge[4];
protected:
	MateriaSource();
	MateriaSource(const MateriaSource &org);
	MateriaSource &operator=(const MateriaSource & org);
public:
	virtual ~MateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

MateriaSource::MateriaSource()
{}
MateriaSource::MateriaSource(const MateriaSource &org)
{}
MateriaSource &MateriaSource::operator=(const MateriaSource & org)
{}
MateriaSource::~MateriaSource() {}
void MateriaSource::learnMateria(AMateria*)
{}
AMateria* MateriaSource::createMateria(std::string const & type)
{}

#endif