#include <iostream>

using namespace std;

int gcd(int a, int b) {
    int c;
    while (b != 0) {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int main() {

    //1
    cout << endl;

    cout << "a = ";
    int x;
    cin >> x;
    cout << "b = ";
    int y;
    cin >> y;
    cout << "gcd(" << x << "," << y << ") = " << gcd(x,y) << endl;

    //2
    cout << endl;

    cout << "Enter Two Variables : ";
    int n1;
    cin >> n1;
    int n2;
    cin >> n2;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "5. Exit" << endl;
    cout << "Select Operation : ";
    int num;
    cin >> num;

    switch (num) {
        case 1:
            cout << "Result : " << n1 + n2 << endl;
            break;

        case 2:
            cout << "Result : " << n1 - n2 << endl;
            break;

        case 3:
            cout << "Result : " << n1 * n2 << endl;
            break;

        case 4:
            cout << "Result : " << n1 / n2 << endl;
            break;

        case 5:
            cout << "End the Program" << endl;
            break;

        default:
            cout << "Wrong Input" << endl;
            break;
    }

    //3
    cout << endl;

    int paul;
    while(paul != 0) {
        cout << "단 수 입력 : ";
        cin >> paul;
        if (1 <= paul && paul <= 9) {
            int i = 1;
            while (i < 10) {
                cout << paul << "*" << i << " = " << paul * i << endl;
                i++;
            }
        }
        else if (paul == 0){
            cout << "프로그램을 종료합니다." << endl;
        }
        else {
            cout << "다시 입력해주세요" << endl;
        }
    }

    //4
    cout << endl;

    int number;
    cin >> number;
    int tens;
    int units;
    tens = number % 10;
    units = number / 10;
    int Nnumber;
    int i=1;
    units = (tens + units) % 10;
    Nnumber = tens * 10 + units;

    do {
        units = (tens + units) % 10;
        tens = Nnumber % 10;
        Nnumber = tens * 10 + units;
        i++;
    } while (number != Nnumber);

    cout << i << endl;

    //5
    cout << endl;

    int n;
    cin >> n;
    int N1 = 0;
    int N2 = 1;
    int N3;
    int j = 1;
    if (n == 0) {
        cout << N1 << endl;
    }
    else if (n == 1) {
        cout << N2 << endl;
    }
    else {
        do {
            N3 = N1 + N2;
            N1 = N2;
            N2 = N3;
            j++;
        } while (n != j);
        cout << N3 << endl;
    }

    return 0;

    return 0;
}

