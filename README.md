# C-Projects

This repository is a tutorial-style collection of C++ practice programs and numerical-method notebooks.

## Purpose

The repository presents:

- basic C++ console examples
- a simple linear regression implementation in C++
- a class-based linear regression implementation in C++
- an LU decomposition example for solving linear systems in C++

## Tutorial Map

1. [C++ basics](docs/tutorial/01-basics.md)
2. [Simple linear regression](docs/tutorial/02-simple-linear-regression.md)
3. [Class-based linear regression](docs/tutorial/03-class-linear-regression.md)
4. [LU decomposition](docs/tutorial/04-lu-decomposition.md)

## Repository Layout

```text
.
|-- docs/
|   `-- tutorial/
|-- examples/
|   `-- basics/
`-- notebooks/
    |-- linear-regression/
    `-- numerical-linear-algebra/
```

## Files

- [examples/basics/is_even.cpp](examples/basics/is_even.cpp) reads an integer and reports whether it is even or odd.
- [examples/basics/PrinciplesCPP.cpp](examples/basics/PrinciplesCPP.cpp) demonstrates vectors, iterators, templates, structs, operator overloading, unions, and ternary operators.
- [notebooks/linear-regression/Simple_Linear_Regression_C.ipynb](notebooks/linear-regression/Simple_Linear_Regression_C.ipynb) writes and compiles a function-based linear regression example in Google Colab.
- [notebooks/linear-regression/Class_Linear_Regression_C.ipynb](notebooks/linear-regression/Class_Linear_Regression_C.ipynb) writes and compiles a class-based linear regression example in Google Colab.
- [notebooks/numerical-linear-algebra/ludcmp_lusolve_example_cpp.ipynb](notebooks/numerical-linear-algebra/ludcmp_lusolve_example_cpp.ipynb) writes and compiles an LU decomposition solver example in Google Colab.

## Running the Material

### Basic examples

Compile a console example with `g++`:

```bash
g++ examples/basics/is_even.cpp -std=c++11 -o is_even
g++ examples/basics/PrinciplesCPP.cpp -std=c++11 -o principles
```

### Notebook examples

Open the notebooks in Google Colab or Jupyter and run the cells in order. Each notebook writes its source files and compiles the example inside the notebook.

## Repository Standard

The public repository contains source files, notebooks, and documentation. Build artifacts and machine-specific binaries are excluded from version control.
