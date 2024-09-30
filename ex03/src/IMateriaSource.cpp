#include "IMateriaSource.hpp"

IMateriaSource::~IMateriaSource()
{
	std::cout << "\033[31m" << "IMateriaSource destructor" << "\033[0m" << std::endl;
}

void IMateriaSource::learnMateria(AMateria*)
{}
AMateria* IMateriaSource::createMateria(std::string const & type)
{
	(void)type;
	return(NULL);
}
