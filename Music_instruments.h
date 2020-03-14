#ifndef _Music_instruments_h_
#define _Music_instruments_h_

class  TMusic_instruments
{
protected:
  int material;
  int soundRange;
  int soundSource;
public:
	TMusic_instruments();

   int Getmaterial();
   int GetsoundRange();
   int GetsoundSource();

   void Setmaterial(int m);
   void SetsoundRange(int s);

   virtual char* Voice();
};

 



#endif // !_Givotnie_h_
