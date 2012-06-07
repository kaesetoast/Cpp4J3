#ifndef TREEITERATOR_H
#define TREEITERATOR_H
#include "Tree.h"
#include "TreeNode.h"
namespace mystl {
    template<typename T, typename O>
    class TreeIterator {
    private:
        Tree<T, O> m_tree;
        TreeNode<T, O> m_node;
    };
}
#endif // TREEITERATOR_H
