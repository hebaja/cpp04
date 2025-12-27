#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "An " << this->getType() << " is born" << std::endl;  
}

Animal::~Animal()
{
	std::cout << "A/An " << this->getType() << " has died" << std::endl;
}

Animal::Animal(Animal &other)
{
	std::cout << "An " << other.getType() << " is copied into another " << this->getType() << std::endl;
	this->type = other.getType();
}

Animal& Animal::operator=(Animal &other)
{
	if (this != &other)
	{
		std::cout << "An " << other.getType() << " was assigned to another " << this->getType() << std::endl;
		this->type = other.getType();
	}
	return (*this);
}

std::string	Animal::getType() const
{
	return (this->type);
}

void	Animal::makeSound() const
{
	std::cout << "GRRRRRRRR" << std::endl;
}
