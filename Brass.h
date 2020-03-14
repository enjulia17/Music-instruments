#ifndef _Brass_h_
#define _Brass_h_

#include "Music_instruments.h"

class TBrass : public TMusic_instruments
{
protected:
  int mregister; // музыкальный регистр
  bool valve; //наличие вентиля
  bool symphonyOrchestra; //входит ли в симфонический оркестр

public:
	TBrass();

  int Getmregister();
  bool Getvalve();
  bool GetsymphonyOrchestra();

  void Setvalve(bool v);

  double timeperformance(); //сколько минут длится партия
  virtual char* Voice();
};



#endif // !_Brass_h_
