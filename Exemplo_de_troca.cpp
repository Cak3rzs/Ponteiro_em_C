#include <iostream>
using namespace std; 

void troca(int &a, int &b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}
main(){
	int a=2,b = 3;
	cout <<"\n Antes da troca:\na=" <<a << "\tb=" << b << endl;
	troca(a,b); 
	cout <<"\n Depois da troca:\na=" <<a << "\tb=" << b << endl;

}
