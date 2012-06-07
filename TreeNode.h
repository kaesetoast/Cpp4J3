#ifndef TREENODE_H
#define TREENODE_H
#include "Tree.h"
namespace mystl {
    template<typename T, typename O>
    class TreeNode {
        friend class TreeIterator<T, O>;
        friend class Tree<T, O>;
    public:
        T& value();
        TreeNode<T, O>* find(const T&);
        TreeNode<T, O>* findFirst();
        TreeNode<T, O>* findLast();
    protected:
        Tree<T, O> m_left, m_right;
        TreeNode<T, O> m_up;
    };
}
#endif // TREENODE_H
