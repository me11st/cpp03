#include "ClapTrap.hpp"
#include <iostream>


#include "ScavTrap.hpp"

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

    std::cout << "\n--- Construction/Destruction order ---" << std::endl;
    {
        ScavTrap temp("Temp");
    }
    std::cout << "--- End ---" << std::endl;
    return 0;
}
