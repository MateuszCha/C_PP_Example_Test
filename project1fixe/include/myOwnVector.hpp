#pragma once

class OwnVector{
    public:
    OwnVector();
    OwnVector(int size);
    ~OwnVector();
    OwnVector(OwnVector&) = delete;
    OwnVector(OwnVector&&) = delete;
    int getSize();

    private:
    int *array;
    int size;
    int capacity;
};