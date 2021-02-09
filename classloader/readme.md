# CMD

```sh
# linux
g++  -I/usr/local/java/include -I/usr/local/java/include/linux  -o libCL.so -g -shared -fPIC  cl.cpp

g++  -I/usr/local/jdk1.8.0_152/include -I/usr/local/jdk1.8.0_152/include/linux  -o libCL.so -g -shared -fPIC  cl.cpp

# MacOS libCL.dylib
# /Library/Java/JavaVirtualMachines/jdk1.8.0_221.jdk/Contents/Home/jre/lib
g++ -I/Library/Java/JavaVirtualMachines/jdk1.8.0_221.jdk/Contents/Home/include -I/Library/Java/JavaVirtualMachines/jdk1.8.0_221.jdk/Contents/Home/include/darwin -o libCL.dylib -g -shared -fPIC  cl.cpp

## run
java -Djava.library.path=. CL
```
