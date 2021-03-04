#ifndef _HEAP_SORT_HH
#define _HEAP_SORT_HH

#include "quick_sort.hh"

class HeapSort
{

public:
    template<class T>
    void heapify(T *tab, int heap_size, int i)
    {
        int largest = i;
        int left_child = 2*i+1;
        int right_child = 2*i+2;

        if(left_child < heap_size && tab[left_child] > tab[largest])
            { largest = left_child; }

        if(right_child < heap_size && tab[right_child] > tab[largest])
            { largest = right_child; }
        
        if(largest != i)
        {
            std::swap(tab[largest], tab[i]);
            heapify(tab, heap_size, largest);
        }
    }

    template<class T>
    void heap_sort(T *tab, int size)
    {
        for(int i(size/2-1); i >= 0; i--)
            { heapify(tab, size, i); }
        
        for(int i(size-1); i>= 0; i--)
        {
            std::swap(tab[0], tab[i]);
            heapify(tab, i, 0);
        }
    }
};

#endif