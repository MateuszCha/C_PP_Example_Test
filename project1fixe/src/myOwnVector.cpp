#include "myOwnVector.hpp"
#include <stdexcept>
#include <iostream>

OwnVector::OwnVector(){
    this->array = new int[10];
    this->capacity = 10;
    this->size = 0;
}
OwnVector::OwnVector(int capacity){
    this->array = new int[capacity];
    this->capacity = capacity;
    this->size = 0;
}
OwnVector::OwnVector(int capacity, int elemnt){ // do porpryw nie size ilosc 
    this->array = new int[capacity];
    this->capacity = capacity;
    this->size = capacity;
    for(int i = 0; i < capacity; i++){
        array[i] = elemnt;
    }
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
void OwnVector::add(int element) {
    if(array == nullptr) return;
    if(size<capacity){
       array[size] = element;
    }else{        
        this->allocateNewMemeory();
        array[size] = element;
    }  
    size++;
}
void OwnVector::add(int position, int element){
    if(array == nullptr) return;
    if(position < 0) position = 0;
    if(position >= size){
        add(element);
    } 
    else{
        array[position] = element;           
    }
}
int OwnVector::getElemnt(int position){    
    if(array != nullptr){
        if(position < 0) position = 0;
        if(position > size) position = size;
        return array[position];
    }
    throw std::out_of_range("vector was not create");
}
void OwnVector::allocateNewMemeory(){
    int *tabTemp2;
     for(int i = 0 ; i < size; i++){
        std::cout<<array[i]<< " ";
    }
    std::cout<<std::endl;
    try{
        tabTemp2 = new int[capacity * 2];
        capacity *= 2;
        for(int i = 0 ; i < size; i++)
        {
            tabTemp2[i] = array[i];
        }
        delete[] array; 
        array = tabTemp2;
        tabTemp2 = nullptr;
    }catch(...){   
        std::cout<<"Tush B cyka blyat!!!!"<<std::endl; 

    }    
}
int OwnVector::replace(int position, int element){
    int tempValue;
    if(array == nullptr) return 0;
    if(position < 0 || position >= size) throw std::out_of_range("out of index");
    tempValue = array[position];
    array[position] = element;
    return tempValue;
}
int OwnVector::remove(int position){
    
    if(array == nullptr)throw std::invalid_argument("vector was not create");
    if(position < 0 || position >= size) throw std::out_of_range("out of range/index");
    int value = array[position];
    for(int i = position + 1; i < size; i++){
        array[i - 1] = array[i];
    }
    size--;   
    return value;
}
/*
 for(int i = 0 ; i < capacity; i++){
        std::cout<<array[i]<< " ";    
    }
    std::cout<<size << " value :: " << value << " " <<std::endl;
    */