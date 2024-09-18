#include "IMateriaSource.hpp"

//IMateriaSource::IMateriaSource()
//{

//	std::cout << "\033[31m" << "Icharacter costructor" << "\033[0m" << std::endl;
//}
//IMateriaSource::IMateriaSource(const IMateriaSource &org)
//{
//	*this = org;
//	std::cout << "\033[31m" << "Icharacter cloner" << "\033[0m" << std::endl;
//}
//IMateriaSource &IMateriaSource::operator=(const IMateriaSource & org)
//{
//	*this = org;
//	std::cout << "\033[31m" << "Icharacter operator" << "\033[0m" << std::endl;
//	return(*this);
//}

IMateriaSource::~IMateriaSource()
{
	std::cout << "\033[31m" << "Icharacter destructor" << "\033[0m" << std::endl;
}

void IMateriaSource::learnMateria(AMateria*)
{}
AMateria* IMateriaSource::createMateria(std::string const & type)
{
	(void)type;
	return(NULL);
}
