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
            : m_node(node){
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
        Tree<T, O>* m_tree;
        TreeNode<T, O>* m_node;
    };
}

#include "TreeIterator.cpp"
#endif // TREEITERATOR_H
