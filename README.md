## Informe sobre Implementación de Shell con ANTLR en C++

# Introducción

Este informe documenta el desarrollo de un intérprete de comandos shell en C++ utilizando ANTLR. El intérprete permite reconocer y ejecutar una serie de comandos típicos de una shell, como listar archivos, cambiar directorios, crear y eliminar archivos y directorios, entre otros.

# Desarrollo

  # Método
  Se utilizó ANTLR para definir una gramática que describe la sintaxis de los comandos shell. A partir de esta gramática, se generó un analizador léxico y sintáctico en C++ utilizando ANTLR. Las reglas de la gramática se asociaron con acciones que implementan la lógica de ejecución de cada comando.

  # Estructura del Código
  Gramática ANTLR: Se definió una gramática en ANTLR que describe la estructura sintáctica de los comandos de la shell.
  Lexer y Parser: ANTLR generó un lexer y un parser basados en la gramática definida.
  ShellCommands: Clase que hereda de ShellBaseVisitor de ANTLR y proporciona la implementación de acciones para cada regla gramatical. Incluye funciones como visitListFiles, visitChangeDirectory, visitMakeDirectory, etc.
  Main: La función main() permite la interacción con el usuario, obteniendo comandos desde la entrada estándar y realizando el análisis y ejecución de los mismos.
  Funcionalidades Implementadas
  Listar Archivos: El comando ls lista los archivos y directorios en el directorio actual.
  Cambiar de Directorio: cd [nombre_directorio] cambia al directorio especificado.
  Crear Directorio: mkdir [nombre_directorio] crea un nuevo directorio.
  Eliminar Archivo/Directorio: rm [nombre_archivo] elimina el archivo especificado.
  Mostrar Texto: echo [texto] imprime el texto en la consola.
  Ejecutar Comando Externo: exec [comando_externo] ejecuta un comando del sistema operativo.
  Crear Archivo: create [nombre_archivo] crea un nuevo archivo vacío.
  Mostrar Fecha y Hora: date y time muestran la fecha y hora actuales respectivamente.
  Copiar y Mover Archivos: cp [archivo_origen] [archivo_destino] y mv [archivo_origen] [archivo_destino] copian y mueven archivos respectivamente.

# Conclusiones

El intérprete de comandos shell implementado demuestra la aplicación de conceptos de análisis léxico y sintáctico en la construcción de un programa funcional. Aunque actualmente admite una serie limitada de comandos, sienta las bases para futuras expansiones y mejoras en términos de funcionalidad y capacidad.