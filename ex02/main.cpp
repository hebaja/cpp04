#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main()
{
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		j->makeSound();
		i->makeSound();

		delete j;
		delete i;
	}
	/*
	{
		Animal	*kennel[10];

		for (size_t i = 0; i < 5; i++) {
			kennel[i] = new Dog();
		}
		for (size_t i = 5; i < 10; i++) {
			kennel[i] = new Cat();
		}
		for (size_t i = 0; i < 10; i++) {
			std::cout << kennel[i]->getType() << " makes the sound ";
			kennel[i]->makeSound();
		}
		for (size_t i = 0; i < 10; i++) {
			delete kennel[i];
		}
	}
	*/
	/*
	{
		Cat	cat;

		cat.includeIdea(0, "FSSSS");
		std::cout << "	Original cat -> " << cat.getIdea(0) << std::endl;

		Cat	other = cat;
		
		std::cout << "	Copied cat -> " << other.getIdea(0) << std::endl;
		cat.includeIdea(1, "Scratch");
		std::cout << "	Original cat -> " << cat.getIdea(1) << std::endl;
		std::cout << "	Copied cat -> " << other.getIdea(1) << std::endl;
		other.includeIdea(1, "Eat more");
		std::cout << "	Original cat -> " << cat.getIdea(1) << std::endl;
		std::cout << "	Copied cat -> " << other.getIdea(1) << std::endl;
	}
	*/
	/*
	{
		Dog	dog;

		dog.includeIdea(0, "Woof");
		std::cout << "	Original dog -> " << dog.getIdea(0) << std::endl;

		Dog	other(dog);
		
		std::cout << "	Copied dog -> " << other.getIdea(0) << std::endl;
		dog.includeIdea(1, "Scratch");
		std::cout << "	Original dog -> " << dog.getIdea(1) << std::endl;
		std::cout << "	Copied dog -> " << other.getIdea(1) << std::endl;
		other.includeIdea(1, "Eat more");
		std::cout << "	Original dog -> " << dog.getIdea(1) << std::endl;
		std::cout << "	Copied dog -> " << other.getIdea(1) << std::endl;
	}
	*/
	/*
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		const Dog* dog = new Dog();
		const Cat* cat = new Cat();
		Dog a;
		Cat b;

		std::cout << meta->getType() << " makes sound ";
		meta->makeSound();
		std::cout << j->getType() << " makes sound ";
		j->makeSound();
		std::cout << i->getType() << " makes sound ";
		i->makeSound();
		std::cout << dog->getType() << " makes sound ";
		dog->makeSound();
		std::cout << cat->getType() << " makes sound ";
		cat->makeSound();
		std::cout << a.getType() << " makes sound ";
		a.makeSound();
		std::cout << b.getType() << " makes sound ";
		b.makeSound();

		delete meta;
		delete j;
		delete i;
		delete dog;
		delete cat;
	}
	*/
	return(0);
}
