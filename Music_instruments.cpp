#include "Music_instruments.h"

TMusic_instruments::TMusic_instruments()
{
	material = 0;
	soundRange = 0;//кол-во октав
	soundSource = 1;
}

int TMusic_instruments::Getmaterial()
{
  return material;
}
int TMusic_instruments::GetsoundRange()
{
  return soundRange;
}
int TMusic_instruments::GetsoundSource()
{
  return soundSource;
}

void TMusic_instruments::SetsoundRange(int s)
{
  if (s > 0 && s < 10)
	  soundRange = s;
}
void TMusic_instruments::Setmaterial(int m)
{
  material = m;
}

char* TMusic_instruments::Voice()
{
  return "";
}