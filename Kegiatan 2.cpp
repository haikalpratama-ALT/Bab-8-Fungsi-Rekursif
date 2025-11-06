#include <iostream>
#include <fstream>

using namespace std;
//fungsi baca data
ifstream inputFile("input_data.txt");

int maksimumRekursif(int arr[], int n) {
if (n == 1) return arr[0];
int maxSubarray = maksimumRekursif(arr, n - 1);
return (arr[n - 1] > maxSubarray) ? arr[n - 1] : maxSubarray;
}

int main() {
int arr[] = <inputFile>
cin << inputFile;
int n = sizeof(arr) / sizeof(arr[0]);
arr[] >> inputFile;
cout << "Nilai maksimum dalam array: " << maksimumRekursif(arr, n) << endl;
return 0;
}
