#ifndef TREEITERATOR_H
#define TREEITERATOR_H
#include "Tree.h"
#include "TreeNode.h"
#include <stdlib.h>

namespace mystl {
    template<typename T, typename O>
    class TreeIterator {
    public:
        TreeIterator(TreeNode<T, O>* node)
            : m_node(node), m_tree(0) {
        }

        ~TreeIterator() {
            free(m_tree);
            free(m_node);
        }

        T& operator*();
        T* operator->();
        TreeIterator<T, O>& operator++();
        TreeIterator<T, O>& operator--();
        bool operator==(const TreeIterator<T, O>&);
        bool operator!=(const TreeIterator<T, O>&);

    private:
        TreeNode<T, O>* m_node;
        Tree<T, O>* m_tree;
    };
}

#include "TreeIterator.cpp"
#endif // TREEITERATOR_H
