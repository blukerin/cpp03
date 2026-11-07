#include "../includes/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
  this->_attackDamage = 30;
  this->_energyPoints = 100;
  this->_hitPoints = 100;
  std::cout << "Default FragTrap " << this->_name << "constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
  this->_attackDamage = 30;
  this->_energyPoints = 100;
  this->_hitPoints = 100;
  std::cout << "FragTrap " << this->_name << " constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other._name){
  *this = other;
  std::cout << "FragTrap " << this->_name << " copy constructor called" << std::endl;
}

FragTrap  &FragTrap::operator=(const FragTrap &other) {
  if (this != &other) {
    ClapTrap::operator=(other);
    this->_name = other._name;
  }
  return (*this);
}

FragTrap::~FragTrap() {
  std::cout << "FragTrap " << this->_name << " destructor called" << std::endl;
}

void  FragTrap::highFivesGuys(void) {
  std::cout << "FragTrap " << this->_name << " requests a highly positive high fives!" << std::endl;
}