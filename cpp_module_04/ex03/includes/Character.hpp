#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>

class Character : public ICharacter {
private:
	AMateria*	_inventory[4];
	std::string	_name;
public:
	Character();
	Character(std::string const &name);
	~Character();
	Character(Character const &src);
	Character& operator=(Character const &rhs);

	std::string const &getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	AMateria* getMateriaAddress(int idx);
	void use(int idx, ICharacter &target);
};

#endif
