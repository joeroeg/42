# 42

- The targets are file names, separated by spaces. Typically, there is only one per rule.
- The commands are a series of steps typically used to make the target(s). These need to start with a tab character, not spaces.
- The prerequisites are also file names, separated by spaces. These files need to exist before the commands for the target are run. These are also called dependencies

it's important to understand: let's say you have a target named "hello" that creates a file called "hello". When you run the "hello" target, it will create a file called "hello". When you run a target, it creates a file with the same name as the target.

blah: blah.c
	cc blah.c -o blah

The following Makefile ultimately runs all three targets. When you run make in the terminal, it will build a program called blah in a series of steps:

- Make selects the target blah, because the first target is the default target
- blah requires blah.o, so make searches for the blah.o target
- blah.o requires blah.c, so make searches for the blah.c target
- blah.c has no dependencies, so the echo command is run
- The cc -c command is then run, because all of the blah.o dependencies are finished
- The top cc command is run, because all the blah dependencies are finished
- That's it: blah is a compiled c program

## Make clean

some_file: (after : should be empty because it means that you don't have dependencies)
	touch some_file

clean:
	rm -f some_file

It's a target that is not first (the default), and not a prerequisite. That means it'll never run unless you explicitly call make clean

## Variables


## Syntax
- A Makefile consists of a set of rules. A rule generally looks like this:
targets: prerequisites
	command
	command
	command
	- The targets are file names, separated by spaces. Typically, there is only one per rule.
	- The commands need to start with a tab character, not spaces.
	- The prerequisites are also file names, separated by spaces.
- Reference variables using either ${} or $()
- Single or double quotes have no meaning to Make. They are simply characters that are assigned to the variable. a := one two OR b := 'one two'
- The all target Making multiple targets and you want all of them to run? Make an all target. Since this is the first rule listed, it will run by default if make is called without specifying a target.
all: one two three

one:
	touch one
two:
	touch two
three:
	touch three

clean:
	rm -f one two three
- 