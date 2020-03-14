#ifndef _Brass_h_
#define _Brass_h_

#include "Music_instruments.h"

class TBrass : public TMusic_instruments
{
protected:
  int mregister; // ����������� �������
  bool valve; //������� �������
  bool symphonyOrchestra; //������ �� � ������������� �������

public:
	TBrass();

  int Getmregister();
  bool Getvalve();
  bool GetsymphonyOrchestra();

  void Setvalve(bool v);

  double timeperformance(); //������� ����� ������ ������
  virtual char* Voice();
};



#endif // !_Brass_h_
