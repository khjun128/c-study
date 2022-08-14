#include <iostream>

using namespace std;

int main() {

    //1

    cout << "My name is 고현준" << endl;

    //2

    unsigned int n_int = 2147483648;

    cout << n_int << endl;

    //3

    const float PI = 3.14;

    char ch1 = 65;
    char ch2 = int(ch1) + 1;

    cout << PI << endl;
    cout << ch1 << endl;
    cout << ch2 << endl;

    //4

    char ch;
    int X;
    unsigned short siX;
    unsigned iX;
    long liX;
    long long lliX;

    cout << "sizeof(ch):" << sizeof ch << endl;
    cout << "sizeof(X):" << sizeof X << endl;
    cout << "sizeof(siX):" << sizeof siX << endl;
    cout << "sizeof(iX):" << sizeof iX << endl;
    cout << "sizeof(liX):" << sizeof liX << endl;
    cout << "sizeof(lliX):" << sizeof lliX << endl;

    //5
    float F_degree;
    cin >> F_degree;
    cout << "Please enter Fahrenheit Value : " << F_degree << endl;
    float C_degree = 5/9 * ( F_degree - 32 );
    cout << "Celsius value is " << C_degree << endl;


}

