#ifndef TREEITERATOR_H
#define TREEITERATOR_H
#include "Tree.h"
#include "TreeNode.h"
namespace mystl {
    template<typename T, typename O>
    class TreeIterator {
    public:
        TreeIterator(TreeNode<T, O> node)
            : m_node(node){
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
#endif // TREEITERATOR_H
