#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *slots[4];

	public:
		MateriaSource();
		~MateriaSource();
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};
