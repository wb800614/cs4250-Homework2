# This sample Makefile allows you to make an OpenGL application
#   whose source is exactly one .c file or one .cc file under Solaris.
#   check the location of the X libraries on your implementation.
#
# To use this Makefile, you type:
#
#        make xxxx
#                  
# where
#       xxxx.cc is the name of the c++-file you wish to compile 
#  or 
#       xxxx.c is the name of the c-file you wish to compile 
#       
# A binary named xxxx will be produced
# Libraries are assumed to be in the default search paths
# as are any required include files

#
# Modified by Prof. Chelberg to also allow you to make from a single
# c++ source file.  So if xxxx.cc is the sourcefile, you type make
# xxxx to produce the binary file.

# last-modified: Mon Sep 17 15:17:00 2012

# Assumes the following file exists in the proper place.
include /Users/wesleybook/Desktop/Fall2018/cs4250/setup/Makefile.defs 

# Next line says what options to use to compile programs
OPTIONS+=-Wall

OBJECTS = $(patsubst %.cc,%,$(wildcard *.cc))

all: cube2 run

common.o: common.cc common.h
	$(CC) common.cc -c $(OPTIONS)
cube2: common.o common.h hauntedhouse.cc house.o scene.o
	$(CC)  hauntedhouse.cc common.o house.o scene.o  $(InitShader) $(OPTIONS) $(LDLIBS) -o hauntedhouse
house.o: house.h house.cc
	$(CC) house.cc -c $(OPTIONS)
scene.o: scene.h scene.cc
	$(CC) scene.cc -c $(OPTIONS)
run:
	./hauntedhouse
clean:
	rm -f $(OBJECTS) *~ house.o common.o scene.o
	rm -rf  hauntedhouse.dsym
