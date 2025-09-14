#include "ClapTrap.hpp"
#include <iostream>

int main() {
    ClapTrap ct1("Alpha");
    ClapTrap ct2("Bravo");

    ct1.attack("Bravo");
    ct2.takeDamage(5);
    ct2.beRepaired(3);
    ct2.attack("Alpha");
    ct1.takeDamage(10);
    ct1.beRepaired(5);
    ct1.attack("Bravo");
    return 0;
}
