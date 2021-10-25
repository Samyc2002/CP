forfiles -p "C:\projects\Codeforces\Problemset" -s -m *.exe* /D -0 /C "cmd /c del @path"
forfiles -p "C:\projects\Codeforces\Problemset" -s -m *.out* /D -0 /C "cmd /c del @path"