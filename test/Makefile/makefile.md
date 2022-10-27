Popular C/C++ alternative build systems are SCons, CMake, Bazel, and Ninja. Some code editors like Microsoft Visual Studio have their own built in build tools. For Java, there's Ant, Maven, and Gradle. Other languages like Go and Rust have their own build tools.

Interpreted languages like Python, Ruby, and Javascript don't require an analogue to Makefiles. The goal of Makefiles is to compile whatever files need to be compiled, based on what files have changed. But when files in interpreted languages change, nothing needs to get recompiled. When the program runs, the most recent version of the file is used.

targets: prerequisites
	command
	command
	command

The targets are file names, separated by spaces. Typically, there is only one per rule.
The commands are a series of steps typically used to make the target(s). These need to start with a tab character, not spaces.
The prerequisites are also file names, separated by spaces. These files need to exist before the commands for the target are run. These are also called dependencies

Make is a program that helps you build other programs. It does this by keeping track of which files have been changed, and only recompiling the files that need to be recompiled. it uses filesystem timestamps as a proxy to determine if something has changed.

In order to help you build a makefile, I would need the following information:

-The name of the source code files that you want to compile (Source code files typically have a ".c" extension.)
-The name of the header files that you want to include
-The name of the libraries that you want to link