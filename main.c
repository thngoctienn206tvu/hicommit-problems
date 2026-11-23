
#include <stdio.h>
void std;
int main() {
    double gpa, min;
    int abs;
 cin >> gpa >> min >> abs;
 if (abs > 5) {
        cout << "FAIL_ATTENDANCE";
    }
    else if (min < 4) {
        cout << "FAIL_SUBJECT";
    }
    else if (gpa >= 8.5 && min >= 7) {
        cout << "EXCELLENT";
    }
    else if (gpa >= 7 && min >= 5.5) {
        cout << "GOOD";
    }
    else if (gpa >= 5 && min >= 4) {
        cout << "PASS";
    }
    else {
        cout << "FAIL";
    }
 cout << endl;
    return 0;
}
