#ifndef TREENODE_CPP
#define TREENODE_CPP

#include "TreeNode.h"

using namespace mystl;

// TODO: Unterschied Less, Greater?
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

template<typename T, typename O>
TreeNode<T, O>* TreeNode<T, O>::find(const T &value) {
    O op;
    if (m_value == value) {
        return this;
    }
    if (op(m_value, value)) {
        if (m_left == 0) {
            return m_left;
        } else {
            return m_left->find(value);
        }
    } else {
        if (m_right == 0) {
            return m_right;
        } else {
            return m_right->find(value);
        }
    }
}

#endif
