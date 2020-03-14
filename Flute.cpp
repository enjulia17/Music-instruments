#include "Flute.h"
#include <stdlib.h>

TFlute::TFlute() : TBrass()
{
	material = 1;
	soundRange = 3;
	soundSource = 2;
}

char * TFlute::Voice()
{
  return "Phew-phew";
}

int TFlute::warble()
{
  return rand() % 10 + 1;
}

double TFlute::timeperformance()
{
  return rand() % 5 + 2;
}
