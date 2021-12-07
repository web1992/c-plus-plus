a.out：     文件格式 elf64-x86-64


Disassembly of section .init:

00000000004003a8 <_init>:
  4003a8:	48 83 ec 08          	sub    $0x8,%rsp
  4003ac:	48 8b 05 45 0c 20 00 	mov    0x200c45(%rip),%rax        # 600ff8 <__gmon_start__>
  4003b3:	48 85 c0             	test   %rax,%rax
  4003b6:	74 05                	je     4003bd <_init+0x15>
  4003b8:	e8 33 00 00 00       	callq  4003f0 <__gmon_start__@plt>
  4003bd:	48 83 c4 08          	add    $0x8,%rsp
  4003c1:	c3                   	retq

Disassembly of section .plt:

00000000004003d0 <.plt>:
  4003d0:	ff 35 32 0c 20 00    	pushq  0x200c32(%rip)        # 601008 <_GLOBAL_OFFSET_TABLE_+0x8>
  4003d6:	ff 25 34 0c 20 00    	jmpq   *0x200c34(%rip)        # 601010 <_GLOBAL_OFFSET_TABLE_+0x10>
  4003dc:	0f 1f 40 00          	nopl   0x0(%rax)

00000000004003e0 <__libc_start_main@plt>:
  4003e0:	ff 25 32 0c 20 00    	jmpq   *0x200c32(%rip)        # 601018 <__libc_start_main@GLIBC_2.2.5>
  4003e6:	68 00 00 00 00       	pushq  $0x0
  4003eb:	e9 e0 ff ff ff       	jmpq   4003d0 <.plt>

00000000004003f0 <__gmon_start__@plt>:
  4003f0:	ff 25 2a 0c 20 00    	jmpq   *0x200c2a(%rip)        # 601020 <__gmon_start__>
  4003f6:	68 01 00 00 00       	pushq  $0x1
  4003fb:	e9 d0 ff ff ff       	jmpq   4003d0 <.plt>

Disassembly of section .text:

0000000000400400 <_start>:
  400400:	31 ed                	xor    %ebp,%ebp
  400402:	49 89 d1             	mov    %rdx,%r9
  400405:	5e                   	pop    %rsi
  400406:	48 89 e2             	mov    %rsp,%rdx
  400409:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
  40040d:	50                   	push   %rax
  40040e:	54                   	push   %rsp
  40040f:	49 c7 c0 d0 05 40 00 	mov    $0x4005d0,%r8
  400416:	48 c7 c1 60 05 40 00 	mov    $0x400560,%rcx
  40041d:	48 c7 c7 f3 04 40 00 	mov    $0x4004f3,%rdi
  400424:	e8 b7 ff ff ff       	callq  4003e0 <__libc_start_main@plt>
  400429:	f4                   	hlt
  40042a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

0000000000400430 <deregister_tm_clones>:
  400430:	b8 38 10 60 00       	mov    $0x601038,%eax
  400435:	48 3d 38 10 60 00    	cmp    $0x601038,%rax
  40043b:	74 13                	je     400450 <deregister_tm_clones+0x20>
  40043d:	b8 00 00 00 00       	mov    $0x0,%eax
  400442:	48 85 c0             	test   %rax,%rax
  400445:	74 09                	je     400450 <deregister_tm_clones+0x20>
  400447:	bf 38 10 60 00       	mov    $0x601038,%edi
  40044c:	ff e0                	jmpq   *%rax
  40044e:	66 90                	xchg   %ax,%ax
  400450:	c3                   	retq
  400451:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
  400456:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
  40045d:	00 00 00

