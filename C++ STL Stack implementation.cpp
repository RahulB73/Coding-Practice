// C++ STL Stack implementation

#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<string> Stack;
    string data;

    for (int i = 0; i < 5; i++) {
        cin >> data;
        Stack.push(data);
    }
    
    
    cout<<"Size of the stack = "<<Stack.size();
    cout<<"Stack is empty" <<Stack.empty();
    cout<<"Stack top element is " <<Stack.top();

    cout << "Stack contents:" << endl;
    while (!Stack.empty()) {
        cout << Stack.top() << endl;
        Stack.pop();
    }

    return 0;
}

