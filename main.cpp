/* 
 * File:   main.cpp
 * Author: rarce
 *
 * Created on March 27, 2012, 6:27 AM
 */

#include <cstdlib>
#include "BinaryTree.h";
#include "BinaryTree.cpp";
using namespace std;


int main(int argc, char** argv) {
    BinaryTree<int> B(0);
    
    B.insertAt(35, 0);
    B.insertAt(15, 1, LEFT);
    B.insertAt(45, 1, RIGHT);
    B.insertAt(24, 2, RIGHT);
    B.insertAt(100, 3, RIGHT);
    
    B.traversePreOrder();
    B.traverseInOrder();
    
    B.print();
    
    return 0;
}

