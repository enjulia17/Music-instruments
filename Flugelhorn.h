#ifndef _Flugelhorn_h_
#define _Flugelhorn_h_
#include "Brass.h"

class TFlugelhorn : public TBrass
{
public:
	TFlugelhorn();
  virtual char* Voice();
  char* Glissando();

};


#endif // !_Flugelhorn_h_
