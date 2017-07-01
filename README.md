# simply::utility

A small C++ helper library.

## use

Add the [simply.utility](http://www.nuget.org/packages/simply.utility) NuGet package to your Visual C++ 
Native Unit Test project with the [Package Manager Dialog](http://docs.nuget.org/consume/Package-Manager-Dialog) or 
the [Package Manager Console](http://docs.nuget.org/consume/package-manager-console).
``` PowerShell
Install-Package simply.utility
```

Include the library header and use its namespace.
``` C++
#include <simply/utility.h>
using namespace simply;
```

Use the library.
``` C++
static int value { 42 };
temporary<int> replacement { value, 7 };
```

## build

[![Build status](https://ci.appveyor.com/api/projects/status/github/olegsych/simply.utility?branch=master)](https://ci.appveyor.com/project/olegsych/simply-utility/branch/master)

From [Visual Studio 2017](https://www.visualstudio.com/downloads):
- Open `simply.utility.sln`
- Select _Build Solution_ from the _Build_ menu
- To switch build between `x86` and `x64` platforms, select _Configuration Manager_ from the _Build_ menu and change the _Active Solution Configuration_

From [Developer Command Prompt for VS2017](https://docs.microsoft.com/en-us/dotnet/framework/tools/developer-command-prompt-for-vs):
```
msbuild simply.utility.sln /p:Platform=x86
msbuild simply.utility.sln /p:Platform=x64
```

## test

From Visual Studio 2017:
- Select _Run_ / _All Tests_ from the _Test_ menu
- To switch test execution between `x86` and `x64` platform, select _Test Settings_ from the _Test_ menu and change the _Default Processor Architecture_.

From Developer Command Prompt for VS2017:
```
vstest.console bin\debug\Win32\test.dll /Platform:x86
vstest.console bin\debug\x64\test.dll /Platform:x64 /inIsolation
```