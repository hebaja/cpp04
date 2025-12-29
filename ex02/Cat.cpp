#include "Cat.hpp"

Cat::Cat() : brain(new Brain())
{
	this->type = "Cat";
	std::cout << "A " << this->getType() << " is born" << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "A " << this->getType() << " has died" << std::endl;	
}

Cat::Cat(Cat &other) : Animal(other)
{
	std::cout << "A " << other.getType() << " is copied into another " << this->getType() << std::endl;
	this->type = other.getType();
	this->brain = new Brain();
	for (size_t i = 0; i < 100; i++) {
		this->brain->includeIdea(i, other.brain->getIdea(i));
	}
}

Cat& Cat::operator=(Cat &other)
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

std::string	Cat::getType() const
{
	return (this->type);
}

void		Cat::makeSound() const
{
	std::cout << "MEOW MEOW" << std::endl;
}

void	Cat::includeIdea(size_t pos, std::string idea)
{
	this->brain->includeIdea(pos, idea);
}

std::string	Cat::getIdea(size_t pos)
{
	return this->brain->getIdea(pos);
}
