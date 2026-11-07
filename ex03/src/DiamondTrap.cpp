#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name"), FragTrap(), ScavTrap() {
  this->_name = "Default";  
  this->_attackDamage = 30;
  this->_energyPoints = 50;
  this->_hitPoints = 100;
  std::cout << "Default DiamonTrap " << this->_name << " constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name) {
  this->_name = name;
  this->_attackDamage = 30;
  this->_energyPoints = 50;
  this->_hitPoints = 100;
  std::cout << "DiamondTrap " << this->_name << " constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), FragTrap(other), ScavTrap(other) {
  this->_name = other._name;
  std::cout << "DiamondTrap copy " << this->_name << " constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
  if (this != &other) {
    ClapTrap::operator=(other);
    this->_name = other._name;
  }
  return (*this);
}

DiamondTrap::~DiamondTrap() {
  std::cout << "DiamondTrap " << this->_name << " destructor called" << std::endl;
}

void  DiamondTrap::attack(const std::string& target) {
  ScavTrap::attack(target);
}

void  DiamondTrap::whoAmI(void) {
  std::cout << "DiamondTrap name: " << this->_name << " | ClapTrap name: " << ClapTrap::_name << std::endl;
}
