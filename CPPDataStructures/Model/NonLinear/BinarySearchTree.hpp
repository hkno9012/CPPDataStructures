//
//  BinarySearchTree.hpp
//  BackupCPPDataStructures
//
//  Created by Knott, Hunter on 4/16/19.
//  Copyright © 2019 Knott, Hunter. All rights reserved.
//

#ifndef BinarySearchTree_hpp
#define BinarySearchTree_hpp

#include "Tree.hpp"
#include <iostream>

using namespace std;

template<class Type>
class BinarySearchTree : public Tree<Type>
{
protected:
    //MARK: Protected Methods
    int calculateSize(BinaryTreeNode<Type> * startNode);
    int calculateHeight(BinaryTreeNode<Type> * startNode);
    bool isBalanced(BinaryTreeNode<Type> * startNode);
    bool isComplete(BinaryTreeNode<Type> * startNode, int index, int size);
    
    void inOrderedTraversal(BinaryTreeNode<Type> * inStart);
    void preOrderTraversal(BinaryTreeNode<Type> * preStart);
    void postOrderTraversal(BinaryTreeNode<Type> * postStart);
    
    void destroyTree(BinaryTreeNode<Type> * node);
    
    BinaryTreeNode<Type> * getRightMostChild(BinaryTreeNode<Type> * current);
    BinaryTreeNode<Type> * getLeftMostChild(BinaryTreeNode<Type> * current);
    
    void removeNode(BinaryTreeNode<Type> * removeMe);
    
public:
    //MARK: Public Methods
    BinarySearchTree();
    ~BinarySearchTree();
    
    BinaryTreeNode<Type> * getRoot();
    
    void inOrderTraversal();
    void preOrderTraversal();
    void postOrderTraversal();
    void demoTraversalSteps(BinaryTreeNode<Type> * node);
    
    int getSize();
    int getHeight();
    bool isComplete();
    bool isBalanced();
    
    bool contains(Type value);
    void insert(Type itemToInsert);
    void remove(Type value);
    
    Type findMinimum();
    Type findMaximum();
};

//MARK: Information Methods
template<class Type>
int BinarySearchTree<Type> :: getHeight()
{
    return -1;
}

template<class Type>
int BinarySearchTree<Type> :: getSize()
{
    return -1;
}

template<class Type>
bool BinarySearchTree<Type> :: isComplete()
{
    return false;
}

template<class Type>
bool BinarySearchTree<Type> :: isBalanced()
{
    return false;
}

//MARK: Traversals
template<class Type>
void BinarySearchTree<Type> :: inOrderTraversal()
{
    
}

template<class Type>
void BinarySearchTree<Type> :: preOrderTraversal()
{
    
}

template<class Type>
void BinarySearchTree<Type> :: postOrderTraversal()
{
    
}

//MARK: Data Operation
template<class Type>
void BinarySearchTree<Type> :: insert(Type item)
{
    
}

template<class Type>
bool BinarySearchTree<Type> :: contains(Type value)
{
    return false;
}

template<class Type>
void BinarySearchTree<Type> :: remove(Type item)
{
    
}

#endif /* BinarySearchTree_hpp */
