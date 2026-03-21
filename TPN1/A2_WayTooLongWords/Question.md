# A2. Palabras Demasiado Largas
**Límite de tiempo:** 1 segundo  
**Límite de memoria:** 256 megabytes

---

### Descripción
A veces, palabras como "localization" o "internationalization" son tan largas que escribirlas muchas veces en un mismo texto resulta bastante cansado.

Consideremos una palabra **demasiado larga** si su longitud es **estrictamente mayor a 10 caracteres**. Todas las palabras demasiado largas deben ser reemplazadas por una abreviatura especial.

Esta abreviatura se genera de la siguiente manera: escribimos la primera y la última letra de la palabra, y entre ellas escribimos el número de letras que hay entre la primera y la última. Ese número está en sistema decimal y no contiene ceros a la izquierda.

Así, "localization" se escribirá como **"l10n"**, e "internationalization" se escribirá como **"i18n"**.

Tu tarea es automatizar el proceso de cambiar las palabras por abreviaturas. Todas las palabras demasiado largas deben ser reemplazadas; las palabras que no sean demasiado largas no deben sufrir ningún cambio.

### Entrada
La primera línea contiene un número entero **$n$** ($1 \le n \le 100$). Cada una de las siguientes $n$ líneas contiene una palabra. Todas las palabras consisten en letras latinas minúsculas y tienen una longitud de entre 1 y 100 caracteres.

### Salida
Imprime $n$ líneas. La $i$-ésima línea debe contener el resultado de reemplazar la $i$-ésima palabra de los datos de entrada.

---

### Ejemplos


| Entrada | Salida |
| :--- | :--- |
| 4 <br> word <br> localization <br> internationalization <br> pneumonoultramicroscopicsilicovolcanoconiosis | word <br> l10n <br> i18n <br> p43s |