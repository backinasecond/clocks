# clocks
A cpp header only library template with testing

# Ideal Result:
- i can put this header only library as a directory (`clocks`) inside another cmake project, and have it work
- be able to install this header only library on my system
- easily build and run tests

# Note:
- the `cpp` files should not be modified except if you want to change the include path for `catch2`
- `cmake/CompilerWarnings.cmake` file should not be modified
- `include/CMakeLists.txt` file should only be modified if absolutely necessary

# Todo:
- write the parent `CMakeLists.txt file`
- write the `test/CMakeLists.txt file`
- building the tests MUST use the warnings from `cmake/CompilerWarnings.cmake`
- figure out a way for the tests to have access to catch2 (e.g. put the catch2 header file in there directly, or use conan)

### Please write this using cmake best practises such that it is extensible and can be used as a template for a header only library in the future

## Helpful links
- https://github.com/lefticus/cpp_starter_project
- https://github.com/IronsDu/brynet/blob/master/tests/CMakeLists.txt
- https://arne-mertz.de/2018/06/cmake-project-structure/
