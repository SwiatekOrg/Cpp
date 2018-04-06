#include<iostream>
#include <algorithm>

using namespace std;

int main()
{
	long long PESEL;
	int tab[10],suma;
	cout<<"Podaj PESEL(11 cyfr) do sprawdzenia: ";
	cin>>PESEL;
	for(int i=0;i<11;i++){
		tab[i] = PESEL % 10;
		PESEL = (PESEL-tab[i])/10;
	}
	reverse(tab, tab+11);		
	suma = tab[0]*1+tab[1]*3+tab[2]*7+tab[3]*9+tab[4]*1+tab[5]*3+tab[6]*7+tab[7]*9+tab[8]*1+tab[9]*3+tab[10]*1;
	if(suma % 10 == 0)
	{
		cout<<"D";
	}
	else
	{
		cout<<"N";
	}
	return 0;
}

// http://pl.spoj.com/problems/JPESEL/
