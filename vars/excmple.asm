example.o：     文件格式 elf64-x86-64


Disassembly of section .text:

0000000000000000 <global_func>:
extern int extern_var;
int global_var = 1;
static int static_var = 2;

extern int extern_func();
int global_func() {
   0:	55                   	push   %rbp
   1:	48 89 e5             	mov    %rsp,%rbp
    return 10;
   4:	b8 0a 00 00 00       	mov    $0xa,%eax
}
   9:	5d                   	pop    %rbp
   a:	c3                   	retq

000000000000000b <static_func>:

static int static_func() {
   b:	55                   	push   %rbp
   c:	48 89 e5             	mov    %rsp,%rbp
    return 20;
   f:	b8 14 00 00 00       	mov    $0x14,%eax
}
  14:	5d                   	pop    %rbp
  15:	c3                   	retq

0000000000000016 <main>:

int main() {
  16:	55                   	push   %rbp
  17:	48 89 e5             	mov    %rsp,%rbp
  1a:	48 83 ec 20          	sub    $0x20,%rsp
    int var0 = extern_var;
  1e:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 24 <main+0xe>
  24:	89 45 fc             	mov    %eax,-0x4(%rbp)
    int var1 = global_var;
  27:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 2d <main+0x17>
  2d:	89 45 f8             	mov    %eax,-0x8(%rbp)
    int var2 = static_var;
  30:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 36 <main+0x20>
  36:	89 45 f4             	mov    %eax,-0xc(%rbp)
    int var3 = extern_func();
  39:	b8 00 00 00 00       	mov    $0x0,%eax
  3e:	e8 00 00 00 00       	callq  43 <main+0x2d>
  43:	89 45 f0             	mov    %eax,-0x10(%rbp)
    int var4 = global_func();
  46:	b8 00 00 00 00       	mov    $0x0,%eax
  4b:	e8 00 00 00 00       	callq  50 <main+0x3a>
  50:	89 45 ec             	mov    %eax,-0x14(%rbp)
    int var5 = static_func();
  53:	b8 00 00 00 00       	mov    $0x0,%eax
  58:	e8 ae ff ff ff       	callq  b <static_func>
  5d:	89 45 e8             	mov    %eax,-0x18(%rbp)
    return var0 + var1 + var2 + var3 + var4 + var5;
  60:	8b 55 fc             	mov    -0x4(%rbp),%edx
  63:	8b 45 f8             	mov    -0x8(%rbp),%eax
  66:	01 c2                	add    %eax,%edx
  68:	8b 45 f4             	mov    -0xc(%rbp),%eax
  6b:	01 c2                	add    %eax,%edx
  6d:	8b 45 f0             	mov    -0x10(%rbp),%eax
  70:	01 c2                	add    %eax,%edx
  72:	8b 45 ec             	mov    -0x14(%rbp),%eax
  75:	01 c2                	add    %eax,%edx
  77:	8b 45 e8             	mov    -0x18(%rbp),%eax
  7a:	01 d0                	add    %edx,%eax
}
  7c:	c9                   	leaveq
  7d:	c3                   	retq