//
//  FileController.hpp
//  CPPDataStructures
//
//  Created by Knott, Hunter on 2/5/19.
//  Copyright © 2019 Knott, Hunter. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include "../Resources/CrimeData.hpp"
#include "../Resources/Music.hpp"
#include "../Model/Linear/Array.hpp"
#include "../Model/Linear/LinkedList.hpp"
//#include "../Model/NonLinear/BinarySearchTree.hpp"
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <sstream>
#include <stdio.h>

using namespace std;

class FileController
{
public:
    //Built in STL data structures
    static vector<CrimeData> readCrimeDataToVector(string filename);
    static vector<Music> musicDataToVector(string filename);
    //OOP Array
    static Array<CrimeData> crimeDataToArray(string filename);
    static Array<Music> musicDataToArray(string filename);
    //BST
    static LinkedList<CrimeData> readDataToList(string filename);
    static LinkedList<Music> musicDataToList(string filename);
    
    static stack<CrimeData> readCrimeDataToStack(string filename);
    static stack<Music> musicDataToStack(string filename);
    
    static queue<CrimeData> readCrimeDataToQueue(string filename);
    static queue<Music> musicDataToQueue(string filename);
};

#endif /* FileController_hpp */
