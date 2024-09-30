#include "MateriaSource.hpp"

MateriaSource::MateriaSource() /*: IMateriaSource()*/
{
	for (int i = 0; i < 4; i++)
		knowledge[i] = NULL;
	std::cout << "\033[36m" << "MateriaSource costructor" << "\033[0m" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &org) /*: IMateriaSource()*/
{
	for (int i = 0; i < 4; i++)
		knowledge[i] = org.knowledge[i]->clone();
	std::cout << "\033[36m" << "MateriaSource clone" << "\033[0m" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource & org)
{
	if (this != &org)
	{
		for (int i = 0; i < 4; i++)
			if (org.knowledge[i])
				knowledge[i] = org.knowledge[i]->clone();
	}
	std::cout << "\033[36m" << "MateriaSource operator" << "\033[0m" << std::endl;
	return (*this);
}
MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (knowledge[i])
			delete (knowledge[i]);
	std::cout << "\033[36m" << "MateriaSource destructor" << "\033[0m" << std::endl;
}
void MateriaSource::learnMateria(AMateria* g)
{
	for (int i = 0; i < 4; i++)
		if (knowledge[i] == NULL)
		{
			knowledge[i] = g;
			return ;
		}
	std::cout << "you can't learn more" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (knowledge[i]->getType() == type)
			return(knowledge[i]->clone());
	}
	return(0);
}
