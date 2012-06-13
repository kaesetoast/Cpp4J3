#ifndef TREENODE_H
#define TREENODE_H

#include "Less.h"
#include <stdlib.h>

namespace mystl {

    template<typename T, typename O>
    class TreeIterator;
    template<typename T, typename O>
    class Tree;

    template<typename T, typename O>
    class TreeNode {

        friend class TreeIterator<T, O>;
        friend class Tree<T, O>;

    public:
        TreeNode(const T &value = T(), TreeNode<T, O>* up = 0)
            : m_value(value), m_up(up), m_left(0), m_right(0) {
        }

        ~TreeNode() {
            free(m_up);
            free(m_left);
            free(m_right);
        }

        T& value();
        TreeNode<T, O>* find(const T&);
        TreeNode<T, O>* findFirst();
        TreeNode<T, O>* findLast();
        TreeIterator<T, O> backTracking();
    protected:
        T m_value;
        TreeNode<T, O>* m_up;
        Tree<T, O>* m_left;
        Tree<T, O>* m_right;
    };

    template class TreeNode<int, Less<int> >;
}

#include "TreeNode.cpp"
#endif // TREENODE_H
