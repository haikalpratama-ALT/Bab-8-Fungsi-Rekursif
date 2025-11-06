#include <iostream>
using namespace std;

int pangkatRekursif(int x, int y){
	if (y == 0 ) return 1;
	else return x * pangkatRekursif(x,y-1);
}
int main() {
	int a , b;
	cout << "Masukkan angka : "; cin >> a;
	cout << "Dipangkatkan berapa : "; cin >> b; 
	cout << pangkatRekursif(a , b) << endl;
	return 0;
}
