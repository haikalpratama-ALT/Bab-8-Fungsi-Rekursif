#include <iostream>
using namespace std;

int fibonacci( int n){
	if (n==0) return 0;
	else if (n==1) return 1;
	else return fibonacci(n-1) + fibonacci(n-2);
}

int main (){
	int angka;
	cout << "masukkan deret bilangan fibonacci : "; 
	cin >> angka;
	cout << fibonacci(angka) << endl;
	return 0;
}
