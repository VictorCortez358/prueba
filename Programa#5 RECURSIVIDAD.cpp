#include <iostream>
using namespace std;
int mcd(int,int);
int main(){
	int mayor,menor;
	cout<<"Ingrese el numero mayor: ";
	cin>>mayor;
	cout<<"Ingrese el numero menor: ";
	cin>>menor;
	mcd(mayor,menor);
}
int mcd(int mayor,int menor){
float aux,division=0;
division=mayor/menor;
    if(division==0){
    	cout<<"El MCD es de "<<menor<<endl;
    	return menor;
		}
	else{
		while(division>0){
			division= menor/division;
		}
		cout<<"El MCD es de "<<division;
	    return mcd(division);
	}
}

