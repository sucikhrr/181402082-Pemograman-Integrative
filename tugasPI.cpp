#include <conio.h>
#include <iostream>
using namespace std;
int a= 4, b=2;

int pengurangan()
{
int kurang ;
kurang = a - b ;
return kurang ;
}

int perkalian()
{ int kali; 
 kali = a* b;
 return kali;
}

int main ()
{
cout<<endl<<"Pengurangan a dan b = "<<pengurangan();
 cout<<endl<<"Perkalian a dan b = "<<perkalian();
return 0;
}
