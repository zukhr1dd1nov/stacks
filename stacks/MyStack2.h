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
            MyLinkedList* newHead = new MyLinkedList();
            newHead->setVal(val);
            newHead->setNext(head);
            head = newHead;
        }
    }
    void printStack() {
        MyLinkedList* curr = head;
        while (curr) {
            cout << head->getVal() << " ";
            curr = curr->getNext();
        }
    }
};

#endif //MYSTACK2_H
