#include "Flugelhorn.h"

TFlugelhorn::TFlugelhorn() : TBrass()
{
	material = 3;
	soundRange = 3;
	soundSource = 4;
}

char * TFlugelhorn::Voice()
{
  return "Tu-tu-tu";
}

char * TFlugelhorn::Glissando()
{
  return "Tru-lu-lu-lu-lu";
}
