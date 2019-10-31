#!/usr/bin/env bash

#configs
appname="x11terminal"
dirbuild="$PWD/buildout"
dirbuildexe="$dirbuild/exe"
dirsrc="$PWD/src"
#end configs

source "$PWD/build_scripts/_.functions.sh"



if [ "$1" = "--make" ] || [ "$1" = "make" ]; then
    printf "\n"
	fn_dirEnsureClear "$dirbuildexe"
	fn_echobold "Creating obj file from $appname.c"
	cmd="cc -c -g -std=c99 -pedantic -Wall -Wvariadic-macros -Os -I. -I/usr/include -I/usr/include/X11 -I/usr/include/freetype2 -I/usr/include/libpng16 -I/usr/include/freetype2 -I/usr/include/libpng16 -I/usr/include/freetype2 -I/usr/include/libpng16 -DVERSION=\"0.6\" -D_XOPEN_SOURCE=600 $dirsrc/$appname.c -o $dirbuildexe/$appname.o"
	printf "\n"
	echo $cmd
	$cmd
	fn_stoponerror "$?" $LINENO
	
	printf "\n"
	fn_echobold "Compiling executable"
	cmd="cc -o $dirbuildexe/$appname $dirbuildexe/$appname.o -g -L/usr/lib -lc -L/usr/lib/X11 -lm -lrt -lX11 -lutil -lXft -lXrender -lfontconfig -lfreetype -lfreetype"
	printf "\n"
	echo $cmd
	$cmd
	fn_stoponerror "$?" $LINENO	
	printf "\n"
		
	if [ "$2" = "--run" ] || [ "$2" = "run" ]; then
		fn_echobold "Running executable."		
		fn_run "$dirbuild/exe/$appname"
		fn_stoponerror "$?" $LINENO
	elif [ "$2" = "--rund" ] || [ "$2" = "rund" ]; then
		fn_echobold "Running executable detached from terminal."	
	    fn_rundetached "$dirbuild/exe/$appname"
		fn_stoponerror "$?" $LINENO
	else
		fn_echobold "Wrong argument."
		fn_usagehelp
	fi


elif [ "$1" = "--clean" ] || [ "$1" = "clean" ]; then 
    rm -rf $dirbuild
    mkdir -p $dirbuild


elif [ "$1" = "--help" ] || [ "$1" = "help" ]; then 
    fn_usagehelp	


else
    fn_echobold "Wrong argument."
	fn_usagehelp
fi