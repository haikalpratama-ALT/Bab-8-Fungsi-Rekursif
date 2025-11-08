#include<iostream>
using namespace std;

// tidak ada base untuk angka ganjil seharusnya ada if n%2= !0 return 1
void contohRekursiBerisiko(int n) {
cout << "Nilai n: " << n << endl;
if (n == 0) {
cout << "Selesai" << endl;
}else
contohRekursiBerisiko(n - 2);
}

int main() {
int n = 7;
cout << "Memulai rekursi :" << endl;
contohRekursiBerisiko(n);
return 0;
}
