#include "Brass.h"

TBrass::TBrass() : TMusic_instruments()
{
	mregister = 0;
	valve = false;
	symphonyOrchestra = 1;
}

int TBrass::Getmregister()
{
  return mregister;
}

bool TBrass::Getvalve()
{
  return valve;
}

bool TBrass::GetsymphonyOrchestra()
{
  return symphonyOrchestra;
}

void TBrass::Setvalve(bool v)
{
	valve = v;
}

double TBrass::timeperformance()
{
  return 0.0;
}

char * TBrass::Voice()
{
  return "UUU";
}
