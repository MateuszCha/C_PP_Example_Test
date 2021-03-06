#include "gtest/gtest.h"
#include "myOwnVector.hpp"
#include <vector>

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

    static void SetUpTestSuite() {};
    static void TearDownTestSuite() {}; 
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
TEST_F(OwnVectorTest, ConstrutorOwnVectorWithparmaCapacity_createPRoperly_returnSizeOfVector)
{
    int capacity  = 5;
    this->vector = new OwnVector(capacity);
    EXPECT_EQ(capacity, vector->getCapacity());
    if(this->vector != nullptr){
        delete this->vector;        
    }    
}
TEST_F(OwnVectorTest, ConstrutorOwnVectorWithParametersCapacityAndElemnt_createAndFillArrayOfElemnt_returnElemntAndCapacityOfVector)
{
    int element  = 5;
    int capacity = 10;
    this->vector = new OwnVector(capacity,element);
    EXPECT_EQ(element, vector->getElemnt(capacity-1));
    EXPECT_EQ(capacity,vector->getCapacity());
    if(this->vector != nullptr){
        delete this->vector;        
    }    
}
TEST_F(OwnVectorTest, ownVectorAndAddFewElemntToArray_AddProperlyAndIncrestSize_returnIncremnetedSize)
{
    int tab[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int size = 15;
    this->vector = new OwnVector();

    if(vector == nullptr) return; 
    for(int i = 0 ; i<size;i++){
        this->vector->add(tab[i]);
    }   
    EXPECT_EQ(size, vector->getSize());
    EXPECT_EQ(size,vector->getElemnt(size-1));
    if(this->vector != nullptr){
        delete this->vector;        
    }  
}
TEST_F(OwnVectorTest, ownVectorAndAddElemntOnPositionToArray_AddProperlyAndIncrestSize_returnIncremnetedSize)
{
    int position = 7; 
    int vlaue = 13; 
    int newValue = 15;
    this->vector = new OwnVector(position,vlaue);   
    vector->add(position,newValue);   
    EXPECT_EQ(newValue, vector->getElemnt(position));
    if(this->vector != nullptr){
        delete this->vector;        
    }  
}

TEST_F(OwnVectorTest, ownVectorReplaceElemntOnPositionInArray_ReplaceElemntAndgetEarliElement_returnReplacedElemn)
{
    int Fillvalue = 7; 
    int replaceElemnt = 11;
    int capacity = 13; 
    int position = 10;
    this->vector = new OwnVector(capacity,Fillvalue);
    if(vector == nullptr) return; 
    EXPECT_EQ(Fillvalue, vector->replace(position,replaceElemnt));
    EXPECT_EQ(replaceElemnt, vector->getElemnt(position));
    if(this->vector != nullptr){
        delete this->vector;        
    }  
}
TEST_F(OwnVectorTest, ownVectorRemoveElemntOnPositionInArray_RemoveElemntAndreturnThem_returnRemovedElement)
{

    int Fillvalue = 7; 
    int replaceElemnt = 11;
    int capacity = 12; 
    int position = 0;
    int size;
    this->vector = new OwnVector(capacity,Fillvalue);

    if(vector == nullptr) return; 
    size = vector->getSize();
    vector->replace(position,replaceElemnt);    
    EXPECT_EQ(replaceElemnt, vector->getElemnt(position));
    EXPECT_EQ(replaceElemnt, vector->remove(position));
        
    EXPECT_EQ(size-1, vector->getSize());
    EXPECT_NE(replaceElemnt, vector->getElemnt(position - 1));
    EXPECT_NE(replaceElemnt, vector->getElemnt(position + 1));    
    for(int i = 0 ; i < 6; i++){
        vector->remove(0);
    }
    std::cout<<std::endl;
    for(int i = 0 ; i < vector->getCapacity(); i++){
        std::cout<<vector->getElemnt(i)<< " ";
    }
    std::cout<<std::endl;
    std::cout<<vector->getCapacity()<<" "<< vector->getSize() <<std::endl;
    if(this->vector != nullptr){
        delete this->vector;        
    }  
}
TEST_F(OwnVectorTest, OwnVectorGetIterratorInnerClass_GetIterator_returnFirstAndLastPointer){

    int Fillvalue = 7; 
    int capacity = 12; 
    this->vector = new OwnVector(capacity,Fillvalue);
    OwnVector::Iterator *iterator;
    iterator = vector->iterator();
    EXPECT_EQ(vector->getWskOnlyToTest(0),iterator->begin());
    EXPECT_EQ(vector->getWskOnlyToTest(12),iterator->end());    
    iterator->next();
    iterator->next();
    EXPECT_EQ(vector->getWskOnlyToTest(3),iterator->next());
    EXPECT_EQ(vector->getWskOnlyToTest(2),iterator->previous());    
}
TEST_F(OwnVectorTest, OwnVectorGetIterratorInnerClass_GetIteratorWhenRelocateMemory_returnFirstAndLastPointer){

    int Fillvalue = 7; 
    int capacity = 12; 
    this->vector = new OwnVector(capacity,Fillvalue); 
    OwnVector::Iterator *iterator;
    iterator = vector->iterator();
    EXPECT_EQ(vector->getWskOnlyToTest(1),iterator->begin());
    EXPECT_EQ(vector->getWskOnlyToTest(11),iterator->end());  
    EXPECT_EQ(vector->getWskOnlyToTest(2),iterator->next());
    EXPECT_EQ(vector->getWskOnlyToTest(1),iterator->previous()); 

    vector->add(10);    
    iterator = vector->iterator();

    EXPECT_EQ(vector->getWskOnlyToTest(0),iterator->begin());
    EXPECT_EQ(vector->getWskOnlyToTest(12),iterator->end());    
    iterator->next();
    iterator->next();
    EXPECT_EQ(vector->getWskOnlyToTest(3),iterator->next());
    EXPECT_EQ(vector->getWskOnlyToTest(2),iterator->previous());    
}

  /*if(vector == nullptr) return; 
      for(int i = 0 ; i < capacity; i++){
        std::cout<<array[i]<< " ";
    }

    std::cout<<vector->getCapacity()<<" "<< vector->getSize() <<std::endl;
     */
   /*   for(int i = 0 ; i < vector->getCapacity(); i++){
        std::cout<<vector->getElemnt(i)<< " ";
    }
    std::cout<<vector->getCapacity()<<" "<< vector->getSize() <<std::endl;
    */

