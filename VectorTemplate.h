//
// Created by ismaelyoussef on 3/21/2022.
//

#ifndef TEMPLATEVECTOR_VECTORTEMPLATE_H
#define TEMPLATEVECTOR_VECTORTEMPLATE_H

#define DEFAULT_SIZE 16
#include <cmath>
#include <iostream>

using namespace std;

template<class T>
class VectorTemplate {
private:
    T* data;
    int vector_size;
    int vector_capacity;
    void resize();
public:
    T& at(int);
    T& front();
    T& back();
    void insert(int, T);
    void push_back(T);
    void pop_back();
    int size() const;
    int capacity() const;
    void print();
    explicit VectorTemplate(int);
    VectorTemplate();
    ~VectorTemplate();
    T & operator [](int);
};

template<class T>
void VectorTemplate<T>::resize() {

    T* resize = new T[vector_capacity * 2];
    for(int i = 0; i < vector_size; i++)
        resize[i] = data[i];

    vector_capacity = vector_capacity * 2;
    delete[] data;
    data = resize;



}

template<class T>
T &VectorTemplate<T>::at(int at) {
    if(at>vector_size){
        exit(1);
    }
    return data[at - 1];
}

template<class T>
T &VectorTemplate<T>::front() {
    return data[0];
}

template<class T>
T &VectorTemplate<T>::back() {
    return data[vector_size - 1];
}

template<class T>
void VectorTemplate<T>::insert(int loc, T info) {
    if(vector_size == vector_capacity){
        resize();
    }
    for(int i = vector_size - 1; i >= loc - 1; i--){
        data[i+1] = data[i];
    }
    data[loc - 1] = info;
    vector_size++;
}

template<class T>
void VectorTemplate<T>::push_back(T num) {
    vector_size++;
    if(vector_size > vector_capacity) resize();
    data[vector_size - 1] = num;

}

template<class T>
void VectorTemplate<T>::pop_back() {
    //data[vector_size-1] = NULL;
    if(vector_size > 0)
    vector_size--;
}

template<class T>
int VectorTemplate<T>::size() const {
    return vector_size;
}

template<class T>
int VectorTemplate<T>::capacity() const {
    return vector_capacity;
}

template<class T>
void VectorTemplate<T>::print() {
    cout << "elements(" << vector_size << "): ";
    for(int i = 0; i < vector_size; i++){
        cout << data[i] << " ";
    }
    cout << endl;
}

template<class T>
VectorTemplate<T>::VectorTemplate(int cap) {
    if (cap <= DEFAULT_SIZE) {
        data = new T[DEFAULT_SIZE];
        vector_capacity = DEFAULT_SIZE;
        vector_size = 0;
    }
    else{
        int power = int(sqrt(cap));
        int size ;
        if(power % 4 == 0){
            size = int(pow(2, double(power)));
            data = new T[size];
            vector_capacity = size;
            vector_size = 0;
        }
        else{
            size = int(pow(2, double(power + 1 )));
            data = new T[size];
            vector_capacity = size;
            vector_size = 0;
        }
    }
}

template<class T>
VectorTemplate<T>::VectorTemplate() {
    data = new int[DEFAULT_SIZE];
    vector_capacity = DEFAULT_SIZE;
    vector_size = 0;
}

template<class T>
VectorTemplate<T>::~VectorTemplate() {

    delete[] data;
    data = nullptr;
}

template<class T>
T &VectorTemplate<T>::operator[](int i) {
    if(i >= vector_size){
        exit(1);
    }
    return at(i +1);
}

#endif //TEMPLATEVECTOR_VECTORTEMPLATE_H
