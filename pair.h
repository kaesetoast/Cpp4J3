#ifndef PAIR_H
#define PAIR_H

#include <iostream>
#include <stdio.h>

namespace mystl{
    template <typename T1, typename T2>
    class Pair {

    public:
        Pair()
            : m_t1(), m_t2() {

        }

        Pair(T1 t1, T2 t2)
            : m_t1(t1), m_t2(t2) {

        }

        Pair(const Pair<T1, T2>& pair) {
            m_t1 = pair.first();
            m_t2 = pair.second();
        }

        Pair<T1, T2> operator=(Pair<T1, T2> &pair) {
            return Pair(pair);
        }

        bool operator ==(Pair<T1, T2> pair) {
            return pair.first() == m_t1 && pair.second() == m_t2;
        }

        T1& first() {
            return m_t1;
        }

        T2& second() {
            return m_t2;
        }

        void first(T1 t1) {
            m_t1 = t1;
        }

        void second(T2 t2) {
            m_t2 = t2;
        }

        const T1& first() const {
            return m_t1;
        }

        const T2& second() const {
            return m_t2;
        }

    private:
        T1 m_t1;
        T2 m_t2;

    };
}

using namespace mystl;
using namespace std;
template <typename T1, typename T2>
ostream& operator<< (ostream& Stream, const Pair<T1, T2> &pair) {
    return Stream << "<" << pair.first() << "," << pair.second() << ">";
}

#endif // PAIR_H
