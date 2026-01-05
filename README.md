# Eboo: The Witch Bug

A graphical experiment in C++ using the SSDL library.
Based on examples from "C++20 for Lazy Programmers", but heavily modified (and enchanted).

## About
Meet **Eboo** - a Cyber-Witch entity living in a wireframe world. 

Initially, the bug suffered from graphical glitches due to library limitations (code examples built with Windows platform in mind). Instead of fixing the library, we embraced the **Neon Wireframe Aesthetic**.

## Features ✨
* **The Witch Hat:** A transparent, force-field style hat protecting the bug from bad code.
* **The Look:** Added pupils for that "I have seen the void" stare.
* **The "Lobotomy" Algorithm:**
    Since SSDL cannot draw filled triangles, the hat was transparent, revealing the bug's forehead.
    **Solution:** Implemented a custom rasterization loop (`for` loop) that acts as a "black eraser," masking the top of the head before drawing the hat.

## Tech Stack 🛠️
* **Language:** C++20
* **Library:** SSDL (Simple SDL Wrapper)
* **Platform:** macOS Tahoe 26.1 (Apple Silicon)

## How to Run
(Requires SSDL library installed and linked)

```bash
make
./a.out
