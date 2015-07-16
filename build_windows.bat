call "%programfiles(x86)%\Microsoft Visual Studio 14.0\VC\vcvarsall.bat" x86
cd libs/openFrameworksCompiled/project/vs
msbuild /p:Configuration=Release_profiling;Platform=Win32 openframeworksLib.sln
msbuild /p:Configuration=Release;Platform=Win32 openframeworksLib.sln