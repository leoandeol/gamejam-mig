#ifndef DEF_NOTE
#define DEF_NOTE

class Note
{ 
public:
  Note(int, int, int);
  int getA();
  int getB();
  int getC();
  float getVolume();

private:
  int n_a;
  int n_b;
  int n_c;
  float volume;
};

#endif
