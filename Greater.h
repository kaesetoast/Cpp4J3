#ifndef GREATER_H
#define GREATER_H

namespace mystl {

    template<typename T>
    class Greater {

    public:
        bool operator() (const T &l, const T &r) {
            return l > r;
        }
    };
}

#endif // GREATER_H
