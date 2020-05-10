# clocks
A cpp header only library template with testing and CI

# TODO

### Add `test/CMakeLists.txt` file
- make use of the compiler warnings cmake file in `cmake`
- also provide a way to make sure the tests have access to catch2
- this access can be just putting the header file for catch2 in here
- doing this might mean needing to change `<catch/catch2.hpp>` to use `""`

### Add `CMakeLists.txt` file
- this should be an interface target since this is a header only library
- not sure how this should interact with tests
