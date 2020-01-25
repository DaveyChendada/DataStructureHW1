/**
 *  \file mergesort.cc
 *
 *  \brief Implement your mergesort in this file.
 */

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include "sort.hh"

//merge two array
void
merge(keytype* arr, int l, int m, int r)
{
    int i, j, k;
    int n1 = m-l+1;
    int n2 = r-m;

    keytype L[n1], R[n2];
    //copy two array
    for(i = 0; i < n1; i++)
    {
        L[i] = arr[l+i];
    }
    for(j = 0; j < n2; j++)
    {
        R[j] = arr[m+1+j];
    }

    while( i < n1 && j < n2)
    {
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while(i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j < n2){
        arr[k] = R[j];
        j++;
        k++;
    }

}







void
mergeSort(keytype* arr, int l, int r)
{
    if(l < r){
        //same as (l+r)/2, but avoid overflow for the large l and r
        int  m = l + (r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

void
mySort (int N, keytype* A)
{
  /* Lucky you, you get to start from scratch */
  /*oh really ?*/
    mergeSort(A, 0, N-1);

    
}


















/* eof */
