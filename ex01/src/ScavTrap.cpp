#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
  this->_attackDamage = 20;
  this->_energyPoints = 50;
  this->_hitPoints = 100;
  std::cout << "ScavTrap " << this->_name << " default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
  this->_attackDamage = 20;
  this->_energyPoints = 50;
  this->_hitPoints = 100;
  std::cout << "ScavTrap " << this->_name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other._name){
  *this = other;
  std::cout << "ScavTrap " << this->_name << " copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
  if (this != &other) {
    ClapTrap::operator=(other);
    this->_name = other._name;
  }
  return (*this);
}

ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap " << this->_name << " destructor called" << std::endl;
}

void  ScavTrap::guardGate(void) {
  std::cout << "ScavTrap " << this->_name << "  is now in Gate keeper mode" << std::endl;
}

void  ScavTrap::attack(const std::string& target) {
  if (this->_energyPoints <= 0)
    std::cout << "Scavtrap " << this->_name << " can't attack, it has no energy points left" << std::endl;
  else if (this->_hitPoints <= 0)
    std::cout << "Scavtrap " << this->_name << " can't attack, it has no hit points left" << std::endl;
  else {
    std::cout << "Scavtrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    this->_energyPoints -= 1;
  }
}