#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

MateriaSource::MateriaSource()
{
	for (size_t i = 0; i < 4; i++) {
		this->slots[i] = 0;
	}
}

MateriaSource::~MateriaSource()
{
	for (size_t i = 0; i < 4; i++) {
		if (this->slots[i] != 0)
			delete this->slots[i];
	}
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (size_t i = 0; i < 4; i++) {
		if (this->slots[i] == 0)
		{
			this->slots[i] = m;
			return ;
		}
	}
	delete m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	if (type.compare("ice") != 0 && type.compare("cure") != 0)
	{
		std::cout << "Source: * unknown materia type *" << std::endl;
		return (0);
	}
	if (type.compare("ice") == 0)
	{
		for (size_t i = 0; i < 4; i++) {
			if (this->slots[i] != 0 && type.compare(this->slots[i]->getType()) == 0)
				return (new Ice(this->slots[i]->getType()));
		}
	}
	if (type.compare("cure") == 0)
	{
		for (size_t i = 0; i < 4; i++) {
			if (this->slots[i] != 0 && type.compare(this->slots[i]->getType()) == 0)
				return (new Cure(this->slots[i]->getType()));
		}
	}
	return (0);
}
