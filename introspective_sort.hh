#ifndef _INTROSPECTIVE_SORT_HH
#define _INTROSPECTIVE_SORT_HH

#include "merge_sort.hh"
#include "heap_sort.hh"

class IntrospectiveSort : public HeapSort
{

public:
    template<class T>
    int median_of_three(T *tab, int low_index, int high_index)
    {
       int middle_index = (low_index+high_index)/2, median;

    }
};

#endif