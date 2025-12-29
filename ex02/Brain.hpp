#pragma once

#include <string>
#include <iostream>

class Brain
{
	private:
		std::string	*ideas;

	public:
		Brain();
		~Brain();
		Brain(Brain &other);
		Brain& operator=(Brain &other);
		void	includeIdea(size_t pos, std::string idea);
		std::string	getIdea(size_t pos);
};
