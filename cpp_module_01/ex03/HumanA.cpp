#include "HumanA.hpp"
#include "iostream"

// HumanA::HumanA (std::string name, Weapon weapon) {
// 	this->_name = name;
// 	this->_weapon.setType(weapon.getType());
// }

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {
}


HumanA::~HumanA() {

}

void HumanA::attack() const {
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
