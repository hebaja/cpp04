#pragma once

#include <string>
#include <iostream>

class Animal
{
	protected:
		std::string	type;

	public:
		Animal();
		virtual ~Animal();
		Animal(Animal &other);
		Animal& operator=(Animal &other);
		virtual std::string	getType() const;
		virtual void		makeSound() const = 0;
};
