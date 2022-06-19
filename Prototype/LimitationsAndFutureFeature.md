
Known Limitations that may impact performance
- constness
- proper usage for `std::move` vs `const T&`
- using `std::string` instead of `std::string_view`
- using `explicit` constructor vs deleting default constructor
    - why should the classes be noncopyable?

Things to improve
- proper use of `std::any`
- proper use of `std::optional`
- proper use of `std::variant` 
