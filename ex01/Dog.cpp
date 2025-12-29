#include "Dog.hpp"

Dog::Dog() : brain(new Brain())
{
	this->type = "Dog";
	std::cout << "A " << this->getType() << " is born" << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "A " << this->getType() << " has died" << std::endl;	
}

Dog::Dog(Dog &other) : Animal()
{
	std::cout << "A " << other.getType() << " is copied into another " << this->getType() << std::endl;
	this->type = other.getType();
	this->brain = new Brain();
	for (size_t i = 0; i < 100; i++) {
		this->brain->includeIdea(i, other.brain->getIdea(i));
	}
}

Dog& Dog::operator=(Dog &other)
{
	if (this != &other)
	{
		std::cout << "A " << other.getType() << " was assigned to another " << this->getType() << std::endl;
		this->type = other.getType();
		for (size_t i = 0; i < 100; i++) {
			this->brain->includeIdea(i, other.brain->getIdea(i));
		}
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

void	Dog::includeIdea(size_t pos, std::string idea)
{
	this->brain->includeIdea(pos, idea);
}

std::string	Dog::getIdea(size_t pos)
{
	return this->brain->getIdea(pos);
}
