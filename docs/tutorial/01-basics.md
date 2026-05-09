# C++ Basics

This section covers the two standalone C++ console programs in the repository.

## Files

- [../../examples/basics/is_even.cpp](../../examples/basics/is_even.cpp)
- [../../examples/basics/PrinciplesCPP.cpp](../../examples/basics/PrinciplesCPP.cpp)

## 1. `is_even.cpp`

This program:

- reads one integer from standard input
- evaluates `number % 2 == 0`
- prints `even` or `odd`

Build:

```bash
g++ examples/basics/is_even.cpp -std=c++11 -o is_even
```

Run:

```bash
./is_even
```

## 2. `PrinciplesCPP.cpp`

This program demonstrates:

- vectors
- iterators and increment/decrement operators
- function templates
- structs
- class construction
- overloaded `new` and `delete`
- unions
- ternary operators

Build:

```bash
g++ examples/basics/PrinciplesCPP.cpp -std=c++11 -o principles
```

Run:

```bash
./principles
```

## Display Order

For a simple tutorial display, present `is_even.cpp` first and `PrinciplesCPP.cpp` second.
