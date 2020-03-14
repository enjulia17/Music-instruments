#include "Piano.h"
#include <stdlib.h>

TPiano::TPiano() : TStringed()
{
	material = 5;
	soundRange = 8;
	soundSource = 9;
}

char * TPiano::Voice()
{
	return "Do-Re-Mi";
}

int TPiano::music_chord_soundnum()
{
	return rand() % 9 + 3;
}

double TPiano::timeperformance()
{
	return rand() % 10 + 3;
}
