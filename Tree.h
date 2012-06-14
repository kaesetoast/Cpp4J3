#ifndef TREE_H
#define TREE_H
#include "TreeNode.h"
#include "TreeIterator.h"
#include "Less.h"
#include <stdlib.h>

namespace mystl {

    template<typename T, typename O = Less<T> >
    class Tree {
    public:
        typedef TreeIterator<T, O> iterator;
        typedef TreeNode<T, O> node;

        Tree(node *node = 0) {
            this->m_root = node;
        }

        Tree(const T& value, TreeNode<T, O>* up) {
            this->m_root = new TreeNode<T, O>(value, up);
        }

        ~Tree() {
            free(this->m_root);
        }

        iterator insert(const T& value);
        void clear();
        iterator begin();
        iterator end();
        iterator first();
        iterator last();
        iterator find(const T& value);
        node* root();

    private:
        node* m_root;
    };

    // Lösung 3: zusätzlich explizite Instanziierung (s. Skript U06 S.11)
    template class Tree<int>;
}

#include "Tree.cpp"
#endif // TREE_H
