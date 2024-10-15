LeslieLog: aims to be async, fast, crash safe.
1. compressed output
2. async thread to perform the print, 
3. lock-free SPSC message queue (one async logger in on program)

CodeStyle: [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html)

1. expose unified api
2. provided some option: compressed, Lazy Format
3.  