#include "../includes/FragTrap.hpp"

int main() {
  std::cout << "\n1. Constructors" << std::endl;
  FragTrap frag1("Bender");
  FragTrap frag2("Wall-E");
  FragTrap frag3;
  frag3 = frag1;
  FragTrap frag4(frag2);

  std::cout << "\n2. Different movements" << std::endl;
  frag1.attack("a wild wolf");
    
  frag1.takeDamage(50);
  frag1.takeDamage(40);
    
  frag1.beRepaired(60);

  std::cout << "\n3. New abilitie" << std::endl;
  frag1.highFivesGuys();
  frag2.highFivesGuys();
  frag3.highFivesGuys();

  std::cout << "\n4. Destructors" << std::endl;    
  return (0);
}