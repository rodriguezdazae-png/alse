cmake_minimum_required(VERSION 3.10)
project(TiendaOnline)

# Estándar de C++
set(CMAKE_CXX_STANDARD 17)

# Incluir carpeta de encabezados
include_directories(include)

# Archivos fuente
add_executable(TiendaOnline
    src/main.cpp
    src/Producto.cpp
)
