#pragma once

#define MAXRESULTS 4

void nonceGrindcuda(cudaStream_t cudastream, uint64_t threads, uint64_t *blockHeader, uint64_t *headerHash, uint64_t *nonceOut, uint64_t *vpre, uint32_t target);
