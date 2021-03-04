#include "sort.hh"

using std::endl;
using std::cout;
using std::cin;

int main()
{
    int tab1[] = {0, 5, 42, 64, 12, 14, 20, 25, 30, 0, 3, 1, 21, 30, 62, 21, 22, 35, 1, 2, 7, 9, 8, 3, 4, 6, 11, 15, 2, 20, 19, 13, 10, 8, 12, 16, 90, 15, 29, 40};
    char tab2[] = {'b', 'c', 'd', 'D', 'f', 'k', 'l', 'a', 's', 'd'};

    //MergeSort merge_sort;
    //QuickSort quick_sort;
    //IntroSort intro_sort;
    Sort sort;
    //HeapSort heap;

    int left = 0;
    int right = 39;
    //quick_sort.quick_sort(tab1, left, right);
    //sort.quick_sort(tab2, left, 9);
    //sort.merge_sort(tab1, left, right);
    sort.heap_sort(tab1, right+1);
    //merge_sort.merge_sort(tab2, left, 9);
  
    for(int i(0); i < right+1; i++)
        cout << tab1[i] << " ";
    cout << endl;
    for(int i(0); i < 10; i++)
        cout << tab2[i] << " ";
    
    return 0;
}