#ifndef TREE_H
#define TREE_H
#include "TreeNode.h"
namespace mystl {
    template<typename T, typename O>
    class Tree {

    private:
        TreeNode<T, O> m_root;
    };
}

#endif // TREE_H
