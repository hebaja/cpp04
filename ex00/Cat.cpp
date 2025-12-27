#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "A " << this->getType() << " is born" << std::endl;
}

Cat::~Cat()
{
	std::cout << "A " << this->getType() << " had died" << std::endl;	
}

Cat::Cat(Cat &other) : Animal(other)
{
	std::cout << "A " << other.getType() << " is copied into another " << this->getType() << std::endl;
	this->type = other.getType();
}

Cat& Cat::operator=(Cat &other)
{
	if (this != &other)
	{
		std::cout << "A " << other.getType() << " was assigned to another " << this->getType() << std::endl;
		this->type = other.getType();
	}
	return (*this);
}

std::string	Cat::getType() const
{
	return (this->type);
}

void		Cat::makeSound() const
{
	std::cout << "MEOW" << std::endl;
}
