#include "AMateria.hpp"


AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "Material created" << std::endl;
}

AMateria::AMateria(): _type(0)
{
	std::cout << "Empy Material created" << std::endl;
}
AMateria::AMateria(const AMateria &origin) : _type(origin._type)
{
	std::cout << "clone Material created" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &origin)
{
	if (this != &origin)
		_type = origin._type;
	std::cout << "Material copied" << std::endl;
	return(*this);
}

std::string const & AMateria::getType() const
{
	return (_type);
}
AMateria* AMateria::clone() const
{return (NULL);}
//void AMateria::use(ICharacter& target)
//{
//	std::cout << target.getname() << "have nothing to use" << std::endl;
//}