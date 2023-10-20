# CMPSC 200: The `C` of Tranquility

| Date              |          |
|:------------------|:---------|
| 17 October 2023 | Assigned  |
| 27 October 2023| Due, end of lab       |
| Status           | [![GatorGrader](../../actions/workflows/main.yml/badge.svg)](../../actions/workflows/main.yml) |


## Learning objectives

* express familiarity with basic `C` language syntax and language design
* identify and explain instructions written using `C` in disassembled versions of compiled programs
* implement basic data structures (`array`) to create moderately-complex programs
* use loops (`for`) to demonstrate safe use of `C` data structures

## Introduction

### Back to Space Camp

As the saying goes, you have to fly and then come back to Space Camp to learn how to fly all over again. It's really a nifty aphorism.

Because it's true.

Before embarking on our larger mission this week, we have a few areas to cover.

#### `hello_luna`

Complete this work in [hello_luna/main.c](hello_luna/main.c).

We would say world, but _we're on the moon_! So, we need to change our first moonspeak program to reflect our change of locale. Here, we'll learn a bit about the differences between our Earthbound Python and the C of Tranquility.

#### `adder`

Complete this work in [adder/main.c](adder/main.c).

While we didn't want to put you to work right away, it seems that the Space Agency<sup>TM</sup> shipped us everything but a simple calculator. Since you've done a few, you're the expert. Suit up and build us a progressively more challenging calculator which:

* takes an array of numbers
* adds 'em
* outputs the sum

### Lab: Disassembly

Complete this work in [disassembly/main.c](disassembly/main.c).

A long time ago, there was a program that performed a very unique function around this here space station. But, no one remembers what it does _and_ we don't have the technology run it anymore. Word's gotten out that you know how to translate it back to a workable program using our brand new `C` machine. Can you translate the [disassembled file](disassembly/program.dis) for us?

A couple of hints about the program:

* it uses an iterative structure _different than_ the for loop; never fear -- you can find more information about it in our [textbook](https://diveintosystems.org/book/C1-C_intro/conditionals.html#_while_loops)
* this one works a bit differently than other programs like it that you've seen; you'll note a `#2` bootstrapped into the code -- what effect does this have on the other bootstrapped value (i.e. the `#10`)?

#### Note

We can effectively ignore the `s` and `.n` suffixes on our instructions as they mean:

* `s`: update the `xPSR` status with
* `n`: `narrow` (use smaller number presentations, i.e. 16-bit, where advisable)

Both are done so that reassembling this program results in a determinate (i.e. _always the same) from the compiler's
perspective. Our programs handle these automatically. For all intents and purposes, read opcodes as you would have
previously.

### Assignment "Hacks"

See the `Suggestion` below to challenge yourself to implement a Hack. As always, you are allowed to develop
your own Hack to satisfy this stretch goal. Place the code for the Hack inline with the code in the corresponding
file.

In order to recieve credit for the Hack, you must fill out the [hack.md](docs/hack.md) file located in the
`docs` folder.

#### `adder`

While our `adder` performs its basic task well, it is (as the saying goes) only truly valuable if it does _more stuff regardless of the cost_. There are two ways to apply this aphorism to our `adder` (you only have to do one).

##### `averager`

Average a given `array`.

We should be able to give our `adder` an arbitrarily long list of numbers and _not_ need to specify how long the `array` _is_ (i.e. not hard-code the number of values). Use the following array to test your response:

```c
int numbers[100] = {
    4, 10, 47, 68, 71, 92, 66, 17, 14, 25, 99, 96, 18, 72, 89, 15, 29, 61, 52, 81, 27, 70, 41, 30, 31, 8, 21, 83, 11, 20, 32, 60, 48, 90, 67, 58, 19, 82, 33, 24, 23, 73, 2, 28, 98, 44, 74, 40, 7, 94, 3, 51, 36, 26, 38, 85, 63, 43, 49, 75, 80, 53, 87, 54, 9, 5, 100, 64, 95, 84, 78, 93, 79, 76, 86, 16, 62, 12, 97, 6, 55, 42, 46, 77, 35, 37, 88, 1, 91, 45, 59, 34, 50, 57, 56, 39, 69, 22, 13, 65
}
```

##### `multi-function gonkulator`

There's been a long-standing order for our `adder` to do something idiosyncratic. While it may not make sense to you (or, really, anyone), our program should use the following array to do some operations:

```c
/*
    Term 1: multiply every number in the numbers array
    Term 2: divide every number in the numbers array
    Term 3: add to every number in the numbers array
    Term 4: subtract from every number in the numbers array
*/
int terms[4] = {2, 3, 4, 5};
```

Finally, we should print the outcome of this odd and, whatever the opposite of "clever" is, set of operations.

_But_, we need to print the outcome as a `float`, given that one of our operations is a division. Can you do it?

### Changes to files in `.vscode`

Based on your system setup (refer to your `hello-blinky` assignment), you will need switch out the `.vscode` folder in each exercise with the _last working copy_.

See our [wiki's entry  on "Configuring Assignments"](https://github.com/allegheny-college-cmpsc-200-fall-2023/course-materials/wiki/03-Configuring-Assignments)
for more inforamtion.
