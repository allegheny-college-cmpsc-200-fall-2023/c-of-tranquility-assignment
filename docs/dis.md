# .dis respect

Annotate the following disassembled version of [adder/main.c](../adder/main.c) using `@` comments, consistent with
how we programmed ARMv6 assembly up to this point. You'll note that the `add` function is done for you as an example.

As discussed in class, we can ignore the `s` and `.n` suffixes on our instructions as they mean:

* `s`: update the `xPSR` status with
* `n`: `narrow` (use smaller number presentations, i.e. 16-bit, where advisable)

Both are done so that reassembling this program results in a determinate (i.e. _always the same) from the compiler's
perspective. Our programs handle these automatically. For all intents and purposes, read opcodes as you would have
previously.

## The biggest .dis

```assembly
10000354 <add>:
10000354:	1840      	adds	r0, r0, r1                  @ add int a and int b
10000356:	4770      	bx	lr                              @ branch and eXecute (return) to main

10000358 <main>:
10000358:	b570      	push	{r4, r5, r6, lr}            @ TODO: The rest
1000035a:	b08a      	sub	sp, #40	; 0x28
1000035c:	f003 feba 	bl	100040d4 <stdio_init_all>
10000360:	4669      	mov	r1, sp
10000362:	4813      	ldr	r0, [pc, #76]	; (100003b0 <main+0x58>)
10000364:	000b      	movs	r3, r1
10000366:	0002      	movs	r2, r0
10000368:	ca13      	ldmia	r2!, {r0, r1, r4}
1000036a:	c313      	stmia	r3!, {r0, r1, r4}
1000036c:	ca13      	ldmia	r2!, {r0, r1, r4}
1000036e:	c313      	stmia	r3!, {r0, r1, r4}
10000370:	ca13      	ldmia	r2!, {r0, r1, r4}
10000372:	c313      	stmia	r3!, {r0, r1, r4}
10000374:	6812      	ldr	r2, [r2, #0]
10000376:	601a      	str	r2, [r3, #0]
10000378:	2400      	movs	r4, #0
1000037a:	2500      	movs	r5, #0
1000037c:	2c09      	cmp	r4, #9
1000037e:	dc13      	bgt.n	100003a8 <main+0x50>
10000380:	00a3      	lsls	r3, r4, #2
10000382:	466a      	mov	r2, sp
10000384:	589e      	ldr	r6, [r3, r2]
10000386:	3401      	adds	r4, #1
10000388:	230a      	movs	r3, #10
1000038a:	0022      	movs	r2, r4
1000038c:	0031      	movs	r1, r6
1000038e:	4809      	ldr	r0, [pc, #36]	; (100003b4 <main+0x5c>)
10000390:	f003 fe94 	bl	100040bc <__wrap_printf>
10000394:	0031      	movs	r1, r6
10000396:	0028      	movs	r0, r5
10000398:	f7ff ffdc 	bl	10000354 <add>
1000039c:	0005      	movs	r5, r0
1000039e:	0001      	movs	r1, r0
100003a0:	4805      	ldr	r0, [pc, #20]	; (100003b8 <main+0x60>)
100003a2:	f003 fe8b 	bl	100040bc <__wrap_printf>
100003a6:	e7e9      	b.n	1000037c <main+0x24>
100003a8:	2000      	movs	r0, #0
100003aa:	b00a      	add	sp, #40	; 0x28
100003ac:	bd70      	pop	{r4, r5, r6, pc}
100003ae:	46c0      	nop							@ return 0;
100003b0:	100069e8 	.word	0x100069e8
100003b4:	10006a10 	.word	0x10006a10
100003b8:	10006a20 	.word	0x10006a20
```
