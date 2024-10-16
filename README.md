
# STL to DAT File Translator

This project is a C++ program that reads a 3D STL file, extracts the vertex coordinates of triangles, and converts the data into a `.dat` file for visualization or further analysis.

## Features
- **Read STL file**: Extract vertex coordinates of 3D shapes from a given STL file.
- **Data Abstraction**: Uses OOP principles to represent points and triangles.
- **Unique Coordinate Mapping**: Maps unique vertex coordinates to indices for more efficient storage.
- **Output in `.dat` format**: Converts the extracted vertices to a DAT file format.

## Requirements
- A C++ compiler (e.g., GCC or MSVC).
- Visual Studio Code (or any C++ IDE).
- Gnuplot (optional, for visualizing `.dat` files).
- Git for version control.

## Project Structure
- `Point.h` and `Point.cpp`: Defines the Point class for representing vertices with x, y, z coordinates.
- `Triangle.h` and `Triangle.cpp`: Represents a triangle formed by three vertices.
- `Reader.h` and `Reader.cpp`: Reads vertex data from an STL file.
- `Writer.h` and `Writer.cpp`: Writes the triangle data into a `.dat` file.
- `Triangulation.h` and `Triangulation.cpp`: Handles the parsing of data and mapping unique vertex coordinates.
- `StlToDatTranslator.cpp`: The main program that ties everything together.

## Installation

1. **Clone the repository**:
   ```bash
   git clone https://github.com/Jaydeep-Jogdand/Translator_.git
   
   ```

2. **Build the project**:
   - Using `g++`:
     ```bash
     g++ Point.cpp Reader.cpp Writer.cpp Triangle.cpp Triangulation.cpp StlToDatTranslator.cpp -o stl_to_dat_translator
     ```

   - Or, use your IDE’s build system if you’re working in Visual Studio or another environment.

3. **Run the program**:
   ```bash
   ./stl_to_dat_translator
   ```

## Usage
1. **Place your STL file** in the same directory as the executable (or modify the path in the `loadFile` function).
2. **Run the program**, and it will generate an `output.dat` file containing the vertex data.
3. **Visualize the output** using Gnuplot or any other tool capable of rendering `.dat` files.

## Example

Here’s an example of how the program processes an STL file:

- Input: `cube.stl`
- Output: `output.dat` with the vertex coordinates of the cube's triangles.

