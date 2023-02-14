1. compilation error - unresolved externals:
	compiler compiles only the main.c class, without the headers and their implementations
	Solution: edit "tasks.json" file to include the externals
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
	
	->
	
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

2. compilation error - esw_subtract is not defined
	Solution: define the esw_subtract method in subtraction.c