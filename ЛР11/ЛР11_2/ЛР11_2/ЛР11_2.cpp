#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void zavd1_1() {
    int arr[] = { 3, 5, 2 ,5 ,1 ,10, 11 };
    int a;
    int moreThan = 0;

    cout << "Введіть число A" << endl;
    cin >> a;

    for (int i : arr) {
        if (i > a) {
            moreThan++;
        }
    }

    cout << "Кількість елементів більших за A: " << moreThan << endl;
}

void zavd1_2() {
    vector<int> arr = { 3, 5, 2 ,5 ,1 ,10, 11, 5, 5, 11, 11 };
  
    sort(arr.begin(), arr.end());
    arr.erase(unique(arr.begin(), arr.end()), arr.end());

    for (int i : arr) {
        cout << i << endl;
    }
}

int compare(const void* x1, const void* x2)   
{
    return -(*(int*)x1 - *(int*)x2);  
}

void zavd1_3() {
    int arr[7] = { 3, 0, 2 ,5 ,1 ,0, 11 };
    int multiply = 1; 
    int btwElSum = 0;
    bool isCounting = false;
    int arr2[15] = {-5, 7, 6, -53, -1, 0, 3, 5, 10, -10, -20, 10, 11, -17, 18};
    int arr2Size = sizeof(arr2) / sizeof(arr[0]);

    for (int i = 0; i < 7; i++) {
        if (i % 2 == 0) {
            multiply *= arr[i];
        }

        if (isCounting == true) {
            if (arr[i] == 0) {
                break;
            }

            btwElSum += arr[i];
        }

        if (arr[i] == 0) {
            isCounting = true;
        }       
    }

    qsort(arr2, arr2Size, sizeof(int), compare);

    for (int i : arr2) {
        cout << i << endl;
    }

    //cout << "Додаток парних номерів: " << multiply << endl;
    //cout << "Сума чисел між нулями: " << btwElSum << endl;
}

void zavd1_4() {
    vector<double> arr = { 4, 0.8, 1.2, -3, 0.6, 4, 1.1, 0, -50 };
    double oddNumSum = 0;
    double btwElSum = 0;
    bool isCounting = false;

    for (int i = 0; i < arr.size(); i++) {
        if (i % 2 > 0) {
            oddNumSum += arr[i];
        }

        if (isCounting == true) {
            if (arr[i] < 0) break;
            
            btwElSum += arr[i];
        }

        if (arr[i] < 0) isCounting = true;

        if (abs(arr[i]) < 1) arr.erase(arr.begin() + i);
    }

    for (double i : arr) {
        cout << i << endl;
    }

    cout << "Сума чисел з непарними індексами: " << oddNumSum << endl;
    cout << "Сума чисел між нулями: " << btwElSum << endl;
}

void zavd1_5() {
    vector<double> arr = { 4, -3, -8, 0.8, 1.2, 4, 4, 0.6, 0, 4, 1.1, 0, -50 };
    bool isCounting = false;
    double numbersBtwnSum = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (isCounting) {
            if (arr[i] > 0) {
                break;
            }

            numbersBtwnSum += arr[i];
        }

        if (arr[i] > 0) { 
            isCounting = true;
            continue; 
        }
    }

    for (int i = 0; i < arr.size(); i++) {
        arr[i] = abs(arr[i]);
    }

    auto it = *max_element(begin(arr), end(arr));
    cout << "Максимальне значення в масиві за модулем: " << it << endl;
    cout << "Сума чисел між додатніми числами" << numbersBtwnSum;

    int nonZero = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != 0) {
            arr[nonZero] = arr[i];
            nonZero++;
        }
    }
  
    for (int i = nonZero; i < arr.size(); i++)
        arr[i] = 0;
 
    cout << "\n Массив після переміщення всіх нулів";
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
}

void zavd1_6() {
    vector<double> arr = { 4, -3, -8, 0.8, 1.2, 4, 4, 0.6, 0,-50, 4, 1.1, 0 };
    int eqToZero = 0;
    double minElement = *min_element(arr.begin(), arr.end());
    bool isCounting = false;
    double afterMinSum = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 0) {
            eqToZero++;
        }

        if (arr[i] == minElement) {
            isCounting = true;
            continue;
        }

        if (isCounting) {
            afterMinSum += arr[i];
        }
    }

    cout << "Числа які дорівнюють нулю: " << eqToZero << endl;
    cout << "Сума чисел після мінімального елемента" << afterMinSum << endl;

    cout << "Сума чисел за зростянням модулів: " << endl;

    for (int i = 0; i < arr.size(); i++) {
        arr[i] = abs(arr[i]);
    }

    sort(arr.begin(), arr.end());

    for (int i : arr) {
        cout << i << endl;
    }
}

void zavd2() { //обчислити кількість пар сусідніх елементів з однаковими значеннями
    int a[200] = {-30, 30, -30, 20, 21, 20, 44, 44, 9, 0, -8, 22, 50, -50};
    int equals = 0;

    for (int i = 1; i < 14; i++) {
        if (a[i - 1] == a[i + 1]) {
            equals++;
        }
    }

    cout << "Кількість пар сусідніх елементів з однаковими значеннями: " << equals << endl;
}


int main(){
    setlocale(0, ".1251");

  /*  zavd1_1();
    zavd1_2();
    zavd1_3();
    zavd1_4();
    zavd1_5();
    zavd1_6();*/

    //zavd2();
}

