#include "Wolf.hpp"

Wolf::attack(Player player)
{
  player.getAttacked();
  delete this;
}
