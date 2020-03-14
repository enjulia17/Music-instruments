#pragma once
#ifndef _Guitar_h_
#define _Guitar_h_

#include "Stringed.h"

class TGuitar : public TStringed
{
public:
	TGuitar();
	virtual char* Voice();
	int tremolo_num(); //сколько раз выполняется "тремоло" в минуту
	double timeperformance();
};


#endif // !_Guitar_h_