//
// Created by Jamoliddin Zuxriddinov on 07/03/25.
//

#ifndef MYSTACK2_H
#define MYSTACK2_H

#include <iostream>
#include "MyLinkedList.h"
using namespace std;

class MyStack2 {
private:
    MyLinkedList* head;
public:
    MyStack2() {
        head = new MyLinkedList();
    }
    bool isEmpty() {
        return head->getVal() == -99;
    }
    void push(int val) {
        if (isEmpty()) {
            head->setVal(val);
        } else {
            MyLinkedList* oldHead = new MyLinkedList(head->getVal());
            oldHead->setNext(head->getNext());
            delete head;
            MyLinkedList* newHead = new MyLinkedList(val);
            newHead->setNext(oldHead);
            head = newHead;
        }
    }
    int top() {
        return head->getVal();
    }
    void pop() {
        if (isEmpty()) {
            return;
        }
        MyLinkedList* newHead = head->getNext();
        delete head;
        head = newHead;
    }
    void printStack() {
        MyLinkedList* next = head;
        while (next) {
            cout << next->getVal() << " ";
            next = next->getNext();
        }
        cout << endl;
    }
};

#endif //MYSTACK2_H