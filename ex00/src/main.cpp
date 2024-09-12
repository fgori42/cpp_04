#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << "--------------------------------------------------------------------------------" << std::endl;

	const	WrongAnimal *jim = new WrongAnimal();
	const	WrongCat	simba;

	std::cout << "thi is " << simba.getType() << " this is his sound" << std::endl;
	simba.makeSound();

	std::cout << "thi is " << jim->getType() << " this is his sound" << std::endl;
	jim->makeSound();

	delete(jim);
	jim = new WrongCat();
	std::cout << "thi is " << jim->getType() << " this is his sound" << std::endl;
	jim->makeSound();
	std::cout << std::endl;
	std::cout << std::endl;

	delete (meta);
	delete(j);
	delete(i);
	delete(jim);

	return (0);
}