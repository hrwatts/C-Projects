# Class-Based Linear Regression

Notebook: [../../notebooks/linear-regression/Class_Linear_Regression_C.ipynb](../../notebooks/linear-regression/Class_Linear_Regression_C.ipynb)

## Scope

This notebook implements linear regression in C++ with a `LinearRegression` class.

## Files Written by the Notebook

- `mean.h`
- `mean.cpp`
- `LinearRegression.h`
- `main.cpp`

## Build Step in the Notebook

```bash
g++ main.cpp mean.cpp -std=c++1z -o test
```

## Program Flow

The notebook program:

1. stores the input vectors in a class instance
2. computes `XHat` and `yHat`
3. computes `SSxx` and `SSxy`
4. computes the regression coefficients
5. stores the fitted values in `yP`
6. prints the fitted line

## Display Notes

This notebook follows the function-based regression example and shows the same topic in an object-oriented form.
