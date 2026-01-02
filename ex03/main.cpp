#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int	main()
{
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	}
	/*
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Cure());
		src->learnMateria(new Ice());
		
		AMateria *tmp;
		ICharacter *tifa = new Character("Tifa");
		tmp = src->createMateria("cure");
		tifa->equip(tmp);
		tmp = src->createMateria("cure");
		tifa->equip(tmp);
		tmp = src->createMateria("ice");
		tifa->equip(tmp);
		tmp = src->createMateria("ice");
		tifa->equip(tmp);

		ICharacter *cloud = new Character("Cloud");
		tmp = src->createMateria("cure");
		cloud->equip(tmp);
		tmp = src->createMateria("cure");
		cloud->equip(tmp);
		tmp = src->createMateria("ice");
		cloud->equip(tmp);
		tmp = src->createMateria("ice");
		cloud->equip(tmp);
		for (size_t i = 0; i < 3; i++) {
			tifa->unequip(i);	
		}
		for (size_t i = 0; i < 3; i++) {
			cloud->unequip(i);	
		}
		
		tmp = src->createMateria("ice");
		tifa->equip(tmp);
		tifa->unequip(0);
		tmp = src->createMateria("cure");
		cloud->equip(tmp);
		
		delete src;
		delete tifa;
		delete cloud;
		Character::cleanStash();
	}
	*/
	/*
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Cure());
		src->learnMateria(new Cure());
		src->learnMateria(new Ice());
		src->learnMateria(new Ice());
		src->learnMateria(new Cure()); // deletes this Materia

		AMateria *tmp;
		ICharacter *tifa = new Character("Tifa");
		ICharacter *cloud = new Character("Cloud");

		tmp = src->createMateria("cure");
		tifa->equip(tmp);
		tmp = src->createMateria("cure");
		tifa->equip(tmp);
		tmp = src->createMateria("ice");
		tifa->equip(tmp);
		tmp = src->createMateria("ice");
		tifa->equip(tmp);
		tmp = src->createMateria("ice");
		tifa->equip(tmp); // Doesn't equip this materia
		
		tifa->use(0, *cloud);
		tifa->use(1, *cloud);
		tifa->use(2, *cloud);
		tifa->use(3, *cloud);
		tifa->use(4, *cloud);

		delete src;
		delete tifa;
		delete cloud;
		delete tmp; // need to delete because it wasn't assigned to Tifa
		Character::cleanStash();
	}
	*/
	/*
	{
		IMateriaSource *src = new MateriaSource();

		AMateria *tmp;

		src->learnMateria(new Cure());
		src->learnMateria(new Ice());
		tmp = src->createMateria("cure");

		ICharacter *cloud = new Character("Cloud");
		ICharacter *red13 = new Character("Red13");
		ICharacter *barret = new Character("Barret");
		std::cout << red13->getName() << std::endl;

		cloud->equip(tmp);
		tmp = src->createMateria("ice");
		cloud->equip(tmp);
		std::cout << cloud->getName() << " ";
		cloud->use(0, *red13);
		std::cout << cloud->getName() << " ";
		cloud->use(1, *barret);
		std::cout << cloud->getName() << " ";
		cloud->use(2, *barret);

		cloud->unequip(0);
		cloud->unequip(1);

		AMateria *clone = tmp->clone();

		red13->equip(clone);
		std::cout << red13->getName() << " ";
		red13->use(0, *cloud);

		red13->unequip(0);

		delete src;
		delete cloud;
		delete red13;
		delete barret;
		Character::cleanStash();
	}
	*/
	return (0);
}
