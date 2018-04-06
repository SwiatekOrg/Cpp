#include<iostream>

using namespace std;

int main(){
	int LICZBA_ZNAKOW=26;
	char slowo[200];
	char tab[LICZBA_ZNAKOW] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	cin.getline(slowo,200);
	for(int i=0;i<200;i++){
		for(int x=0;x<LICZBA_ZNAKOW;x++){
			if(slowo[i] == tab[x]){
				slowo[i] = tab[(x+3)%LICZBA_ZNAKOW];
				break;
			}			
		}		
	}
	cout<<slowo<<endl;
	return 0;
}

// http://pl.spoj.com/problems/JSZYCER/
