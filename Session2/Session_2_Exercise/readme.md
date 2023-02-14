# Exercise 2.1

Resolve issues with provided code so it runs and compiles correctly.

## Solutions
1. Compilation error - unresolved externals:
	compiler compiles only the main.c class, without the externals
	<details>
	    <summary> Solution: edit "tasks.json" file to include the externals </summary>


	Change

		"tasks": [
		{
		    "type": "cppbuild",
		    "label": "C/C++: cl.exe build active file",
		    "command": "cl.exe",
		    "args": [
			"/Zi",
			"/EHsc",
			"/nologo",
			"/Fe${fileDirname}\\${fileBasenameNoExtension}.exe",
			"${file}"
		    ],
		    ...
	to

		 "tasks": [
		{
		    "type": "cppbuild",
		    "label": "C/C++: cl.exe build active file",
		    "command": "cl.exe",
		    "args": [
			"/Zi",
			"/EHsc",
			"/nologo",
			"/Fe${fileDirname}\\${fileBasenameNoExtension}.exe",
			"*.c"
		    ],
		    ...
	</details>

2. Compilation error - esw_subtract is not defined
   Solution: define the esw_subtract method in subtraction.c
