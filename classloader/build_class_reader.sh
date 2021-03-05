#/bin/sh
g++ -I/Library/Java/JavaVirtualMachines/jdk1.8.0_221.jdk/Contents/Home/include -I/Library/Java/JavaVirtualMachines/jdk1.8.0_221.jdk/Contents/Home/include/darwin -o libClassReader.dylib -g -shared -fPIC  org_springframework_asm_ClassReader.cpp

sudo cp libClassReader.dylib /Library/Java/JavaVirtualMachines/jdk1.8.0_221.jdk/Contents/Home/jre/lib
