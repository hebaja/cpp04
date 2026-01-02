#include "Ice.hpp"
#include "AMateria.hpp"
#include "Character.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(std::string const &type) : AMateria(type) 
{
	this->type = type;
}

Ice::~Ice(){}

AMateria *Ice::clone() const
{
	return (new Ice(this->getType()));
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
