#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		~Cat();
		Cat(Cat &other);
		Cat& operator=(Cat &other);
		std::string	getType() const;
		void		makeSound() const;
};
