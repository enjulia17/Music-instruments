#ifndef _Flute_h_
#define _Flute_h_

#include "Brass.h"

class TFlute : public TBrass
{
public:
  TFlute();
  virtual char* Voice();
  int warble(); //�����(������� ��� �� ������)
  double timeperformance();
};


#endif // !_Flute_h_

