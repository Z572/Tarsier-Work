	.file	"read-thread-pointer.c"
	.option nopic
	.text
	.align	2
	.globl	get_tp
	.type	get_tp, @function
get_tp:
	addi	sp,sp,-16
	sd	s0,8(sp)
	addi	s0,sp,16
	mv	a5,tp
	mv	a0,a5
	ld	s0,8(sp)
	addi	sp,sp,16
	jr	ra
	.size	get_tp, .-get_tp
	.section	.note.GNU-stack,"",@progbits
