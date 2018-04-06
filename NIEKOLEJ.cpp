#include<iostream>
#include <cstdlib>
using namespace std;

int main(){
	srand( time( NULL ) );
	int a;
	cout<<"Podaj liczbe: ";
	cin>>a;
	int tab[a],b = a;
	for(int i=0;i<b;i++){
		tab[i] = a;
		a--;
	}
	
	for(int i=0;i<b;i++){
		for(int x=1;i<b-1;x++){
			if(tab[i] == tab[i-1] or tab[i] == tabl[i+1])
				z = (rand() % (b))
			
		}
		
	}
	
	return 0;
}
