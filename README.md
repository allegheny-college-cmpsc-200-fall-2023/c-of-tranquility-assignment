# CMPSC 200: The `C` of Tranquility

| Date              |          |
|:------------------|:---------|
| 17 October 2023 | Assigned  |
| 27 October 2023| Due, end of lab       |
| Status           | [![GatorGrader](../../actions/workflows/main.yml/badge.svg)](../../actions/workflows/main.yml) |


## Learning objectives

* express familiarity with basic `C` language syntax and language design
* identify and explain instructions written using `C` in disassembled versions of compiled programs
* implement basic data structures (`array`, `struct`) to create moderately-complex programs
* use loops (`for`) to demonstrate safe use of `C` data structures

## Introduction

### Back to Space Camp

As the saying goes, you have to fly and then come back to Space Camp to learn how to fly all over again. It's really a nifty aphorism.

Because it's true.

Before embarking on our larger mission this week, we have a few areas to cover.

#### `hello_luna`

Complete this work in [hello_luna/main.c](hello_luna/main.c).

We would say world, but _we're on the moon! So, we need to change our first moonspeak program to reflect our change of locale. Here, we'll learn a bit about the differences between our Earthbound Python and the C of Tranquility.

#### `adder`

Complete this work in [adder/main.c](adder/main.c) and [docs/dis.md](docs/dis.md).

While we didn't want to put you to work right away, it seems that the Space Agency<sup>TM</sup> shipped us everything but a simple calculator. Since you've done a few, you're the expert. Suit up and build us a progressively more challenging calculator which:

* takes an array of numbers
* adds 'em
* outputs the sum

It's unclear as to whether the code works the same up here, so you'll also need to work through a `.dis` of the file to be sure that it's doing what you say it is. So, you'll need to submit an annotated report of the `.dis` file in `docs`.

#### `classifier`

Complete this work in [classifier/main.c](classifier/main.c).

Most folks would arrive on the moon and laze around in the lunar ocean a bit. Not us! We've been collecting rocks. Of course, you need to catalog them using a `struct`. Heck, we'll even send you out to collect _at least `1` more to test the system and see if it stands up to future development.

### Changes to files in `.vscode`

Based on your system setup (refer to your `hello-blinky` assignment), you will need switch out the `.vscode` folder in each exercise with the _last working copy_.

See our [wiki's entry  on "Configuring Assignments"](https://github.com/allegheny-college-cmpsc-200-fall-2023/course-materials/wiki/03-Configuring-Assignments)
for more inforamtion.
