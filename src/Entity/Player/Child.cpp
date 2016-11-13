#include "Child.hpp"

Child::Child(int lane, ResourceManager* m) : MovingEntity(lane, m)
{
  sex = (bool) rand()%2;
  enchanted = true;
  moveSpeed = 1.0;
  int rand_texture = rand()%2;
  if(sex&&rand_texture)
    {
      //todo
    }
  else if(sex)
    {
      
    }
  else if(rand_texture)
    {
      
    }
  else
    {

    }
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
