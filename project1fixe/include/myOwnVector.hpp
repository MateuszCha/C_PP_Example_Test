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

    private:
    int *array;
    int size;
    int capacity;
};