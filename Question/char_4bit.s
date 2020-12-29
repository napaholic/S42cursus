	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 15	sdk_version 10, 15
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$96, %rsp
	movl	$0, -4(%rbp)
	movl	%edi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	$-3, -24(%rbp)
	movl	$1, -28(%rbp)
	movl	$70, -32(%rbp)
	movq	-24(%rbp), %rsi
	leaq	L_.str(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movq	-24(%rbp), %rcx
	movq	%rcx, -40(%rbp)
	movq	-24(%rbp), %rcx
	movq	%rcx, -48(%rbp)
	movq	-40(%rbp), %rsi
	leaq	L_.str.1(%rip), %rdi
	movl	%eax, -56(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	movq	-48(%rbp), %rsi
	leaq	L_.str.2(%rip), %rdi
	movl	%eax, -60(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str.3(%rip), %rdi
	movl	%eax, -64(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
LBB0_1:                                 ## =>This Inner Loop Header: Depth=1
	movl	-32(%rbp), %eax
	movl	%eax, %ecx
	addl	$-1, %ecx
	movl	%ecx, -32(%rbp)
	cmpl	$0, %eax
	je	LBB0_6
## %bb.2:                               ##   in Loop: Header=BB0_1 Depth=1
	movslq	-28(%rbp), %rax
	andq	-40(%rbp), %rax
	cmpq	$0, %rax
	je	LBB0_4
## %bb.3:                               ##   in Loop: Header=BB0_1 Depth=1
	leaq	L_.str.4(%rip), %rdi
	movb	$0, %al
	callq	_printf
	jmp	LBB0_5
LBB0_4:                                 ##   in Loop: Header=BB0_1 Depth=1
	leaq	L_.str.5(%rip), %rdi
	movb	$0, %al
	callq	_printf
LBB0_5:                                 ##   in Loop: Header=BB0_1 Depth=1
	movq	-40(%rbp), %rax
	sarq	$1, %rax
	movq	%rax, -40(%rbp)
	jmp	LBB0_1
LBB0_6:
	movl	$1, -28(%rbp)
	movl	$70, -32(%rbp)
	leaq	L_.str.6(%rip), %rdi
	movb	$0, %al
	callq	_printf
	leaq	L_.str.3(%rip), %rdi
	movl	%eax, -68(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
LBB0_7:                                 ## =>This Inner Loop Header: Depth=1
	movl	-32(%rbp), %eax
	movl	%eax, %ecx
	addl	$-1, %ecx
	movl	%ecx, -32(%rbp)
	cmpl	$0, %eax
	je	LBB0_12
## %bb.8:                               ##   in Loop: Header=BB0_7 Depth=1
	movslq	-28(%rbp), %rax
	andq	-48(%rbp), %rax
	cmpq	$0, %rax
	je	LBB0_10
## %bb.9:                               ##   in Loop: Header=BB0_7 Depth=1
	leaq	L_.str.4(%rip), %rdi
	movb	$0, %al
	callq	_printf
	jmp	LBB0_11
LBB0_10:                                ##   in Loop: Header=BB0_7 Depth=1
	leaq	L_.str.5(%rip), %rdi
	movb	$0, %al
	callq	_printf
LBB0_11:                                ##   in Loop: Header=BB0_7 Depth=1
	movq	-48(%rbp), %rax
	shrq	$1, %rax
	movq	%rax, -48(%rbp)
	jmp	LBB0_7
LBB0_12:
	leaq	L_.str.7(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movq	-40(%rbp), %rcx
	cmpq	-48(%rbp), %rcx
	sete	%dl
	andb	$1, %dl
	movzbl	%dl, %esi
	leaq	L_.str.8(%rip), %rdi
	movl	%eax, -72(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str.9(%rip), %rdi
	movl	%eax, -76(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	movb	$12, -49(%rbp)
	leaq	L_.str.10(%rip), %rdi
	movl	%eax, -80(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	movb	$-127, -50(%rbp)
	movsbl	-49(%rbp), %esi
	leaq	L_.str.11(%rip), %rdi
	movl	%eax, -84(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	movzbl	-50(%rbp), %esi
	leaq	L_.str.11(%rip), %rdi
	movl	%eax, -88(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	movsbl	-49(%rbp), %esi
	movzbl	-50(%rbp), %r8d
	cmpl	%r8d, %esi
	sete	%dl
	andb	$1, %dl
	movzbl	%dl, %esi
	leaq	L_.str.11(%rip), %rdi
	movl	%eax, -92(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	movl	-4(%rbp), %esi
	movl	%eax, -96(%rbp)         ## 4-byte Spill
	movl	%esi, %eax
	addq	$96, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"\n==pure long long int a = %lld ==\n"

L_.str.1:                               ## @.str.1
	.asciz	"tmp1 : %lld\n"

L_.str.2:                               ## @.str.2
	.asciz	"tmp2 : %lld\n"

L_.str.3:                               ## @.str.3
	.asciz	"-----------------\n"

L_.str.4:                               ## @.str.4
	.asciz	"1"

L_.str.5:                               ## @.str.5
	.asciz	"0"

L_.str.6:                               ## @.str.6
	.asciz	"\n"

L_.str.7:                               ## @.str.7
	.asciz	"\n-----------------\n"

L_.str.8:                               ## @.str.8
	.asciz	"%d"

L_.str.9:                               ## @.str.9
	.asciz	"\n--------------------ddd--\n"

L_.str.10:                              ## @.str.10
	.asciz	"\n--------------------aaa--\n"

L_.str.11:                              ## @.str.11
	.asciz	"%d\n"

.subsections_via_symbols
