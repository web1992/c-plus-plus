
// example.c
extern int extern_var;
int global_var = 1;
static int static_var = 2;
 
extern int extern_func();
int global_func() {
    return 10;
}
 
static int static_func() {
    return 20;
}
 
int main() {
    int var0 = extern_var;
    int var1 = global_var;
    int var2 = static_var;
    int var3 = extern_func();
    int var4 = global_func();
    int var5 = static_func();
    return var0 + var1 + var2 + var3 + var4 + var5;
}