#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *brain;

	public:
		Cat();
		~Cat();
		Cat(Cat &other);
		Cat& operator=(Cat &other);
		std::string	getType() const;
		void		makeSound() const;
		void	includeIdea(size_t pos, std::string idea);
		std::string	getIdea(size_t pos);
};
