# Calculator Project

This project is a C++ Windows-based calculator developed using Visual Studio. It is structured using standard C++ classes and Visual Studio resource files.

## Features

- Basic arithmetic operations (addition, subtraction, multiplication, division)
- Windows-based UI with `.rc` and `.ico` resources
- Written in modern C++ using Visual Studio project structure

## Project Structure

```
Calculator/
├── Calculator.cpp           # Main application logic
├── Calculator.h             # Class declarations and global definitions
├── Calculator.rc            # Resource script (UI layout)
├── Resource.h               # Resource identifiers
├── framework.h              # Standard headers
├── targetver.h              # Target Windows version
├── *.vcxproj / .filters     # Visual Studio project files
├── Calculator.ico           # Application icon
├── small.ico                # Alternate icon
```

## How to Build and Run

### Using Visual Studio

1. Open `Calculator.sln` in Visual Studio.
2. Set the build configuration to `Debug` and the platform to `x64` or `x86` depending on your system.
3. Build the solution (`Ctrl + Shift + B`).
4. Run the program (`Ctrl + F5`).

## Dependencies

- Microsoft Windows SDK
- Visual Studio C++ toolset

## Screenshots

(Add screenshots of the calculator UI here if applicable.)

## Author

Created by Austin for CS coursework at Southern New Hampshire University.

## License

This project is provided for educational use. You are free to modify or redistribute it with attribution.
