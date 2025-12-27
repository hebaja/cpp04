#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		~Dog();
		Dog(Dog &other);
		Dog& operator=(Dog &other);
		std::string	getType() const;
		void		makeSound() const;
};
