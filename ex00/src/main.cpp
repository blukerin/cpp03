#include "../includes/ClapTrap.hpp"

int main() {
    std::cout << "\n1. Different constructors" << std::endl;
    ClapTrap empty;
    ClapTrap blukker("Blukker");
    ClapTrap clone(blukker);

    empty = blukker;
    std::cout << "\n2. Basic actions" << std::endl;
    blukker.attack("dummy");
    blukker.takeDamage(5);
    blukker.beRepaired(3);

    std::cout << "\n3. Limits" << std::endl;
    blukker.takeDamage(20); 
    
    blukker.attack("imaginary enemy");

    blukker.beRepaired(10);

    std::cout << "\n4. Attack until there is no energy" << std::endl;
    for (int i = 0; i < 11; i++) {
        clone.attack("machine gun");
    }

    std::cout << "\n5. Destructors" << std::endl;
    return (0);
}