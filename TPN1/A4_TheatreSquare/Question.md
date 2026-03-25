# A4. Theatre Square

**límite de tiempo por prueba:** 1 segundo  
**límite de memoria por prueba:** 256 megabytes

La Plaza del Teatro en la ciudad capital de Berland tiene una forma rectangular con un tamaño de n * m metros. Con motivo del aniversario de la ciudad, se tomó la decisión de pavimentar la plaza con losas de granito cuadradas. Cada losa es de tamaño a * a.

¿Cuál es el número mínimo de losas necesarias para pavimentar la plaza? Se permite cubrir una superficie mayor que la Plaza del Teatro, pero la plaza debe quedar cubierta. No está permitido romper las losas. Los lados de las losas deben ser paralelos a los lados de la plaza.

### Entrada
La entrada contiene tres números enteros positivos en la primera línea: n, m y a (1 <= n, m, a <= 10^9).

### Salida
Escribe el número necesario de losas.

---

### Ejemplos

| entrada | salida |
| :--- | :--- |
| `6 6 4` | `4` |

---

> **Nota:** Debido a que los valores de entrada pueden ser de hasta 10^9, el resultado puede exceder el rango de un entero de 32 bits. Asegúrate de utilizar tipos de datos de 64 bits (como `long long` en C++ o `long` en Java) para evitar errores de desbordamiento.