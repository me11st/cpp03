#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(const std::string& name)
    : ClapTrap(name)
{
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap " << name << " constructed!" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << this->name << " destructed!" << std::endl;
}

void FragTrap::attack(const std::string& target) {
    if (hitPoints <= 0 || energyPoints <= 0) {
        std::cout << "FragTrap " << name << " can't attack. No hit points or energy left!" << std::endl;
        return;
    }
    energyPoints--;
    std::cout << "FragTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << name << " requests a high five! ✋" << std::endl;
}
