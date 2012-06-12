#ifndef TREENODE_H
#define TREENODE_H

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
        TreeNode(const T &value = T(), TreeNode<T, O>* up = 0);
        T& value();
        TreeNode<T, O>* find(const T&);
        TreeNode<T, O>* findFirst();
        TreeNode<T, O>* findLast();
        TreeIterator<T, O> backTracking();
    protected:
        Tree<T, O>* m_left;
        Tree<T, O>* m_right;
        TreeNode<T, O>* m_up;
        T m_value;
    };
}
#endif // TREENODE_H
