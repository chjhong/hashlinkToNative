# Haxe project

This is an example Haxe project scaffolded by Visual Studio Code.

Without further changes the structure is following:

 * `src/Main.hx`: Entry point Haxe source file
 * `build.hxml`: Haxe command line file used to build the project
 * `README.md`: This file

## MSBUILD
 
>
 `cl out/main.c libhl.lib ui.lib openal.lib fmt.lib directx.lib /O2 /I out /I ./hashlink-1.8/src /link /LIBPATH:./hl-1.8.0-win /OUT:main.exe`
