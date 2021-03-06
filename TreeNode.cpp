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
        return m_left->root()->findFirst();
    }
}

template<typename T, typename O>
TreeNode<T, O>* TreeNode<T, O>::findLast() {
    if (m_right == 0) {
        return this;
    } else {
        return m_right->root()->findLast();
    }
}

template<typename T, typename O>
TreeNode<T, O>* TreeNode<T, O>::find(const T &value) {
    // Abbruchbedingung: Wert gefunden
    O op;
    if (m_value == value) {
        return this;
    }

    // Sonst
    if (op(value, m_value)) {

        if (m_left == 0) {
            return 0;
        } else {
            return m_left->root()->find(value);
        }
    } else {
        if (m_right == 0) {
            return 0;
        } else {
            return m_right->root()->find(value);
        }
    }
}

template<typename T, typename O>
T& TreeNode<T, O>::value() {
    return m_value;
}

template<typename T, typename O>
TreeIterator<T, O> TreeNode<T, O>::backTracking() {
    if (m_up != 0 && &(*(m_up->m_right->begin())) == &(this->m_value)) {
        return m_up->backTracking();
    } else if (m_up == 0) {
        return TreeIterator<T, O>(0);
    } else {
        return TreeIterator<T, O>(m_up->m_right->root());
    }
}

#endif
