/* 
 * File:   BinaryTree.h
 * Author: rarce
 *
 * Created on March 27, 2012, 6:28 AM
 */

#ifndef BINARYTREE_H
#define	BINARYTREE_H
#include <vector>
using namespace std;

const bool RIGHT = true;
const bool LEFT  = false;

template <typename T>
class BinaryTree {
public:
    BinaryTree();
    BinaryTree(T emptyElem);
    BinaryTree(const BinaryTree& orig);
    void insertAt(T elemement, int root, bool child );

    void print();
    T operator[] (int pos) const;
    
    
    void traversePreOrder();
    void traversePreOrder(int root);

    void traverseInOrder();
    void traverseInOrder(int root);
    
    
private:
    vector <T> contents;
    T emptyElement;
};

#endif	/* BINARYTREE_H */

