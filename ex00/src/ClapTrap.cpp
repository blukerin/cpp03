#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap():_name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
  std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name):_hitPoints(10), _energyPoints(10), _attackDamage(0) {
  std::cout << "ClapTrap constructor called" << std::endl;
  this->_name = name;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
  std::cout << "ClapTrap copy constructor called" << std::endl;
  *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
  if (this != &other) {
    this->_attackDamage = other._attackDamage;
    this->_energyPoints = other._energyPoints;
    this->_hitPoints = other._hitPoints;
    this->_name = other._name;
  }
  return (*this);
}

ClapTrap::~ClapTrap() {
  std::cout << "ClapTrap destructor called" << std::endl;
}

void  ClapTrap::attack(const std::string& target) {
  if (this->_energyPoints <= 0)
    std::cout << "Claptrap " << this->_name << " can't attack, it has no energy points left" << std::endl;
  else if (this->_hitPoints <= 0)
    std::cout << "Claptrap " << this->_name << " can't attack, it has no hit points left" << std::endl;
  else {
    std::cout << "Claptrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    this->_energyPoints -= 1;
  }
}

void  ClapTrap::takeDamage(unsigned int amount) {
  if (this->_hitPoints <= 0)
    std::cout << "Claptrap " << this->_name << " can't repair itself, it has already no hit points left" << std::endl;
  else if ((unsigned int)this->_hitPoints > amount) {
    this->_hitPoints -= amount;
    std::cout << "Claptrap " << this->_name << " takes " << amount << " damage, he has " << this->_hitPoints << " hit points" << std::endl;
  }
  else {
    this->_hitPoints = 0;
    std::cout << "Claptrap " << this->_name << " takes " << amount << " damage, he has no hit points left" << std::endl;
  }
}

void  ClapTrap::beRepaired(unsigned int amount) {
  if (this->_energyPoints <= 0)
    std::cout << "Claptrap " << this->_name << " can't repair itself, it has no energy points left" << std::endl;
  else if (this->_hitPoints <= 0)
    std::cout << "Claptrap " << this->_name << " can't repair itself, it has no hit points left" << std::endl;
  else {
    this->_hitPoints += (int)amount;
    std::cout << "Claptrap " << this->_name << " repairs itself, gaining " << amount << " hit points, he has now " << this->_hitPoints << " hit points!" << std::endl;
    this->_energyPoints -= 1;
  }
}