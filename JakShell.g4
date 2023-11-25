grammar JakShell;

command : listFiles
        | changeDirectory
        | makeDirectory
        | ifStatement
        | forLoop
        | printText
        | echoText
        | removeFile
        | copyFile
        | moveFile
        | listProcesses
        | killProcess
        | executeCommand
        | listUsers
        | showDate
        | showTime
        | createFile
        | appendToFile
        ;

listFiles : 'ls';
changeDirectory : 'cd' ID;
makeDirectory : 'mkdir' ID;
ifStatement : 'if' condition 'then' commands 'else' commands 'end';
forLoop : 'for' ID 'in' ID '..' ID 'do' commands 'end';
printText : 'print' STRING;
echoText : 'echo' STRING;
removeFile : 'rm' ID;
copyFile : 'cp' ID ID;
moveFile : 'mv' ID ID;
listProcesses : 'ps';
killProcess : 'kill' ID;
executeCommand : ID (STRING|ID)*;
listUsers : 'who';
showDate : 'date';
showTime : 'time';
createFile : 'touch' ID;
appendToFile : 'echo' STRING '>>' ID;

condition : ID ('==' | '!=' | '>' | '<') ID;
commands : command+;

ID      : [a-zA-Z]+ ;
STRING  : '"' .*? '"' ;
WS      : [ \t\r\n]+ -> skip ;
