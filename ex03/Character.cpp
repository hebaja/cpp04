#include "Character.hpp"

AMateria *Character::stash[10] = { 0 };
size_t	Character::stashIdx = 0;

Character::Character(const std::string &name) : name(name)
{
	for (size_t i = 0; i < 4; i++) {
		this->slots[i] = 0;
	}
}

Character::~Character()
{
	for (size_t i = 0; i < 4; i++) {
		if (this->slots[i] != 0)
			delete this->slots[i];
	}
}

Character::Character(Character &other)
{
	for (size_t i = 0; i < 4; i++) {
		if (this->slots[i] != 0)
			delete this->slots[i];
	}
	for (size_t i = 0; i < 4; i++) {
		this->slots[i] = other.slots[i];
	}
}

Character& Character::operator=(Character &other)
{
	if (this != &other)
	{
		for (size_t i = 0; i < 4; i++) {
			if (this->slots[i] != 0)
				delete this->slots[i];
		}
		for (size_t i = 0; i < 4; i++) {
			this->slots[i] = other.slots[i];
		}
	}
	return (*this);
}
std::string const &Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	if (m == 0 || (m->getType().compare("ice") != 0 && m->getType().compare("cure") != 0))
		return ;
	for (size_t i = 0; i < 4; i++) {
		if (this->slots[i] == 0)
		{	
			this->slots[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	size_t	currStashIdx;

	currStashIdx = Character::stashIdx % Character::stashSize;

	if (Character::stash[currStashIdx] != 0)
		delete Character::stash[currStashIdx];
	Character::stash[currStashIdx] = this->slots[idx];
	this->slots[idx] = 0;
	Character::stashIdx++;

	/*
	for (size_t i = 0; i < Character::stashSize; i++) {
		if (Character::stash[i] == 0)
		{
			Character::stash[i] = this->slots[idx];
			break ;
		}
	}
	this->slots[idx] = 0;
	*/
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "* invalid Materia slot *" << std::endl;
		return ;
	}
	if (this->slots[idx] != 0)
		this->slots[idx]->use(target);
	else
		std::cout << "* empty Materia slot *" << std::endl;
}

void Character::cleanStash()
{
	for (size_t i = 0; i < Character::stashSize; i++) {
		if (Character::stash[i] != 0)
			delete Character::stash[i];
	}
}
