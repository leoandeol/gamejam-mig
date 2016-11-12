#include "Child.hpp"

Child::Child(int lane) : MovingEntity(lane)
{
  c_sex = (bool) rand()%2;
  c_enchanted = true;
  c_moveSpeed = 1.0;
}

void Child::setEnchanted()
{
  c_enchanted = true;
}

void Child::setDesenchanted()
{
  c_enchanted = false;
}

bool Child::getSex()
{
  return &c_sex;
}

void Child::kill()
{
}

int Child::update(sf::Time delta)
{
  return 0;
}

//FAIRE METHODE DESENCHANTE
//JOUER TROP FAUX
//JOUER PAS ASSEZ FORT
