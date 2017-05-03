# X11_paste_from_C

- [Intro](#intro)
- [Prerequisites](#prerequisites)
- [Running](#running)

Intro
-----

This is a quick demo showing how to simulate a Ctrl-V (paste) command from
a C program. After the program has been run it waits for a given amount of
time (by default 5s) and sends a paste shortcut to the GUI application
where the mouse cursor is (when the timeout has expired).

Prerequisites
-------------

This program can **only** be run under a UNIX-like OS using X Window System as
a GUI environment. Before running the demo make sure you install all the
dependencies by typing in a terminal the following commands:

    sudo apt-get update; sudo apt-get upgrade
    sudo apt-get install xdotool libxdo-dev libxdo[0-9] libx11-dev

Running
-------

To run the demo type the following commands in a terminal:

    make build
    make run

You can modify the timeout in the paste.c file (default 5s).
In order to clean up run:

    make clean

Enjoy!


    
