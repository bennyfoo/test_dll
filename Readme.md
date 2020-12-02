# 静态链接库
## Windows下相关文件
*.lib *.h
## Linux下相关文件
*.a

# 动态链接库
## Windows下相关文件
*.dll *.lib *.h

## Linux下相关文件
*.so *.h

## 扩展指令
Visual Studio编译器使用  __declspec
GNU编译器使用 \_\_attribute\_\_

## __declspec(dllexport)

声明一个导出函数，是说这个函数要从本DLL导出。我要给别人用。一般用于dll中
省掉在DEF文件中手工定义导出哪些函数的一个方法。当然，如果你的DLL里全是C++的类的话，你无法在DEF里指定导出的函数，只能用__declspec(dllexport)导出类

## __declspec(dllimport)

声明一个导入函数，是说这个函数是从别的DLL导入。我要用。一般用于使用某个dll的exe中
不使用 __declspec(dllimport) 也能正确编译代码，但使用 __declspec(dllimport) 使编译器可以生成更好的代码。编译器之所以能够生成更好的代码，是因为它可以确定函数是否存在于 DLL 中，这使得编译器可以生成跳过间接寻址级别的代码，而这些代码通常会出现在跨 DLL 边界的函数调用中。但是，必须使用 __declspec(dllimport) 才能导入 DLL 中使用的变量。

dllimport是为了更好的处理类中的静态成员变量(或者其他...)的，如果没有静态成员变量(或者其他...)，那么这个__declspec(dllimport)可以不使用。

例子中使用了静态成员变量m_nValue,但是不使用__declspec(dllimport)，项目link的时候会告诉你找不到m_nValue。

## 生成后事件

 xcopy $(ProjectDir)xxxx\xxxx.dll $(SolutionDir)yyyy\yyyy.dll  /y