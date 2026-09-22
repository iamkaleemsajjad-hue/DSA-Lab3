# DSA Lab 03 – Structures and Pointers

**Course:** CS Data Structures and Algorithms  
**Student:** Muhammad Kaleem Sajjad | Reg# 544147 | BSCS-15E  
**Date:** 22nd September 2026

---

## Overview

Six tasks covering C++ structures, pointers, and dynamic memory allocation.

---

## Tasks

| File | Task | Description |
|------|------|-------------|
| `Task1.cpp` | Creating a structure | Declare a `Student` struct, input data, display with dot operator |
| `Task2.cpp` | Pointer to a structure | Point to a local struct, use arrow (`->`) operator, update marks |
| `Task3.cpp` | Dynamic allocation | Allocate with `new`, display, then `delete` and set to `nullptr` |
| `Task4.cpp` | Functions with pointers | `displayStudent(const Student*)` and `updateMarks(Student*, float)` |
| `task5.cpp` | Existence check | `displayIfExists()` handles `nullptr` and valid pointer cases |
| `task6.cpp` | Menu-driven application | Full CRUD menu reusing Task 4 & 5 functions; one record at a time |

---

## How to Compile & Run

```bash
g++ Task1.cpp -o Task1 && ./Task1
g++ Task2.cpp -o Task2 && ./Task2
g++ Task3.cpp -o Task3 && ./Task3
g++ Task4.cpp -o Task4 && ./Task4
g++ task5.cpp -o task5 && ./task5
g++ task6.cpp -o task6 && ./task6
```

> Requires C++11 or later (`-std=c++11` flag if needed).

---

## Key Concepts

- **Dot operator (`.`)** – access members via a struct variable
- **Arrow operator (`->`)** – access members via a pointer
- **`new` / `delete`** – heap allocation and deallocation
- **`nullptr`** – safe pointer reset to prevent dangling access
