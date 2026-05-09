# Simple Linear Regression

Notebook: [../../notebooks/linear-regression/Simple_Linear_Regression_C.ipynb](../../notebooks/linear-regression/Simple_Linear_Regression_C.ipynb)

## Scope

This notebook implements the line of best fit for a scatter plot in C++.

## Files Written by the Notebook

- `linreg.h`
- `mean.h`
- `mean.cpp`
- `linreg.cpp`
- `main.cpp`

## Build Step in the Notebook

```bash
g++ main.cpp mean.cpp linreg.cpp -std=c++1z -o test
```

## Program Flow

The notebook program:

1. defines an input vector `x`
2. defines a response vector `y`
3. computes the sample means
4. computes `SSxx` and `SSxy`
5. computes the regression coefficients
6. prints the fitted line values

## Display Notes

This notebook works as the first numerical example because the implementation is direct and function-based.
