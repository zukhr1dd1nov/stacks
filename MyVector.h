//
// Created by Jamoliddin Zuxriddinov on 07/03/25.
//

#ifndef MYVECTOR_H
#define MYVECTOR_H

class MyVector {
private:
    int arr[100];
    int size;
public:
    MyVector() {
        for (int i = 0; i < 100; i++) {
            arr[i] = -99;
        }
        size = 0;
    }
    void add(int val) {
        if (size < 100) {
            arr[size] = val;
            size++;
        }
    }
    bool isEmpty() {
        return size == 0;
    }
    int get(int index) {
        return arr[index];
    }
    void removeLast() {
        if (size > 0) {
            arr[size] = -99;
            size--;
        }
    }
    int getSize() {
        return size;
    }
};

#endif //MYVECTOR_H