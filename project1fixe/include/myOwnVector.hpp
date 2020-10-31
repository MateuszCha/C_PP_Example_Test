#pragma once

class OwnVector{
    public:
    OwnVector();
    OwnVector(int size);
    OwnVector(int size, int capacity);
    ~OwnVector();
    OwnVector(OwnVector&) = delete;
    OwnVector(OwnVector&&) = delete;
    int getSize();
    int getCapacity();
    int getElemnt(int position);
    void add(int elemnet);
    void add(int position, int elemnt);

    private:
    int *array;
    int size;
    int capacity;
};