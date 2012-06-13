#ifndef TREEITERATOR_CPP
#define TREEITERATOR_CPP

#include "TreeIterator.h"

using namespace mystl;

template<typename T, typename O>
T& TreeIterator<T, O>::operator*() {
    return m_node->value();
}

template<typename T, typename O>
T* TreeIterator<T, O>::operator->() {
    return &(m_node->value());
}

template<typename T, typename O>
bool TreeIterator<T, O>::operator ==(const TreeIterator<T, O>& rhs) {
    return (m_tree == rhs.m_tree && m_node == rhs.m_node);
}

template<typename T, typename O>
bool TreeIterator<T, O>::operator !=(const TreeIterator<T, O>& rhs) {
    return !(m_tree == rhs.m_tree && m_node == rhs.m_node);
}

// TODO: Speicher-Leck
template<typename T, typename O>
TreeIterator<T, O>& TreeIterator<T, O>::operator++() {
    if (m_node == 0) {
        *this = TreeIterator<T, O>(0);
        return *this;
    }
    if (m_node->m_left != 0) {

        *this = m_node->m_left->begin();
        return *this;

    } else if(m_node->m_right != 0) {

        *this = m_node->m_right->begin();
        return *this;

    } else {
        *this = m_node->backTracking();
        return *this;
    }
}

#endif
