#include "gtest/gtest.h"
#include "myOwnVector.hpp"

class OwnVectorTest : public ::testing::Test
{
    
    protected:

    OwnVectorTest() {
    };

    ~OwnVectorTest() override {
       /* if(this->vector != nullptr){
            delete this->vector;        
        }
        */
    };


    void SetUp() override {};
    void TearDown() override {};
    protected: 
    OwnVector *vector;
};

TEST_F(OwnVectorTest, DefultConstrutorownVector_createPRoperly_returnObj)
{

    this->vector = new OwnVector();
    EXPECT_NE(nullptr, vector);
    if(this->vector != nullptr){
        delete this->vector;        
    }
}
TEST_F(OwnVectorTest, ConstrutorOwnVectorWithSizeparma_createPRoperly_returnSizeOfVector)
{
    int size  = 5;
    this->vector = new OwnVector(size);
    EXPECT_EQ(size, vector->getSize());
    if(this->vector != nullptr){
        delete this->vector;        
    }    
}
TEST_F(OwnVectorTest, ConstrutorOwnVectorWithParametersSizeAndCapacity_createPRoperly_returnSizeAndCapacityOfVector)
{
    int size  = 5;
    int capacity = 10;
    this->vector = new OwnVector(size,capacity);
    EXPECT_EQ(size, vector->getSize());
    EXPECT_EQ(capacity,vector->getCapacity());
    if(this->vector != nullptr){
        delete this->vector;        
    }    
}
TEST_F(OwnVectorTest, ownVectorAndAddFewElemntToArray_AddProperlyAndIncrestSize_returnIncremnetedSize)
{
    int tab[] = {1,2,3,4,5,6};
    int size = 5;
    this->vector = new OwnVector();
    if(vector == nullptr) return; 

    for(int i = 0 ; i<size;i++){
        this->vector->add(tab[i]);
    }
    EXPECT_EQ(size, vector->getSize());
    if(this->vector != nullptr){
        delete this->vector;        
    }  
}
TEST_F(OwnVectorTest, ownVectorAndAddElemntOnPositionToArray_AddProperlyAndIncrestSize_returnIncremnetedSize)
{
    int position = 7; 
    int vlaue = 13; 
    this->vector = new OwnVector(10);
    if(vector == nullptr) return; 
    vector->add(7,13);
    EXPECT_EQ(vlaue, vector->getElemnt(position));
    if(this->vector != nullptr){
        delete this->vector;        
    }  
}