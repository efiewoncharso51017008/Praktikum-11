#include <iostream.h>
#include <conio.h>

struct koordinat
 int x, y ;
void ubah_posisi( koordinat*posisi)
void main ()
{
koordinat posisi;
posisi.x = 10;
posisi.y = 30;
cout<<"isi semula: x="<<posisi.x<<"y="<<posisi.y <<endl;
ubah_posisi (&posisi);
cout<<"isi sekarang : x= " << posisi.x<<"y="<< posisi.y <<endl;
}
void ubah_posisi(koordinat *posisi)
{
(*posisi).x =100;
(*posisi).y =300;
}
getch();}