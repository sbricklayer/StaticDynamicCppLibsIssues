# StaticDynamicCppLibsIssues
Simple proof of issues when linking static libraries into dynamic libraries on Windows 

If you link a static library into multiple DLLs that are used in the same executable, on Windows there will be multiple instances of the _same_ static variable.

         Executable
          |   | 
         D1   D2
          \   /
            S

See https://stackoverflow.com/questions/37740662/singleton-class-in-a-static-library
