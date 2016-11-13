#include "Child.hpp"

Child::Child(int lane) : MovingEntity(lane)
{
  sex = (bool) rand()%2;
  enchanted = true;
  moveSpeed = 1.0;
}

void Child::setEnchant(bool ench)
{
  enchanted = ench;
}

bool Child::getSex()
{
  return &sex;
}

void Child::kill()
{
  //Call animations death
}

int Child::update(sf::Time delta)
{
  return 0;
}
