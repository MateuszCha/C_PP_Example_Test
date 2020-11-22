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


    private:
    int *array;
    int size;
    int capacity;
    void allocateNewMemeory();
    void resize();
};