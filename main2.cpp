#include <iostream>

using namespace std;

int n;

void swap(int* x, int* y){
    n = *x;
    *x = *y;
    *y = n;
}

int main() {

    //1

    int A[10] = {1,2,3,4,5,6,7,8,9,10};

    cout << A[5] << endl;

    //2

    char str1[10] = {'H','I','E','A','Z','L','T','L','U','O'};

    cout << '"' << str1[0] << str1[2] <<str1[5] << str1[5] << str1[9] << '"' << endl;

    //3

    char str[6] = "Hello";
    char* nstr = new char[6];

    nstr[0] = str[0];
    nstr[1] = str[1];
    nstr[2] = str[2];
    nstr[3] = str[3];
    nstr[4] = str[4];
    nstr[5] = str[5];

    nstr = nstr - 1;

    cout << nstr[1] << nstr[2] << nstr[3] << nstr[4] << nstr[5] << endl;

    nstr = nstr + 1;
    delete[] nstr;

    //4

    int a = 10, b = 20;
    cout << a << ", " << b << endl;
    swap(a,b);
    cout << a << ", " << b << endl;

    return 0;

}