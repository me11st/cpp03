#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    std::cout << "--- ClapTrap test ---" << std::endl;
    ClapTrap ct("Alpha");
    ct.attack("Bravo");
    ct.takeDamage(5);
    ct.beRepaired(3);

    std::cout << "\n--- ScavTrap test ---" << std::endl;
    ScavTrap st("Serena");
    st.attack("Target");
    st.takeDamage(30);
    st.beRepaired(10);
    st.guardGate();

    std::cout << "\n--- FragTrap test ---" << std::endl;
    FragTrap ft("Fraggie");
    ft.attack("Enemy");
    ft.takeDamage(50);
    ft.beRepaired(20);
    ft.highFivesGuys();

    std::cout << "\n--- Construction/Destruction order ---" << std::endl;
    {
        FragTrap temp("TempFrag");
    }
    std::cout << "--- End ---" << std::endl;
    return 0;
}
