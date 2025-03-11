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
        arr[size] = val;
        size++;
    }
    int get(int index) {
        return arr[index];
    }
    void removeLast() {
        arr[size] = -99;
        size--;
    }
    int getSize() {
        return size;
    }
};

#endif //MYVECTOR_H
