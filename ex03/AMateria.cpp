#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(std::string const & type) : type(type){}

AMateria::~AMateria(){}

std::string const &AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* does unknown action at " << target.getName() << std::endl;
}
