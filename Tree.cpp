/*
 * Template Code-­Organisation nach U06 S.12
 */

// Lösung 2: Inklusions-Modell (s. Skript U06 S.11)
#ifndef TREE_CPP
#define TREE_CPP

#include "Tree.h"

using namespace mystl;

template<typename T, typename O>
Tree<T, O>::Tree() {
    m_root = 0;
}

template<typename T, typename O>
TreeIterator<T, O> Tree<T, O>::begin() {
    return TreeIterator<T, O> (m_root);
}

template<typename T, typename O>
TreeIterator<T, O> Tree<T, O>::first() {
    return TreeIterator<T, O> (m_root->findFirst());
}

template<typename T, typename O>
TreeIterator<T, O> Tree<T, O>::last() {
    return TreeIterator<T, O> (m_root->findLast());
}

template<typename T, typename O>
TreeIterator<T, O> Tree<T, O>::find(const T& value) {
    return TreeIterator<T, O> (m_root->find(value));
}

#endif
