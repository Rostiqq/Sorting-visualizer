cmake_minimum_required(VERSION 3.22)
project(SortingVisualizer VERSION 1.0 LANGUAGES CXX)

# Nastavenie štandardu C++ (SFML 3 vyžaduje minimálne C++17, odporúča sa C++20)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Nastavenie cesty k SFML (ak ho máte v priečinku projektu, alebo zadajte absolútnu cestu)
set(SFML_DIR "${CMAKE_CURRENT_SOURCE_DIR}/SFML-3.0.0/lib/cmake/SFML")

# Nájdenie balíka SFML 3 (požadované moduly)
find_package(SFML 3 REQUIRED COMPONENTS Graphics Window System)

# Vytvorenie spustiteľného súboru zo zdrojových kódov
add_executable(SortingVisualizer
    src/main.cpp
    src/Visualizer.cpp
    src/SortingAlgorithms.cpp
)

# Pridanie hlavičkových súborov do projektu
target_include_directories(SortingVisualizer PRIVATE include)

# Prepojenie (linkovanie) so SFML knižnicami
target_link_libraries(SortingVisualizer PRIVATE SFML::Graphics SFML::Window SFML::System)