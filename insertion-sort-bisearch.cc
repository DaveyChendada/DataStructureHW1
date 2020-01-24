/**
 *  \file insertion-sort-bisearch.cc
 *
 *  \brief Implement your insertion sort with binary search in this file.
 */

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "sort.hh"

void
mySort (int N, keytype* A)
{
  /* Lucky you, you get to start from scratch */
  int i, j, start, end;
  keytype temp;
  for(i = 1; i < N; i++){
	start = 0;
	end = i - 1;
	temp = A[i];
	while(start <= end){
		mid = (start + end)/2;
		if(A[mid] > temp){
			end = mid - 1;
		}
		else{
			start = mid + 1;
		}
	}
	for(j = i-1; j >= end+1; j--){
		A[j+1] = A[j];
	}
	A[j+1] = temp;
  }
  
}



/* eof */
