#include "../includes/ScavTrap.hpp"

int main() {
  std::cout << "\n1. Constructors" << std::endl;
    ScavTrap defaultScav;
    ScavTrap blukker("Blukker");

    std::cout << "\n2. Actions" << std::endl;
    blukker.attack("a bald man"); 
    
    blukker.takeDamage(30); 
    blukker.beRepaired(20); 

    std::cout << "\n3. ScavTrap changes mode" << std::endl;
    blukker.guardGate();

    std::cout << "\n4. ScavTrap clone" << std::endl;
    ScavTrap clone(blukker);
    defaultScav = clone;

    std::cout << "\n5. Limits" << std::endl;
    clone.takeDamage(200); 
    
    clone.attack("a wall");
    clone.beRepaired(50);
    clone.guardGate();

    std::cout << "\n6. Destructors" << std::endl;
    return (0);
}