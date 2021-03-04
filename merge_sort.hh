#ifndef _MERGE_SORT_HH
#define _MERGE_SORT_HH
#include "quick_sort.hh"

class MergeSort
{

public:
    template<class T>
    void merge(T *tab, const int low_index, int middle_index, int high_index)
    {   
        int i,j;
        T *pom = new T[high_index+1];

        for(i = middle_index+1; i>low_index; i--)
            { pom[i-1] = tab[i-1]; }

        for(j = middle_index; j < high_index; j++)
            { pom[high_index+middle_index-j] = tab[j+1]; }

        for(int k=low_index; k <= high_index; k++)
        {
            if(pom[j] < pom[i])
                { tab[k] = pom[j--]; }
            else
                { tab[k] = pom[i++]; }
        }

        delete []pom;
    }

    template<class T>
    void merge_sort(T *tab, int low_index, int high_index)
    {
        if(high_index <= low_index)
            { return; }
        
        int middle_index = (low_index+high_index)/2;

        merge_sort(tab, low_index, middle_index);
        merge_sort(tab, middle_index+1, high_index);

        merge(tab, low_index, middle_index, high_index);
    }
};

#endif