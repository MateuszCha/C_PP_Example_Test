#pragma once

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
    void add(int elemnet);
    void add(int position, int elemnt);

    private:
    int *array;
    int size;
    int capacity;
    void allocateNewMemeory();
};