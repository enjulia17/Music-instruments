#pragma once
#ifndef _Piano_h_
#define _Piano_h_

#include "Stringed.h"

class TPiano : public TStringed
{
public:
	TPiano();
	virtual char* Voice();
	int music_chord_soundnum(); //сколько звуков в аккорде
	double timeperformance();
};


#endif // !_Piano_h_