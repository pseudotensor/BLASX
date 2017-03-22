#Those variables have to be changed accordingly!
# Compilers, linker/loaders, the archiver, and their options.

CC        = gcc
FC        = gfortran
CPLUS     = g++

ARCH      = ar
ARCHFLAGS = cr
RANLIB    = ranlib

CFLAGS    = -O3

# Blas Library
#LIBCPUBLAS = -lmkl_intel_lp64 -lmkl_intel_thread -lmkl_core -liomp5 -lpthread
LIBCPUBLAS = "/usr/lib/libopenblas.so"
#LIBCPUBLAS = "/System/Library/Frameworks/Accelerate.framework/Frameworks/vecLib.framework/Versions/Current/libBLAS.dylib"
LIBGPUBLAS = -L/usr/local/cuda/lib64 -lcudart -lcublas -lcuda
LIBBLAS   = $(LIBGPUBLAS)

#BLAS Include
INCBLAS   = -I/usr/local/cuda/include
