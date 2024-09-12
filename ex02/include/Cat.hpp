#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *brain;
public:
	Cat();
	Cat(const Cat &Origin);
	~Cat();
	Cat & operator=(const Cat &origin);

	void makeSound() const;
	std::string getIdeas(int i) const;
	void	changeIdea(std::string newIdea, int i);
};


#endif