#include <iostream>

using namespace std; 

main(){
	int num, valor;
	int *p;
	num = 55;
	p = &num;
	
	valor = *p;
	cout << "\nValor:" << valor;
	cout << "\nEndereço:" << p;
	cout << "\nValor da var:" << *p;
}
