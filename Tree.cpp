/*
 * Template Code-­Organisation nach U06 S.12
 */

// Lösung 2: Inklusions-Modell (s. Skript U06 S.11)
#ifndef TREE_CPP
#define TREE_CPP

#include "Tree.h"

using namespace mystl;

template<typename T, typename O>
TreeIterator<T, O> Tree<T, O>::insert(const T &value) {
    O op;

    if(m_root == 0) {
        m_root = new TreeNode<T, O> (value, 0);
        return TreeIterator<T, O>(m_root);
    } else {
        if(op(value, m_root->value())) {

            if (m_root->m_left == 0) {
                m_root->m_left = new Tree<T, O> (new TreeNode<T, O>(value, m_root));
                return TreeIterator<T, O> (m_root->m_left->root());
            } else {
                return m_root->m_left->insert(value);
            }

        } else {
            if (m_root->m_right == 0) {
                m_root->m_right = new Tree<T, O> (new TreeNode<T, O>(value, m_root));
                return TreeIterator<T, O> (m_root->m_right->root());
            } else {
                return m_root->m_right->insert(value);
            }
        }
    }
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

template<typename T, typename O>
TreeIterator<T, O> Tree<T, O>::end() {
    return TreeIterator<T, O>(0);
}

template<typename T, typename O>
TreeNode<T, O>* Tree<T, O>::root() {
    return m_root;
}

#endif
