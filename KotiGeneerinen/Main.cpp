#include <iostream>
#include "Stack.hpp"
using namespace std;

int main() {
    Stack<int> intStack(5);
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);

    cout << "Int-pino koko: " << intStack.size() << endl;
    cout << "Pop: " << intStack.pop() << endl;
    cout << "Pop: " << intStack.pop() << endl;

    Stack<string> stringStack(5);
    stringStack.push("eka");
    stringStack.push("toka");

    cout << "\nString-pino koko: " << stringStack.size() << endl;
    cout << "Pop: " << stringStack.pop() << endl;

    Stack<double> doubleStack(3);
    doubleStack.push(1.5);
    doubleStack.push(2.75);

    cout << "\nDouble-pino koko: " << doubleStack.size() << endl;
    cout << "Pop: " << doubleStack.pop() << endl;

    return 0;
}
