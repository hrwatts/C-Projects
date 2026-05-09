# LU Decomposition

Notebook: [../../notebooks/numerical-linear-algebra/ludcmp_lusolve_example_cpp.ipynb](../../notebooks/numerical-linear-algebra/ludcmp_lusolve_example_cpp.ipynb)

## Scope

This notebook presents LU decomposition for solving linear matrix equations in C++.

## Source Statement in the Notebook

The notebook states that the LU decomposition codes are taken from *Numerical Recipes in C* and implemented in C++.

## Files Written by the Notebook

- `matrix.h`
- `matrix.cpp`
- `mean.h`
- `mean.cpp`
- `ludcmp.h`
- `ludcmp.cpp`
- `lusolve.h`
- `lusolve.cpp`
- `main.cpp`

## Build Step in the Notebook

```bash
g++ main.cpp mean.cpp ludcmp.cpp lusolve.cpp matrix.cpp -std=c++11 -o test
```

## Program Flow

The notebook program:

1. reads a matrix input file
2. prints matrix `A`
3. computes the LU decomposition
4. prints the determinant and pivot vector
5. prints the lower and upper triangular matrices
6. solves the linear system

## Display Notes

This notebook belongs after the regression notebooks because it is the most advanced numerical example in the repository.
