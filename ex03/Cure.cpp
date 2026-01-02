#include "Cure.hpp"
#include "AMateria.hpp"
#include "Character.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(std::string const &type) : AMateria(type) 
{
	this->type = type;
}

Cure::~Cure(){}

AMateria *Cure::clone() const
{
	return (new Cure(this->getType()));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
