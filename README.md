Simple Shell Project
Project Description

This project is a collaboration as a part of the ALX curriculum. The project involves creating a simple UNIX command interpreter (shell) that runs command line instructions for users.
Project Requirements

    Files compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
    All files should end with a new line
    Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
    Shell should not have any memory leaks
    No more than 5 functions per file
    All header files should be include guarded
    Use system calls only when necessary
    A README.md file, at the root of the folder of the project is mandatory
    Write a README with the description of the project
    Have an AUTHORS file at the root of the repository, listing all individuals having contributed content to the repository
    Your program must have the exact same output as sh (/bin/sh) as well as the exact same error output.

Project Concepts

For this project, we expect you to look at these concepts:

    Everything you need to know to start coding your own shell
    Approaching a Project

Project Tasks

    Write a simple UNIX command interpreter.
    Implement built-in functions
    Handle commands with arguments
    Handle the PATH
    Implement the exit built-in, that exits the shell
    Handle Ctrl+C: your shell should not quit when the user inputs ^C
    Implement the env built-in, that prints the current environment

Learning Objectives

At the end of this project, we expect you to be able to answer the following questions:

    Who designed and implemented the original Unix operating system?
    Who wrote the first version of the UNIX shell?
    Who invented the B programming language (the direct predecessor to the C programming language)?
    Who is Ken Thompson?
    How does a shell work?
    What is a pid and a ppid?
   How to manipulate the environment of the current process?
    What is the difference between a function and a system call?
    How to create processes?
    What are the three prototypes of main?
    How does the shell use the PATH to find the programs?
    How to execute another program with the execve system call?
    How to suspend the execution of a process until one of its children terminates?
    What is EOF / "end-of-file"?

Project Timeline

    Project to be done in teams of 2 people (your team: Thokozile Masilela, Kelvin Atandi)
    Project will start Apr 12, 2023 3:00 AM, must end by Apr 27, 2023 3:00 AM
    Checker will be released at Apr 25, 2023 10:12 PM
    An auto review will be launched at the deadline

Project Directory Structure

    holberton-system_engineering-devops/0x16-c_simple_shell/ - this is the root directory
    README.md - this file
    shell.h - header file
    AUTHORS - list of contributors to the repository
    man_1_simple_shell - man page of our shell
    main.c - main function that runs the shell
    shell_helpers_1.c - helper functions related to string manipulation and error handling
    shell_helpers_2.c - helper functions related to memory allocation and the environment
    shell_helpers_3.c - helper functions related to built-in commands and handling execution of commands
    shell_execute.c - function
    Output

Your program must have the same output as sh (/bin/sh) as well as the exact same error output unless specified otherwise. The only difference is when you print an error, the name of the program must be equivalent to your argv[0].

List of allowed functions and system calls:

    access (man 2 access)
    chdir (man 2 chdir)
    close (man 2 close)
    closedir (man 3 closedir)
    execve (man 2 execve)
    exit (man 3 exit)
    _exit (man 2 _exit)
    fflush (man 3 fflush)
    fork (man 2 fork)
    free (man 3 free)
    getcwd (man 3 getcwd)
    getline (man 3 getline)
    getpid (man 2 getpid)
    isatty (man 3 isatty)
    kill (man 2 kill)
    malloc (man 3 malloc)
    open (man 2 open)
    opendir (man 3 opendir)
    perror (man 3 perror)
    read (man 2 read)
    readdir (man 3 readdir)
    signal (man 2 signal)
    stat (__xstat) (man 2 stat)
    lstat (__lxstat) (man 2 lstat)
    fstat (__fxstat) (man 2 fstat)
    strtok

Concepts

To complete this project, you should familiarize yourself with the following concepts:

    Everything you need to know to start coding your shell
    Approaching a Project
