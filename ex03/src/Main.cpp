#include "AMateria.hpp"
#include "Ice.hpp"

int main()
{
	AMateria *a = new Ice();

	std::cout << a->getType();
}