#include "Child.hpp"

Child::Child(int lane) : MovingEntity(lane)
{
  sex = (bool) rand()%2;
  enchanted = true;
  moveSpeed = 1.0;
}

void Child::setEnchanted()
{
  enchanted = true;
}

void Child::setDesenchanted()
{
  enchanted = false;
}

bool Child::getSex()
{
  return &sex;
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
