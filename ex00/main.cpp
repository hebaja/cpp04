#include "Dog.hpp"
#include "Cat.hpp"

int	main()
{
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << meta->getType() << " makes the sound ";
		meta->makeSound();
		std::cout << j->getType() << " makes the sound ";
		j->makeSound();
		std::cout << i->getType() << " makes the sound ";
		i->makeSound();

		delete meta;
		delete j;
		delete i;
	}
	std::cout << "***************************" << std::endl;
	{
		const Animal animal;
		const Dog dog;
		const Cat cat;
		
		std::cout << animal.getType() << " makes the sound ";
		animal.makeSound();
		std::cout << dog.getType() << " makes the sound ";
		dog.makeSound();
		std::cout << cat.getType() << " makes the sound ";
		cat.makeSound();
	}
	std::cout << "***************************" << std::endl;
	{
		const Dog* dog = new Dog();
		const Cat* cat = new Cat();

		std::cout << dog->getType() << " makes the sound ";
		dog->makeSound();
		std::cout << cat->getType() << " makes the sound ";
		cat->makeSound();

		delete dog;
		delete cat;
	}

	return (0);
}
