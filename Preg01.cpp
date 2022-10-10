#include<iostream>

using namespace std;


int main(){
	
	int a,b,aux;
	cout<<"Datos de entrada\n";
    cout<<"a:\n";
    cin>>a;
    cout<<"b:\n";
    cin>>b;
	aux=a;
	a=b;
	b =aux;
	cout<<"Datos de salida: \n";
    cout<<"a ="<<a;    
    cout<<"\nb ="<<b;
   
    return 0;
}
