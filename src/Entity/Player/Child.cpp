#include "Child.hpp"

Child::Child(int lane, ResourceManager* m) : MovingEntity(lane, m)
{
  sex = (bool) rand()%2;
  enchanted = true;
  moveSpeed = 1.0;
  std::string path;
  if(sex)
    {
      path="data/textures/game/EnfantASprite.png";
    }
  else
    {
      path="data/textures/game/EnfantASprite.png";
    }
  anim = new Animation[4];
  anim[0] = new Animation(m->getTexture(path),75,114,14,0,POS,true);
  anim[1] = new Animation(m->getTexture(path),75,114,25,1,POS,false);
  anim[2] = new Animation(m->getTexture(path),75,114,7,2,POS,false);
  anim[3] = new Animation(m->getTexture(path),75,114,7,3,true);
}

void Child::setEnchant(bool ench)
{
  enchanted = ench;
}

bool Child::getSex()
{
  return sex;
}

void Child::kill()
{
  act = Fall;
}

int Child::update(sf::Time delta)
{
  switch(act)
    {
    case Walk:
      currentAnim=anim[0];
      currentAnim->move(delta*acceleration);
      break;
    case Fall:
      currentAnim=anim[1];

      break;
    case Cry:
      currentAnim=anim[2];

      break;
    case Jump:
      currentAnim=anim[3];
      currentAnim->move(delta*acceleration);

      break;
    }
}

void Child::draw(sf::RenderWindow* w)
{
  currentAnim->draw(w);
}

void Child::setAction(Action a)
{
  act = a;
}

Action Child::getAction()
{
  return act;
}
