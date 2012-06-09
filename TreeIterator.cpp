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

#endif
