#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *brain;

	public:
		Dog();
		~Dog();
		Dog(Dog &other);
		Dog& operator=(Dog &other);
		std::string	getType() const;
		void		makeSound() const;
		void	includeIdea(size_t pos, std::string idea);
		std::string	getIdea(size_t pos);
};
