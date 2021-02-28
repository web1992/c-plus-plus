#/bin/sh
g++ -I/Library/Java/JavaVirtualMachines/jdk1.8.0_221.jdk/Contents/Home/include -I/Library/Java/JavaVirtualMachines/jdk1.8.0_221.jdk/Contents/Home/include/darwin -o libCL.dylib -g -shared -fPIC  cl.cpp

sudo cp libCL.dylib /Library/Java/JavaVirtualMachines/jdk1.8.0_221.jdk/Contents/Home/jre/lib