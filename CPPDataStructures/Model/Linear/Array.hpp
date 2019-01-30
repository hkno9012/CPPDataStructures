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

#endif /* Array_hpp */
