#ifndef _QUICK_SORT_HH
#define _QUICK_SORT_HH

#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

class QuickSort
{
public:

    template<class T>
    void quick_sort(T *tab, int low_index, int high_index)
    {
        if(high_index <= low_index)
            { return; }

        int i = low_index-1;
        int j = high_index+1;
        T pivot = tab[(low_index+high_index)/2];

        while(1)
        { 
            while(pivot>tab[++i]); 
    
            while(pivot<tab[--j]);

            if(i<=j)
                std::swap(tab[i], tab[j]);
            else
                break;
        
        }

        if(j>low_index)
            { quick_sort(tab, low_index, j); }
        if(i<high_index)
            { quick_sort(tab, i, high_index); }

        }
};

#endif