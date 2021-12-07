
```sh
# 需要在编译.o 文件时打开 -g 选项，否则就只有汇编代码

#  gcc example.c -c -o example.o -fno-PIC -g

#  gcc external.c -c -o external.o -fno-PIC -g

#  gcc external.o example.o -o a.out -no-pie

# 请在 Linux 下面执行,否则 excmple.asm 文件内容会不同
# gcc 版本需要更新，否则 -no-pie 不支持
# objdump -S example.o > excmple.asm


# readelf -S example.o
```

## readelf -S

```sh
readelf -S example.o
```

```
There are 20 section headers, starting at offset 0xaa8:

节头：
  [号] 名称              类型             地址              偏移量
       大小              全体大小          旗标   链接   信息   对齐
  [ 0]                   NULL             0000000000000000  00000000
       0000000000000000  0000000000000000           0     0     0
  [ 1] .text             PROGBITS         0000000000000000  00000040
       000000000000007e  0000000000000000  AX       0     0     1
  [ 2] .rela.text        RELA             0000000000000000  000006d0
       0000000000000078  0000000000000018   I      17     1     8
  [ 3] .data             PROGBITS         0000000000000000  000000c0
       0000000000000008  0000000000000000  WA       0     0     4
  [ 4] .bss              NOBITS           0000000000000000  000000c8
       0000000000000000  0000000000000000  WA       0     0     1
  [ 5] .debug_info       PROGBITS         0000000000000000  000000c8
       0000000000000126  0000000000000000           0     0     1
  [ 6] .rela.debug_info  RELA             0000000000000000  00000748
       0000000000000228  0000000000000018   I      17     5     8
  [ 7] .debug_abbrev     PROGBITS         0000000000000000  000001ee
       00000000000000a4  0000000000000000           0     0     1
  [ 8] .debug_aranges    PROGBITS         0000000000000000  00000292
       0000000000000030  0000000000000000           0     0     1
  [ 9] .rela.debug_arang RELA             0000000000000000  00000970
       0000000000000030  0000000000000018   I      17     8     8
  [10] .debug_line       PROGBITS         0000000000000000  000002c2
       000000000000006b  0000000000000000           0     0     1
  [11] .rela.debug_line  RELA             0000000000000000  000009a0
       0000000000000018  0000000000000018   I      17    10     8
  [12] .debug_str        PROGBITS         0000000000000000  0000032d
       00000000000000c3  0000000000000001  MS       0     0     1
  [13] .comment          PROGBITS         0000000000000000  000003f0
       000000000000002d  0000000000000001  MS       0     0     1
  [14] .note.GNU-stack   PROGBITS         0000000000000000  0000041d
       0000000000000000  0000000000000000           0     0     1
  [15] .eh_frame         PROGBITS         0000000000000000  00000420
       0000000000000078  0000000000000000   A       0     0     8
  [16] .rela.eh_frame    RELA             0000000000000000  000009b8
       0000000000000048  0000000000000018   I      17    15     8
  [17] .symtab           SYMTAB           0000000000000000  00000498
       00000000000001e0  0000000000000018          18    15     8
  [18] .strtab           STRTAB           0000000000000000  00000678
       0000000000000055  0000000000000000           0     0     1
  [19] .shstrtab         STRTAB           0000000000000000  00000a00
       00000000000000a8  0000000000000000           0     0     1
Key to Flags:
  W (write), A (alloc), X (execute), M (merge), S (strings), I (info),
  L (link order), O (extra OS processing required), G (group), T (TLS),
  C (compressed), x (unknown), o (OS specific), E (exclude),
  l (large), p (processor specific)
```

## readelf -r 

```sh
readelf -r example.o
```

```
重定位节 '.rela.text' at offset 0x6d0 contains 5 entries:
  偏移量          信息           类型           符号值        符号名称 + 加数
000000000020  001200000002 R_X86_64_PC32     0000000000000000 extern_var - 4
000000000029  000f00000002 R_X86_64_PC32     0000000000000000 global_var - 4
000000000032  000300000002 R_X86_64_PC32     0000000000000000 .data + 0
00000000003f  001300000002 R_X86_64_PC32     0000000000000000 extern_func - 4
00000000004c  001000000002 R_X86_64_PC32     0000000000000000 global_func - 4
```
