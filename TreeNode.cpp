#ifndef TREENODE_CPP
#define TREENODE_CPP

#include "TreeNode.h"
#include "Tree.h"

using namespace mystl;

// TODO: Unterschied Less, Greater?
template<typename T, typename O>
TreeNode<T, O>* TreeNode<T, O>::findFirst() {
    if (m_left == 0) {
        return this;
    } else {
        return m_left->root().findFirst();
    }
}

template<typename T, typename O>
TreeNode<T, O>* TreeNode<T, O>::findLast() {
    if (m_right == 0) {
        return this;
    } else {
        return m_right->root().findLast();
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
            return &m_left->root();
        } else {
            return m_left->root().find(value);
        }
    } else {
        if (m_right == 0) {
            return &m_right->root();
        } else {
            return m_right->root().find(value);
        }
    }
}

template<typename T, typename O>
TreeIterator<T, O> TreeNode<T, O>::backTracking() {
    if (m_up == 0) {
        return TreeIterator<T, O>(0);
    }
    else if (&m_up->m_right == &this) {
        return m_up->backTracking();
    } else {
        return TreeIterator<T, O>(m_up->m_right);
    }
}

#endif
