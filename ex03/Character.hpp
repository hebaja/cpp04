#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		std::string name;
		AMateria *slots[4];
		const static size_t stashSize = 4;
		static size_t	stashIdx;

	public:
		Character(const std::string &name);
		~Character();
		Character(Character &other);
		Character& operator=(Character & other);

		std::string const &getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

		static AMateria *stash[10];
		static void	cleanStash();
};
