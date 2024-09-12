#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
	const Animal * j = new Dog();

	j->makeSound();
	std::cout << j->getType() << std::endl;

	delete j;

	return (0);
} 