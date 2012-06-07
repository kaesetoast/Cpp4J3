#ifndef MAPTOFIRST_H
#define MAPTOFIRST_H

#include "pair.h"

namespace mystl {
    template<typename T1, typename T2, template <typename> class Op = Less>
    class MapToFirst {
    public:
        bool operator() (const Pair<T1, T2> &l, const Pair<T1, T2> &r) {
            return Op<T1>()(l.first(), r.first());
        }
    };
}

#endif // MAPTOFIRST_H
