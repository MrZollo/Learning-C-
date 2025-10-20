#include <iostream>
#include <string>
using namespace std;

struct kereta {
    string jenis;
    double harga;
} obj;

void papar(string, double);

int main() {
    obj.jenis = "Myvi 1.3";
    obj.harga = 57000.55;
    papar(obj.jenis, obj.harga);
    return 0;
}

void papar(string j, double h) {
    cout << j << endl;
    cout << h << endl;
}