0000000000400460 <register_tm_clones>:
  400460:	be 38 10 60 00       	mov    $0x601038,%esi
  400465:	48 81 ee 38 10 60 00 	sub    $0x601038,%rsi
  40046c:	48 c1 fe 03          	sar    $0x3,%rsi
  400470:	48 89 f0             	mov    %rsi,%rax
  400473:	48 c1 e8 3f          	shr    $0x3f,%rax
  400477:	48 01 c6             	add    %rax,%rsi
  40047a:	48 d1 fe             	sar    %rsi
  40047d:	74 11                	je     400490 <register_tm_clones+0x30>
  40047f:	b8 00 00 00 00       	mov    $0x0,%eax
  400484:	48 85 c0             	test   %rax,%rax
  400487:	74 07                	je     400490 <register_tm_clones+0x30>
  400489:	bf 38 10 60 00       	mov    $0x601038,%edi
  40048e:	ff e0                	jmpq   *%rax
  400490:	c3                   	retq
  400491:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
  400496:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
  40049d:	00 00 00

00000000004004a0 <__do_global_dtors_aux>:
  4004a0:	80 3d 91 0b 20 00 00 	cmpb   $0x0,0x200b91(%rip)        # 601038 <__TMC_END__>
  4004a7:	75 17                	jne    4004c0 <__do_global_dtors_aux+0x20>
  4004a9:	55                   	push   %rbp
  4004aa:	48 89 e5             	mov    %rsp,%rbp
  4004ad:	e8 7e ff ff ff       	callq  400430 <deregister_tm_clones>
  4004b2:	c6 05 7f 0b 20 00 01 	movb   $0x1,0x200b7f(%rip)        # 601038 <__TMC_END__>
  4004b9:	5d                   	pop    %rbp
  4004ba:	c3                   	retq
  4004bb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
  4004c0:	c3                   	retq
  4004c1:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
  4004c6:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
  4004cd:	00 00 00

00000000004004d0 <frame_dummy>:
  4004d0:	eb 8e                	jmp    400460 <register_tm_clones>

00000000004004d2 <extern_func>:
int extern_var = 3;
int extern_func() {
  4004d2:	55                   	push   %rbp
  4004d3:	48 89 e5             	mov    %rsp,%rbp
    return 30;
  4004d6:	b8 1e 00 00 00       	mov    $0x1e,%eax
}
  4004db:	5d                   	pop    %rbp
  4004dc:	c3                   	retq

00000000004004dd <global_func>:
extern int extern_var;
int global_var = 1;
static int static_var = 2;

extern int extern_func();
int global_func() {
  4004dd:	55                   	push   %rbp
  4004de:	48 89 e5             	mov    %rsp,%rbp
    return 10;
  4004e1:	b8 0a 00 00 00       	mov    $0xa,%eax
}
  4004e6:	5d                   	pop    %rbp
  4004e7:	c3                   	retq

00000000004004e8 <static_func>:

static int static_func() {
  4004e8:	55                   	push   %rbp
  4004e9:	48 89 e5             	mov    %rsp,%rbp
    return 20;
  4004ec:	b8 14 00 00 00       	mov    $0x14,%eax
}
  4004f1:	5d                   	pop    %rbp
  4004f2:	c3                   	retq

00000000004004f3 <main>:

