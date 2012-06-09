#ifndef TREENODE_CPP
#define TREENODE_CPP

#include "TreeNode.h"

using namespace mystl;

template<typename T, typename O>
TreeNode<T, O>* TreeNode<T, O>::findFirst() {
    if (m_left == 0) {
        return this;
    } else {
        return m_left->findFirst();
    }
}

template<typename T, typename O>
TreeNode<T, O>* TreeNode<T, O>::findLast() {
    if (m_right == 0) {
        return this;
    } else {
        return m_right->findLast();
    }
}

#endif
