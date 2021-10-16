//By Satanic Scripter
#include <iostream>
using namespace std;

int main() {
//Identificatori
int a,b,c;
float media;
// START
cout << "Inserisci il primo voto" << endl;
cin >> a;
cout << "Inserisci il secondo voto" << endl;
cin >> b;
cout << "Inserisci il terzo voto" << endl;
cin >> c;
if((a>=18) && (a<=30) && (b>=18) && (b<=30) && (c>=18) && (c<=30))
{
    media=(a+b+c)/3.0;
    cout << "media dei valori inseriti=" << media << endl;
}
	return 0;
}
