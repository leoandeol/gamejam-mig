#include "Note.hpp"

Note::Note(int a, int b, int c, float vol)
{
  n_a = a;
  n_b = b;
  n_c = c;
  volume = vol;
}

int Note::getA()
{
  return n_a;
}

int Note::getB()
{
  return n_b;
}

int Note::getC()
{
  return n_c;
}

float Note::getVolume()
{
  return volume;
}
