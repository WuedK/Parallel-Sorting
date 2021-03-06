#ifndef CUDA_SORT
#define CUDA_SORT

#include "cuda_sorts_headers.cuh"
#include "cuda_odd_even.cuh"
#include "cuda_bitonic.cuh" // size should be a power of 2
#include "cuda_batcher_odd_even_merge.cuh" // size should be a power of 2
#include "cuda_merge.cuh"
#include "cuda_counting.cuh"

#endif