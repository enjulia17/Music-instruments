#include "Stringed.h"

TStringed::TStringed() : TMusic_instruments()
{
	influence_method = 0;
	string_length = 0;
	string_num = 0;
}

int TStringed::Getinfluence_method()
{
	return influence_method;
}

int TStringed::Getstring_length()
{
	return string_length;
}

int TStringed::Getstring_num()
{
	return string_num;
}

void TStringed::Setstring_num(int stnum)
{
	string_num = stnum;
}

double TStringed::timeperformance()
{
	return 0.0;
}

char * TStringed::Voice()
{
	return "AAA";
}
