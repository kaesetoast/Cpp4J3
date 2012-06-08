#ifndef TREE_H
#define TREE_H
#include "TreeNode.h"
#include "TreeIterator.h"
#include "Less.h"

namespace mystl {

    template<typename T, typename O = Less<T> >
    class Tree {
    public:
        typedef TreeIterator<T, O> iterator;
        typedef TreeNode<T, O> node;

        Tree();

        iterator insert(const T& value);
        void clear();
        iterator begin();
        iterator end();
        iterator first();
        iterator last();
        iterator find(const T& value);

    private:
        TreeNode<T, O>* m_root;
    };
}

#include "Tree.cpp"
#endif // TREE_H
