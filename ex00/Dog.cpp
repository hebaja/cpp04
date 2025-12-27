#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "A " << this->getType() << " is born" << std::endl;
}

Dog::~Dog()
{
	std::cout << "A " << this->getType() << " had died" << std::endl;	
}

Dog::Dog(Dog &other) : Animal()
{
	std::cout << "A " << other.getType() << " is copied into another " << this->getType() << std::endl;
	this->type = other.getType();
}

Dog& Dog::operator=(Dog &other)
{
	if (this != &other)
	{
		std::cout << "A " << other.getType() << " was assigned to another " << this->getType() << std::endl;
		this->type = other.getType();
	}
	return (*this);
}

std::string	Dog::getType() const
{
	return (this->type);
}

void	Dog::makeSound() const
{
	std::cout << "BARK BARK" << std::endl;
}
