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

template<typename T, typename O>
TreeIterator<T, O>& TreeIterator<T, O>::operator++() {
    if (m_node->m_left != 0) {
        return TreeIterator<T, O>(m_node->m_left);
    } else if(m_node->m_right != 0) {
        return TreeIterator<T, O>(m_node->m_right);
    } else {
        return m_node->backTracking();
    }
}

#endif
