#pragma once
#ifndef _Stringed_h_
#define _Stringed_h_

#include "Music_instruments.h"

class TStringed : public TMusic_instruments
{
protected:
	int influence_method; // способ воздействия при игре
	int string_length ; //длина струны
	int string_num; //количество струн

public:
	TStringed();

	int Getinfluence_method();
	int Getstring_length();
	int Getstring_num();

	void Setstring_num(int stnum);

	double timeperformance(); //сколько минут длится партия
	virtual char* Voice();
};



#endif // !_Stringed_h_
