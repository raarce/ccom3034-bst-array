/* 
 * File:   BinaryTree.cpp
 * Author: rarce
 * 
 * Created on March 27, 2012, 6:28 AM
 */

#include "BinaryTree.h"
#include <iostream>

template <typename T>
BinaryTree<T>::BinaryTree() {
    contents.resize(128);
}

template <typename T>
BinaryTree<T>::BinaryTree(T e) {
    emptyElement = e;
    contents.resize(128, e);
}

template <typename T>
BinaryTree<T>::BinaryTree(const BinaryTree& orig) {
}


template <typename T>
void BinaryTree<T>::insertAt(T element, int root = 0, bool child = LEFT ) {
    if (root == 0) { 
        contents[1] = element;
        cout << "inserting " << element << " as Root\n";
        return;
    }
    else {
        if (contents[root] != emptyElement) {
            cout << "inserting " << element << " as " 
                 << (child ? "right" : "left")  <<  " child of " 
                 << contents[root] << endl;
            contents[root*2 + (child ? 1 : 0)] = element;
        }
    }
}



template <typename T>
void BinaryTree<T>::print(){
    for (int i =0; i < contents.size(); i++) {
        cout << (*this)[i] << " ";
    }
    cout << endl;
}

template <typename T>
T BinaryTree<T>::operator[] (int pos) const {
    return contents[pos];
}


template <typename T>
void BinaryTree<T>::traversePreOrder(){
    traversePreOrder(1);
    cout << endl;
    return;
}


template <typename T>
void BinaryTree<T>::traversePreOrder(int root){
    if (contents[root] == emptyElement) return;
    cout << contents[root] << " ";
    traversePreOrder(2*root);
    traversePreOrder(2*root+1);
    return;
}

template <typename T>
void BinaryTree<T>::traverseInOrder(){
    traverseInOrder(1);
    cout << endl;
    return;
}

template <typename T>
void BinaryTree<T>::traverseInOrder(int root){
    if (contents[root] == emptyElement) return;
    traversePreOrder(2*root);
    cout << contents[root] << " ";
    traversePreOrder(2*root+1);
    return;
}
