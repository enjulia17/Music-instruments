#include "Music_instruments.h"
#include "Brass.h"
#include "Stringed.h"
#include "Piano.h"
#include "Guitar.h"
#include "Flute.h"
#include "Flugelhorn.h"
#include <iostream>

using namespace std;

void main()
{
  TMusic_instruments newMusic_instrument;
  newMusic_instrument.Setmaterial(3);
  newMusic_instrument.SetsoundRange(2);

  cout << "soundRange = " << newMusic_instrument.GetsoundRange() << endl;

  TBrass newBrass;
  newBrass.Setvalve(true);
  newBrass.Setmaterial(5);
  newBrass.SetsoundRange(4);

  cout << "newBrass is performing " << newBrass.Voice() << endl;

  TFlugelhorn Flugelhorn_Leader;
  cout << "Flugelhorn_Leader is performing " << Flugelhorn_Leader.Voice() << endl;
  cout << "Flugelhorn_Leader is ending " << Flugelhorn_Leader.Glissando() << endl;
  cout << "soundRange = " << Flugelhorn_Leader.GetsoundRange() << endl;

  TFlute Flute_Accompanist;
  cout << "Flute_Accompanist is performing " << Flute_Accompanist.Voice() << endl;
  cout << "Flute_Accompanist warble number/min = " << Flute_Accompanist.warble() << endl;
  cout << "soundRange = " << Flute_Accompanist.GetsoundRange() << endl;

  TStringed newStringed;
  newStringed.Setstring_num(1);
  newStringed.Setmaterial(7);
  newStringed.SetsoundRange(8);

  cout << "newStringed is performing " << newStringed.Voice() << endl;

  TPiano Piano_Soloist;
  cout << "Piano_Soloist is performing " << Piano_Soloist.Voice() << endl;
  cout << "Piano_Soloist final chord sound number =  " << Piano_Soloist.music_chord_soundnum() << endl;
  cout << "soundRange = " << Piano_Soloist.GetsoundRange() << endl;

  TGuitar Guitar_Bass;
  cout << "Guitar_Bass is performing " << Guitar_Bass.Voice() << endl;
  cout << "Guitar_Bass tremolo number/min = " << Guitar_Bass.tremolo_num() << endl;
  cout << "soundRange = " << Guitar_Bass.GetsoundRange() << endl;


  TBrass** Orchestra = 0;
  int Music_instruments_num = 0;
  cout << " Music_instruments_num = " << endl;
  cin >> Music_instruments_num;

  Orchestra = new TBrass*[Music_instruments_num];
  for (int i = 0; i < Music_instruments_num; i++)
  {
    cout << "Which one?" << endl;
    int a;
    cin >> a;
    if (a == 0)
		Orchestra[i] = new TFlute();
    else
		Orchestra[i] = new TFlugelhorn();

    cout << "soundRange = " << Orchestra[i]->GetsoundRange() << endl;
    cout << "Instrument " << i << "is playing " << Orchestra[i]->Voice() << endl;
	break;
  }

  TStringed** Orchestra_1 = 0;
  int Music_instruments_num_1 = 0;
  cout << " Music_instruments_num_1 = " << endl;
  cin >> Music_instruments_num_1;

  Orchestra_1 = new TStringed*[Music_instruments_num_1];
  for (int i = 0; i < Music_instruments_num_1; i++)
  {
	  cout << "Which one?" << endl;
	  int b;
	  cin >> b;
	  if (b == 0)
		  Orchestra_1[i] = new TPiano();
	  else
		  Orchestra_1[i] = new TGuitar();

	  cout << "soundRange = " << Orchestra_1[i]->GetsoundRange() << endl;
	  cout << "Instrument " << i << "is playing " << Orchestra_1[i]->Voice() << endl;
  }
}