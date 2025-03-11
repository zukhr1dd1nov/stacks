//
// Created by Jamoliddin Zuxriddinov on 07/03/25.
//

#ifndef MYLINKEDLIST_H
#define MYLINKEDLIST_H

class MyLinkedList {
    private:
    int val;
    MyLinkedList* next;
    public:
    MyLinkedList() {
        next = nullptr;
        val = -99;
    }
    MyLinkedList(int val) {
        next = nullptr;
        this->val = val;
    }
    int getVal() {
        return val;
    }
    MyLinkedList* getNext() {
        return next;
    }
    void setVal(int val) {
        this->val = val;
    }
    void setNext(MyLinkedList* next) {
        this->next = next;
    }
};

#endif //MYLINKEDLIST_H
