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
    this->vector = new OwnVector(5);
    EXPECT_EQ(size, vector->getSize());
    if(this->vector != nullptr){
        delete this->vector;        
    }    
}