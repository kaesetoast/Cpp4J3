#ifndef TREENODE_H
#define TREENODE_H
#include "Tree.h"
namespace mystl {
    template<typename T, typename O>
    class TreeNode {
    private:
        Tree<T, O> m_left, m_right;
        TreeNode<T, O> m_up;
    };
}
#endif // TREENODE_H
