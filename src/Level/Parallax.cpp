#include "Parallax.hpp"

Parallax::Parallax(ResourceManager* res)
{
  a1 = new sf::Sprite();
  a2 = new sf::Sprite();
  b1 = new sf::Sprite();
  b2 = new sf::Sprite();
  c1 = new sf::Sprite();
  c2 = new sf::Sprite();
  d1 = new sf::Sprite();
  d2 = new sf::Sprite();
  e1 = new sf::Sprite();
  e2 = new sf::Sprite();
  f1 = new sf::Sprite();
  f2 = new sf::Sprite();
  a1->setTexture(*res->getTexture("data/textures/game/background/1.png"));
  a2->setTexture(*res->getTexture("data/textures/game/background/1.png"));
  b1->setTexture(*res->getTexture("data/textures/game/background/2.png"));
  b2->setTexture(*res->getTexture("data/textures/game/background/2.png"));
  c1->setTexture(*res->getTexture("data/textures/game/background/3.png"));
  c2->setTexture(*res->getTexture("data/textures/game/background/3.png"));
  d1->setTexture(*res->getTexture("data/textures/game/background/4.png"));
  d2->setTexture(*res->getTexture("data/textures/game/background/4.png"));
  e1->setTexture(*res->getTexture("data/textures/game/background/5.png"));
  e2->setTexture(*res->getTexture("data/textures/game/background/5.png"));
  f1->setTexture(*res->getTexture("data/textures/game/background/6.png"));
  f2->setTexture(*res->getTexture("data/textures/game/background/6.png"));
  a1->setPosition(0,0);
  b1->setPosition(0,0);
  c1->setPosition(0,0);
  d1->setPosition(0,0);
  e1->setPosition(0,0);
  f1->setPosition(0,0);
  a2->setPosition(1280,0);
  b2->setPosition(1280,0);
  c2->setPosition(1280,0);
  d2->setPosition(1280,0);
  e2->setPosition(1280,0);
  f2->setPosition(1280,0);
}

Parallax::~Parallax()
{
  
}

void Parallax::update(sf::Time delta)
{
  int p = delta.asMilliseconds();
  a1->move(-a_speed*p,0);
  a2->move(-a_speed*p,0);
  b1->move(-b_speed*p,0);
  b2->move(-b_speed*p,0);
  c1->move(-c_speed*p,0);
  c2->move(-c_speed*p,0);
  d1->move(-d_speed*p,0);
  d2->move(-d_speed*p,0);
  e1->move(-e_speed*p,0);
  e2->move(-e_speed*p,0);
  f1->move(-f_speed*p,0);
  f2->move(-f_speed*p,0);
  
  if(a1->getPosition().x<-1280)
    a1->setPosition(1280,0);
  if(a2->getPosition().x<-1280)
    a2->setPosition(1280,0);
  if(b1->getPosition().x<-1280)
    b1->setPosition(1280,0);
  if(b2->getPosition().x<-1280)
    b2->setPosition(1280,0);
  if(c1->getPosition().x<-1280)
    c1->setPosition(1280,0);
  if(c2->getPosition().x<-1280)
    c2->setPosition(1280,0);
  if(d1->getPosition().x<-1280)
    d1->setPosition(1280,0);
  if(d2->getPosition().x<-1280)
    d2->setPosition(1280,0);
  if(e1->getPosition().x<-1280)
    e1->setPosition(1280,0);
  if(e2->getPosition().x<-1280)
    e2->setPosition(1280,0);
  if(f1->getPosition().x<-1280)
    f1->setPosition(1280,0);
  if(f2->getPosition().x<-1280)
    f2->setPosition(1280,0);
}

void Parallax::draw(sf::RenderWindow* w)
{
  w->draw(*a1);
  w->draw(*a2);
  w->draw(*b1);
  w->draw(*b2);
  w->draw(*c1);
  w->draw(*c2);
  w->draw(*d1);
  w->draw(*d2);
  w->draw(*e1);
  w->draw(*e2);
  w->draw(*f1);
  w->draw(*f2);
}
