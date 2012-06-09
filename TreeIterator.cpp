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

}

template<typename T, typename O>
bool TreeIterator<T, O>::operator ==(const TreeIterator<T, O>& rhs) {
    return (m_tree == rhs.m_tree && m_node == rhs.m_node);
}

template<typename T, typename O>
bool TreeIterator<T, O>::operator !=(const TreeIterator<T, O>& rhs) {
    return !this == rhs;
}

#endif
