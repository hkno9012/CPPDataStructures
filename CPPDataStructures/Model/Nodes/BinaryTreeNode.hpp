//
//  BinaryTreeNode.hpp
//  BackupCPPDataStructures
//
//  Created by Knott, Hunter on 4/12/19.
//  Copyright © 2019 Knott, Hunter. All rights reserved.
//

#ifndef BinaryTreeNode_hpp
#define BinaryTreeNode_hpp

#include "Node.hpp"

template<class Type>
class BinaryTreeNode : public Node<Type>
{
private:
    BinaryTreeNode<Type> * root;
    BinaryTreeNode<Type> * left;
    BinaryTreeNode<Type> * right;
    
public:
    BinaryTreeNode();
    BinaryTreeNode(Type data);
    
    void setRootNode(BinaryTreeNode<Type> * root);
    void setLeftChild(BinaryTreeNode<Type> * right);
    void setRightChild(BinaryTreeNode<Type> * left);
    
    BinaryTreeNode<Type> * getRootNode();
    BinaryTreeNode<Type> * getLeftChild();
    BinaryTreeNode<Type> * getRightChild();
};

/*Constructors*/
template<class Type>
BinaryTreeNode<Type> :: BinaryTreeNode() : Node<Type>()
{
    root = nullptr;
    left = nullptr;
    right = nullptr;
}

template<class Type>
BinaryTreeNode<Type> :: BinaryTreeNode(Type data) : Node<Type>(data)
{
    root = nullptr;
    left = nullptr;
    right = nullptr;
}

/*Mutators*/
template<class Type>
void BinaryTreeNode<Type> :: setRootNode(BinaryTreeNode<Type> * newRoot)
{
    root = newRoot;
}

template<class Type>
void BinaryTreeNode<Type> :: setLeftChild(BinaryTreeNode<Type> * left)
{
    this->left = left;
}

template<class Type>
void BinaryTreeNode<Type> :: setRightChild(BinaryTreeNode<Type> * right)
{
    this->right = right;
}

/*Accessors*/
template<class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRootNode()
{
    return this->root;
}

template<class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getLeftChild()
{
    return this->left;
}

template<class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRightChild()
{
    return this->right;
}

#endif /* BinaryTreeNode_hpp */
