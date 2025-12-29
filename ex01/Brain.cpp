#include "Brain.hpp"

Brain::Brain() : ideas(new std::string[100])
{
	std::cout << "Brain created" << std::endl;
}

Brain::~Brain()
{
	delete[] this->ideas; 
	std::cout << "Brain destroyed" << std::endl;
}

Brain::Brain(Brain &other)
{
	std::cout << "A Brain was copied to another Brain" << std::endl;
	this->ideas = other.ideas;
}

Brain& Brain::operator=(Brain &other)
{
	if (this != &other)
	{
		std::cout << "A Brain was assigned to anothe Brain" << std::endl;
		this->ideas = other.ideas;
	}
	return (*this);
}

void	Brain::includeIdea(size_t pos, std::string idea)
{
	this->ideas[pos] = idea;
}

std::string	Brain::getIdea(size_t pos)
{
	return this->ideas[pos];
}

