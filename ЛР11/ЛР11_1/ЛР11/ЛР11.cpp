
#define _USE_MATH_DEFINES
#include <iostream>
#include <vector>
#include <string>

using namespace std;

//10 ВАРІАНТ

void lessonsUsingSwitch() { //Завд. 1 switch
    int day;

    cout << "Введiть номер дня тижня:" << endl;
    cin >> day;

    switch (day) {
        case 1: //понеділок
            cout
                << "1: ІнфТехПрофДіял, 8:20 - 9:40" << endl
                << "2: ІнфТехПрофДіял, 10:05 - 11:25" << endl
                << "3: Правознавство, 12:05 - 13:25" << endl
                << "4: Правознавство, 13:50 - 15:10" << endl;
            break;
        case 2: //вівторок
            cout
                << "1: Філософ, 8:20 - 9:40" << endl
                << "2: Філософ, 10:05 - 11:25" << endl;
            break;
        case 3: //середа
            cout
                << "Немає пар" << endl;
            break; 
        case 4: //четвер
            cout
                << "1: КомпДискрМат, 8:20 - 9:40" << endl
                << "2: КомпДискрМат, 10:05 - 11:25" << endl
                << "3: ІнфТехПрофДіял, 12:05 - 13:25" << endl
                << "4: ІнфТехПрофДіял, 13:50 - 15:10" << endl;
            break;
        case 5: //п'ятниця
            cout
                << "1: ІнМов, 8:20 - 9:40" << endl
                << "2: ІнМов, 10:05 - 11:25" << endl
                << "3: КомпДискрМат, 12:05 - 13:25" << endl
                << "4: КомпДискрМат, 13:50 - 15:10" << endl;
            break;
        case 6: //субота
            cout
                << "Немає пар" << endl;
            break;
        case 7: //неділя
            cout
                << "Немає пар" << endl;
            break;
    }
} 

void lessonsUsingIf() { //завд 1 if
    int day;

    cout << "Введiть номер дня тижня:" << endl;
    cin >> day;

   
    if (day == 1) { //понеділок
        cout
            << "1: ІнфТехПрофДіял, 8:20 - 9:40" << endl
            << "2: ІнфТехПрофДіял, 10:05 - 11:25" << endl
            << "3: Правознавство, 12:05 - 13:25" << endl
            << "4: Правознавство, 13:50 - 15:10" << endl;
    }
    else if (day == 2) {
        cout
            << "1: Філософ, 8:20 - 9:40" << endl
            << "2: Філософ, 10:05 - 11:25" << endl;
    }
    else if (day == 3) {
        cout
            << "Немає пар" << endl;
    }
    else if (day == 4) {
        cout
            << "1: КомпДискрМат, 8:20 - 9:40" << endl
            << "2: КомпДискрМат, 10:05 - 11:25" << endl
            << "3: ІнфТехПрофДіял, 12:05 - 13:25" << endl
            << "4: ІнфТехПрофДіял, 13:50 - 15:10" << endl;
    }
    else if (day == 5) {
        cout
            << "1: ІнМов, 8:20 - 9:40" << endl
            << "2: ІнМов, 10:05 - 11:25" << endl
            << "3: КомпДискрМат, 12:05 - 13:25" << endl
            << "4: КомпДискрМат, 13:50 - 15:10" << endl;
    }
    else if (day == 6) {
        cout
            << "Немає пар" << endl;
    }
    else if (day == 7) {
        cout
            << "Немає пар" << endl;
    }
}

void zavd3_1() { //завд 3, 1
    int eq = 0; //кількість пар рівних 
    int a[] = { 5, 3, 5, 1, 7, 10, 7, 1, 3, 4, 3 };

    for (int i = 0; i < sizeof(a) / sizeof(int); i++){
        
        if (i >= 1 && a[i - 1] == a[i + 1]) {
            eq++;
        }
    }

    cout << eq;
}

void zavd3_2(int maxSpeed) { //завд 3, 2 
    int violationsCount = 0;
    int vahicles_speed[5] = { 30, 50, 60, 70, 80 };

  
    for (int vahicle : vahicles_speed) {
        if (vahicle > maxSpeed) {
            violationsCount++;
        }
    }

   cout << violationsCount;
}

short k = 99;
short fifty = 0;
short twenty = 0;
short ten = 0;
short five = 0;
short two = 0;
short one = 0;

void zavd3_3() {
    if (k >= 50) { //від 50
        k -= 50;
        fifty++;
        zavd3_3();
    }
    if (k < 50 && k >= 20) { //від 20
        k -= 20;
        twenty++;
        zavd3_3();
    }
    if (k < 20 && k >= 10) { //від 10
        k -= 10;
        ten++;
        zavd3_3();
    }
    if (k < 10 && k >= 5) { //від 5
        k -= 5;
        five++;
        zavd3_3();
    }
    if (k < 5 && k >= 2) { //від 2
        k -= 2;
        two++;
        zavd3_3();
    }
    if (k == 1) { //від 1
        k -= 1;
        one++;
        zavd3_3();
    }
}


//функція для завдання 4
double zavd4_func(double x) {
   return 4 * sin(2 * pow(x, 2) + cos(x));
}


void zavd4() { //завд 4
    double a = 0;
    double b = 0;
    double i = 10;

    for (int k = 0; k < i + 5; k++) {
        a += zavd4_func(k + 5);
    }

    for (int k = 0; k < i + 8; k++) {
        b += zavd4_func(k + 6);
    }

    double z = a * b - M_PI;

    cout << "i: \t" << i << endl;
    cout << "a: \t" << a << endl;
    cout << "b: \t" << b << endl;
    cout << "z: \t" << z << endl;
}

int main()
{
    setlocale(0, ".1251");

    //lessonsUsingSwitch();
    //lessonsUsingIf();
    //zavd3_1();
    //zavd3_2(50);
    //zavd3_3();

    //cout
    //    << "П'ятдесят: " << fifty << endl
    //    << "Двадцять: " << twenty << endl
    //    << "Десять: " << ten << endl
    //    << "П'ять: " << five << endl
    //    << "Два: " << two << endl
    //    << "Один: " << one << endl;

    //zavd4();
}