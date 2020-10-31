#include "myOwnVector.hpp"
#include <stdexcept>

OwnVector::OwnVector(){
    this->array = new int[10];
    this->capacity = 10;
    this->size = 0;
}
OwnVector::OwnVector(int size){
    this->array = new int[size];
    this->capacity = size;
    this->size = size;
}
OwnVector::OwnVector(int size, int capacity){
    this->array = new int[capacity];
    this->capacity = capacity;
    this->size = size;
}
OwnVector::~OwnVector(){
    if(array != nullptr){
        delete[] array;
    }
}
int OwnVector::getSize(){
    if(array != nullptr) return size;
    return 0;
}
int OwnVector::getCapacity(){
    if(array != nullptr) return capacity;
    return 0;
}
void OwnVector::add(int elemnt) {
    if(array == nullptr) return;
    if(size<capacity){
        size++;
       array[size] = elemnt;
    }  
}
void OwnVector::add(int position, int element){
    if(array == nullptr) return;
    if(position < 0) position = 0;
    if(position > size) position = size;
    array[position] = element;

}
int OwnVector::getElemnt(int position){    
    if(array != nullptr){
        if(position < 0) position = 0;
        if(position > size) position = size;
        return array[position];
    }
    throw std::out_of_range("vector was not create");
}