# smalload

**smalload** is a small, educational C kernel designed as a learning project inspired by Andrew S. Tanenbaum’s _Modern Operating Systems_. It aims to implement core OS concepts in a minimalistic, understandable way—starting from scratch in C.

## Purpose

This project is an exploration of operating systems internals from the ground up, with the goal of learning:

- Low-level system programming in **C**
- Fundamental OS concepts like bootloading, memory management, scheduling, and file systems
- How kernels interact with hardware
- How to structure and debug bare-metal software

## Inspired By

This project takes heavy inspiration from Tanenbaum’s _Modern Operating Systems_, following many of the architectural and conceptual models described in the book. While not a direct copy, smalload borrows ideas from educational OS designs like MINIX.

## Features (in progress)

- [ ] Bootable C kernel
- [ ] Simple command-line shell
- [ ] Cooperative multitasking
- [ ] Basic memory management
- [ ] Simple file system (TBD)

## Why C?

C is the language of operating systems. Writing a kernel in C provides:

- Direct memory access and hardware control
- Fine-grained performance management
- An understanding of how abstractions in modern systems are actually implemented
- A deep dive into the guts of how your machine works—without training wheels

