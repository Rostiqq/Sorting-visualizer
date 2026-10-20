# Sorting Visualizer

Jednoduchý vizualizér triediacich algoritmov v C++23 s využitím grafickej knižnice **SFML 3**.

##  Štruktúra projektu

```text
Sorting_visualizer/
├── include/              
│   ├── SortingAlgorithms.hpp
│   └── Visualizer.hpp
├── src/                  
│   ├── main.cpp
│   ├── SortingAlgorithms.cpp
│   └── Visualizer.cpp
├── .gitignore
├── CMakeLists.txt
└── README.md
```

## Požiadavky

- **C++23** kompatibilný kompilátor (MSVC, GCC, Clang)
- **CMake** (3.22 alebo novší)
- **SFML 3.0+**

## Zostavenie a spustenie

### Pomocou CMake v príkazovom riadku:

```bash
# Vytvorenie build adresára
cmake -B build

# Kompilácia
cmake --build build --config Release

# Spustenie
./build/SortingVisualizer
```
