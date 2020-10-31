#include "myOwnVector.hpp"

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
OwnVector::~OwnVector(){
    if(array != nullptr){
        delete[] array;
    }
}
int OwnVector::getSize(){
    if(array != nullptr) return size;
    return 0;
}