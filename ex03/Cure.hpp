#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(std::string const &type);
		~Cure();
		AMateria* clone() const;
		virtual void use(ICharacter& target);
};
