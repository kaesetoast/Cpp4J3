#ifndef LESS_H
#define LESS_H

namespace mystl {

    template<typename T>
    class Less {

    public:
        bool operator() (const T &l, const T &r) {
            return l < r;
        }
    };
}

#endif // LESS_H
