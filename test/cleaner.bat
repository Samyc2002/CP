forfiles -p "C:\projects\test" -s -m *.exe* /D -0 /C "cmd /c del @path"
forfiles -p "C:\projects\test" -s -m *.out* /D -0 /C "cmd /c del @path"