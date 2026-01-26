# C++ Module 04 — Subtype Polymorphism, Abstract Classes & Interfaces


---

## 📌 Project Summary

This repository contains the **C++ Module 04 exercises** of the 42 curriculum.

The goal is to learn and practice:

* Subtype polymorphism
* Abstract classes
* Interfaces (pure abstract classes)
* Deep copy and proper memory management
* Class design in C++98

This module is a key step in mastering object-oriented programming in C++.

---

## 📁 Directory Structure

Each exercise has its own folder:

```
ex00/   → Polymorphism
ex01/   → Deep copy + Brain
ex02/   → Abstract Animal
ex03/   → Interfaces (AMateria, Character, MateriaSource)
```

Each folder contains:

* `Makefile`
* `main.cpp`
* All `.cpp` and `.hpp` files needed for the exercise

---

## ⚙️ General Rules (C++ Module 04)

* Compile with: `-Wall -Wextra -Werror`
* Code must compile with `-std=c++98`
* No `using namespace ...`
* No STL containers or algorithms until Modules 08 & 09
* No `friend` keyword
* No external libraries
* No memory leaks
* Classes must follow the **Orthodox Canonical Form** (copy constructor, assignment operator, destructor)
* Header files must include all dependencies and use include guards

---

## 🧪 Exercise Overview

### ✅ **Exercise 00 — Polymorphism**

**Goal:** Understand runtime polymorphism using a base class `Animal` and derived classes `Dog` and `Cat`.

**Key requirements:**

* `Animal` has a protected `std::string type` attribute
* `Dog` and `Cat` override `makeSound()`
* Use virtual functions to ensure correct behavior
* Implement `WrongAnimal` and `WrongCat` to show what happens without virtual functions

---

### ✅ **Exercise 01 — Deep Copy & Brain**

**Goal:** Implement deep copy and dynamic memory management.

**Key requirements:**

* Add class `Brain` containing `std::string ideas[100]`
* `Dog` and `Cat` each have a private `Brain* brain`
* Proper `new` and `delete` in constructors/destructors
* Copy constructor and assignment operator must perform deep copy
* Create an array of animals and delete them correctly

---

### ✅ **Exercise 02 — Abstract Class**

**Goal:** Make `Animal` abstract so it cannot be instantiated.

**Key requirements:**

* `Animal` becomes abstract by adding at least one pure virtual function
* All previous behavior must still work

---

### ✅ **Exercise 03 — Interfaces & Recap**

**Goal:** Implement interfaces using pure abstract classes.

**Classes to implement:**

* `AMateria` (abstract)
* `Ice` and `Cure` (concrete Materias)
* `ICharacter` (interface)
* `Character` (concrete)
* `IMateriaSource` (interface)
* `MateriaSource` (concrete)

**Key requirements:**

* Character has 4-slot inventory
* Deep copy for Character and MateriaSource
* `use()` and `clone()` functions
* `unequip()` must not delete the Materia
* Avoid memory leaks

---

## 🧾 How to Build

Inside each exercise folder:

```bash
make
```

Clean object files:

```bash
make clean
```

Remove objects + library/executable:

```bash
make fclean
```

Rebuild:

```bash
make re
```
---

### Author

**Login:** ylagzoul
**School:** 1337
