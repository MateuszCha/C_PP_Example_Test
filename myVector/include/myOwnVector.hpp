#pragma once

#include <string>

class OwnVector{
    public:
    OwnVector();
    OwnVector(int capacity);
    OwnVector(int capacity, int element);
    ~OwnVector();
    OwnVector(OwnVector&) = delete;
    OwnVector(OwnVector&&) = delete;
    int getSize();
    int getCapacity();
    int getElemnt(int position);
    int replace(int position, int element);
    int remove(int position);
    void add(int elemnet);
    void add(int position, int elemnt);
    std::string toString();
    int* getWskOnlyToTest(int index){
        if(array == nullptr || index > size )return nullptr;
        return &array[index];
    };
    

    class Iterator {
        public:
        void operator = (int *wsk);
        Iterator(int *wsk, int * size);

        int* next();
        int* begin();
        int* end();

        private:
        int *firstElement;
        int *wsk;
        int *size;
    };

    Iterator* iterator(){
        return this->iter;
    };

    private:
    int *array;
    int size;
    int capacity;
    void allocateNewMemeory();
    void resize();
    Iterator *iter;
};