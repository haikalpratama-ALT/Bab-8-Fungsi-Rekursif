#include <iostream>
#include <fstream>

using namespace std;
//fungsi baca data

int maksimumRekursif(int arr[], int n) {
if (n == 1) return arr[0];
int maxSubarray = maksimumRekursif(arr, n - 1);
return (arr[n - 1] > maxSubarray) ? arr[n - 1] : maxSubarray;
}

int main() {
    ifstream input("input_data.txt"); 
    if (!input) {
        cout << "File tidak dapat dibuka!" << endl;
        return 1;
    }
    int arr[100];
    int n = 0;
    while (input >> arr[n]) {
        n++;
    }
    input.close(); 
    cout << "Data yang dibaca: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Nilai maksimum dalam array: " << maksimumRekursif(arr, n) << endl;
    return 0;
}
