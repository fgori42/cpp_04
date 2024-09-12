#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;
	std::cout << "---------------------" << std::endl << std::endl;
	Cat	*z = new Cat();
	Cat s;
	Cat *h = new Cat(s);

	std::cout << z->getIdeas(1) << std::endl;
	z->changeIdea("I want to sleep", 1);
	std::cout << "z think " << z->getIdeas(1) << std::endl;
	std::cout << "s think " << s.getIdeas(1) << std::endl;
	s = *z;
	std::cout << "s think " << s.getIdeas(1) << std::endl;
	std::cout << "z think " << z->getIdeas(1) << std::endl;
	z->changeIdea("I want to run in 4.00 AM", 1);
	std::cout << "z think " << z->getIdeas(1) << std::endl;
	std::cout << "s think " << s.getIdeas(1) << std::endl;
	std::cout << "h think " << h->getIdeas(1) << std::endl;

	delete(z);
	delete(h);

	std::cout << "---------------------" << std::endl << std::endl;

	Animal *(farm[4]);

	for (int i = 0; i < 2; i++)
		farm[i] = new Dog();
	for (int i = 2; i < 4; i++)
		farm[i] = new Cat();
	std::cout << "--------" << std::endl;
	for (int i = 3; i > 1; i--)
		delete (farm[i]);
	for (int i = 1; i >= 0; i--)
		delete (farm[i]);
	//delete(farm[0]);
	return (0);
} 