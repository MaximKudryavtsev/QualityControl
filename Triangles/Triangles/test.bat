set PROGRAM="%~1"

%PROGRAM% 5 5 5 > output\out1.txt
fc output\out1.txt expected\ex1.txt
if ERRORLEVEL 1 goto err

%PROGRAM% a 5 5 > output\out2.txt
fc output\out2.txt expected\ex2.txt
if ERRORLEVEL 1 goto err

%PROGRAM% -5 5 5 > output\out3.txt
fc output\out3.txt expected\ex3.txt
if ERRORLEVEL 1 goto err

%PROGRAM% 5 0 5 > output\out4.txt
fc output\out4.txt expected\ex4.txt
if ERRORLEVEL 1 goto err

%PROGRAM% 5 4 5 > output\out5.txt
fc output\out5.txt expected\ex5.txt
if ERRORLEVEL 1 goto err

%PROGRAM% 5.5 4.1 5.7 > output\out6.txt
fc output\out6.txt expected\ex6.txt
if ERRORLEVEL 1 goto err

%PROGRAM% 5.5 14.1 5.7 > output\out7.txt
fc output\out7.txt expected\ex7.txt
if ERRORLEVEL 1 goto err

%PROGRAM% 5.5 14.1 > output\out8.txt
fc output\out8.txt expected\ex8.txt
if ERRORLEVEL 1 goto err

%PROGRAM% 5.5 14.1 5.7 7 > output\out9.txt
fc output\out9.txt expected\ex9.txt
if ERRORLEVEL 1 goto err

%PROGRAM% 1.1 2.2 3.3 > output\out10.txt
fc output\out10.txt expected\ex10.txt
if ERRORLEVEL 1 goto err

echo Program test is success
pause
exit 0

:err
echo Program test is failed
pause
exit 1