int main() {
  4004f3:	55                   	push   %rbp
  4004f4:	48 89 e5             	mov    %rsp,%rbp
  4004f7:	48 83 ec 20          	sub    $0x20,%rsp
    int var0 = extern_var;
  4004fb:	8b 05 2b 0b 20 00    	mov    0x200b2b(%rip),%eax        # 60102c <extern_var>
  400501:	89 45 fc             	mov    %eax,-0x4(%rbp)
    int var1 = global_var;
  400504:	8b 05 26 0b 20 00    	mov    0x200b26(%rip),%eax        # 601030 <global_var>
  40050a:	89 45 f8             	mov    %eax,-0x8(%rbp)
    int var2 = static_var;
  40050d:	8b 05 21 0b 20 00    	mov    0x200b21(%rip),%eax        # 601034 <static_var>
  400513:	89 45 f4             	mov    %eax,-0xc(%rbp)
    int var3 = extern_func();
  400516:	b8 00 00 00 00       	mov    $0x0,%eax
  40051b:	e8 b2 ff ff ff       	callq  4004d2 <extern_func>
  400520:	89 45 f0             	mov    %eax,-0x10(%rbp)
    int var4 = global_func();
  400523:	b8 00 00 00 00       	mov    $0x0,%eax
  400528:	e8 b0 ff ff ff       	callq  4004dd <global_func>
  40052d:	89 45 ec             	mov    %eax,-0x14(%rbp)
    int var5 = static_func();
  400530:	b8 00 00 00 00       	mov    $0x0,%eax
  400535:	e8 ae ff ff ff       	callq  4004e8 <static_func>
  40053a:	89 45 e8             	mov    %eax,-0x18(%rbp)
    return var0 + var1 + var2 + var3 + var4 + var5;
  40053d:	8b 55 fc             	mov    -0x4(%rbp),%edx
  400540:	8b 45 f8             	mov    -0x8(%rbp),%eax
  400543:	01 c2                	add    %eax,%edx
  400545:	8b 45 f4             	mov    -0xc(%rbp),%eax
  400548:	01 c2                	add    %eax,%edx
  40054a:	8b 45 f0             	mov    -0x10(%rbp),%eax
  40054d:	01 c2                	add    %eax,%edx
  40054f:	8b 45 ec             	mov    -0x14(%rbp),%eax
  400552:	01 c2                	add    %eax,%edx
  400554:	8b 45 e8             	mov    -0x18(%rbp),%eax
  400557:	01 d0                	add    %edx,%eax
}
  400559:	c9                   	leaveq
  40055a:	c3                   	retq
  40055b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000400560 <__libc_csu_init>:
  400560:	41 57                	push   %r15
  400562:	41 89 ff             	mov    %edi,%r15d
  400565:	41 56                	push   %r14
  400567:	49 89 f6             	mov    %rsi,%r14
  40056a:	41 55                	push   %r13
  40056c:	49 89 d5             	mov    %rdx,%r13
  40056f:	41 54                	push   %r12
  400571:	4c 8d 25 a0 08 20 00 	lea    0x2008a0(%rip),%r12        # 600e18 <__frame_dummy_init_array_entry>
  400578:	55                   	push   %rbp
  400579:	48 8d 2d a0 08 20 00 	lea    0x2008a0(%rip),%rbp        # 600e20 <__init_array_end>
  400580:	53                   	push   %rbx
  400581:	4c 29 e5             	sub    %r12,%rbp
  400584:	31 db                	xor    %ebx,%ebx
  400586:	48 c1 fd 03          	sar    $0x3,%rbp
  40058a:	48 83 ec 08          	sub    $0x8,%rsp
  40058e:	e8 15 fe ff ff       	callq  4003a8 <_init>
  400593:	48 85 ed             	test   %rbp,%rbp
  400596:	74 1e                	je     4005b6 <__libc_csu_init+0x56>
  400598:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
  40059f:	00
  4005a0:	4c 89 ea             	mov    %r13,%rdx
  4005a3:	4c 89 f6             	mov    %r14,%rsi
  4005a6:	44 89 ff             	mov    %r15d,%edi
  4005a9:	41 ff 14 dc          	callq  *(%r12,%rbx,8)
  4005ad:	48 83 c3 01          	add    $0x1,%rbx
  4005b1:	48 39 eb             	cmp    %rbp,%rbx
  4005b4:	75 ea                	jne    4005a0 <__libc_csu_init+0x40>
  4005b6:	48 83 c4 08          	add    $0x8,%rsp
  4005ba:	5b                   	pop    %rbx
  4005bb:	5d                   	pop    %rbp
  4005bc:	41 5c                	pop    %r12
  4005be:	41 5d                	pop    %r13
  4005c0:	41 5e                	pop    %r14
  4005c2:	41 5f                	pop    %r15
  4005c4:	c3                   	retq
  4005c5:	90                   	nop
  4005c6:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
  4005cd:	00 00 00

00000000004005d0 <__libc_csu_fini>:
  4005d0:	f3 c3                	repz retq

Disassembly of section .fini:

00000000004005d4 <_fini>:
  4005d4:	48 83 ec 08          	sub    $0x8,%rsp
  4005d8:	48 83 c4 08          	add    $0x8,%rsp
  4005dc:	c3                   	retq