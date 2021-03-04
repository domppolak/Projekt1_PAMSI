#ifndef _SORT_HH
#define _SORT_HH

#include "introspective_sort.hh"

class Sort : public QuickSort, public MergeSort, public IntrospectiveSort
{

public:
    Sort() {}
    ~Sort() {}
};

#endif