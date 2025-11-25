#include <iostream>
#include "sort_array.hpp"
using namespace std;

int main() {
    int intArray[] = { 5, 2, 9, 1, 3 };
    int intSize = 5;

    sortArray(intArray, intSize);

    cout << "Järjestetty int-taulukko: ";
    for (int i = 0; i < intSize; i++)
        cout << intArray[i] << " ";
    cout << endl;


    float floatArray[] = { 3.5, 1.2, 4.8, 0.9 };
    int floatSize = 4;

    sortArray(floatArray, floatSize);

    cout << "Järjestetty float-taulukko: ";
    for (int i = 0; i < floatSize; i++)
        cout << floatArray[i] << " ";
    cout << endl;

    return 0;
}
