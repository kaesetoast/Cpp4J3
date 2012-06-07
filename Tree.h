#ifndef TREE_H
#define TREE_H
#include "TreeNode.h"
#include "TreeIterator.h"
namespace mystl {
    typedef TreeIterator<T, O> iterator;
    typedef TreeNode<T, O> node;

    template<typename T, typename O>
    class Tree {
    public:
        iterator insert(const T& value);
        void clear();
        iterator begin();
        iterator end();
        iterator first();
        iterator last();
        iterator find(const T& value);

    private:
        TreeNode<T, O> m_root;
    };
}

#endif // TREE_H
