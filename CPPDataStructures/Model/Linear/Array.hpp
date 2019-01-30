//
//  Array.hpp
//  CPPDataStructures
//
//  Created by Knott, Hunter on 1/30/19.
//  Copyright © 2019 Knott, Hunter. All rights reserved.
//

#ifndef Array_hpp
#define Array_hpp

#include <assert.h>//Used for validating user supplied data
#include <iostream>//Used for tracing and debug statements

using namespace std;

template <class Type>
class Array
{
private:
    Type * internalArray;//Example of a pointer
    int size;
public:
    //Constructor
    Array<Type>(int size);
    
    //Copy Constructor
    Array<Type>(const Array<Type> & toCopy);
    //Destructor
    ~Array<Type>();
    
    //Operators
    Array<Type> & operator = (const Array<Type> & toReplace);
    Type& operator [] (int index);
    Type operator [] (int index) const;
    
    //Methods
    int getSize() const;
    Type getFromIndex(int index);
    void setAtIndex(int index, Type data);
}

//Constructor for Array class
template <class Type>
Array<Type> :: Array(int size)
{
    assert(size > 0);
    this -> size = size;
    
    internalArray = new Type[size];
}

//Copy constructor
template <class Type>
Array<Type> :: Array(const Array<Type> & toCopy)
{
    this -> size = toCopy.getSize();
    
    //Build Data Structures
    internalArray = new Type[size];
    
    for(int index = 0; index < size; index++)
    {
        internalArray[index] = toCopy[index];
    }
}

//Destructor
template <class Type>
Array<Type> :: ~Array()//Destructors always have ~, and they're the only thing with ~
{
    delete [] internalArray;
}

//Operator Overloads
template <class Type>
Array<Type> & Array<Type> :: operator = (const Array<Type> & toAssign)
{
    if(&toAssign != this)
    {
        if(size != toAssign.getSize())
        {
            delete [] internalArray;
            size = toAssign.getSize();
            internalArray = new Type [size];
        }
        
        for(int index = 0; index < size; index++)
        {
            internalArray[index] = toAssign[index];
        }
    }
    return *this;
}

template <class Type>
Type & Array<Type> :: operator [] (int index)
{
    assert(index >= 0 && index < size);
    return internalArray[index];
}

template <class Type>
Type Array<Type> :: operator [] (int index) const
{
    assert(index >= 0 && index < size);
    return internalArray[index];
}

#endif /* Array_hpp */
