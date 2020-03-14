#include "Guitar.h"
#include <stdlib.h>

TGuitar::TGuitar() : TStringed()
{
	material = 6;
	soundRange = 4;
	soundSource = 9;
}

char * TGuitar::Voice()
{
	return "Trin-trin";
}

int TGuitar::tremolo_num()
{
	return rand() % 7 + 1;
}

double TGuitar::timeperformance()
{
	return rand() % 7 + 3;
}
