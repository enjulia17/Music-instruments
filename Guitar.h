#pragma once
#ifndef _Guitar_h_
#define _Guitar_h_

#include "Stringed.h"

class TGuitar : public TStringed
{
public:
	TGuitar();
	virtual char* Voice();
	int tremolo_num(); //������� ��� ����������� "�������" � ������
	double timeperformance();
};


#endif // !_Guitar_h_