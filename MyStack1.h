//
// Created by Jamoliddin Zuxriddinov on 07/03/25.
//

#ifndef MYSTACK1_H
#define MYSTACK1_H

#include <iostream>

#include <iostream>
#include "MyVector.h"
using namespace std;

class MyStack1 {
private:
    MyVector data;
public:
    MyStack1() {
        data = MyVector();
    }
    void push(int value) {
        data.add(value);
    }
    void pop() {
        data.removeLast();
    }
    int top() {
        data.get(data.getSize());
    }
    bool isEmpty() {
        return data.isEmpty();
    }
    void printStack() {
        for (int i = data.getSize() - 1; i >= 0; i--) {
            cout << data.get(i) << " ";
        }
        cout << endl;
    }
};

#endif //MYSTACK1_H