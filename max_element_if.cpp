
#include <algorithm>

using namespace std;

template<typename ForwardIterator, typename UnaryPredicate>
ForwardIterator max_element_if(ForwardIterator first, ForwardIterator last, UnaryPredicate pred) {

    using element_type = typename ForwardIterator::value_type;

    auto it = first;
    element_type max_{};
    ForwardIterator max_it=last;

    while(it!=last){
        if(pred(*it)){
            if(max_<*it){
                max_ = *it;
                max_it = it;
            }
        }
      it=next(it);
    }

    return max_it;
}