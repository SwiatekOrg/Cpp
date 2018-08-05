#include<iostream>
#include <algorithm>

using namespace std;

int main()
{
	long long PESEL;
	int tab[11],ile,suma[ile];
	cin>>ile;
	for(int i=0;i<ile;i++){
		cin>>PESEL;
		for(int i=0;i<11;i++){
			tab[i] = PESEL % 10;
			PESEL = (PESEL-tab[i])/10;
		}
		reverse(tab, tab+11);		
		suma[i] = tab[0]*1+tab[1]*3+tab[2]*7+tab[3]*9+tab[4]*1+tab[5]*3+tab[6]*7+tab[7]*9+tab[8]*1+tab[9]*3+tab[10]*1;
	}
	for(int i=0;i<ile;i++){
		if(suma[i] % 10 == 0)
		{
			cout<<"D"<<endl;
		}
		else
		{
			cout<<"N"<<endl;
		}
		
	}
	return 0;
}

// http://pl.spoj.com/problems/JPESEL/
