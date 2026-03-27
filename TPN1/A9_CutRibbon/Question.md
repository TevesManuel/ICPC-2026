# A9. Cut Ribbon

**límite de tiempo por prueba:** 1 segundo  
**límite de memoria por prueba:** 256 megabytes

Polycarpus tiene una cinta de longitud $n$. Él quiere cortar la cinta de manera que se cumplan las siguientes dos condiciones:

* Después del corte, cada pieza de cinta debe tener una longitud $a, b$ o $c$.
* Después del corte, el número de piezas de cinta debe ser el máximo posible.

Ayuda a Polycarpus y encuentra el número de piezas de cinta después del corte requerido.

### Entrada
La primera línea contiene cuatro enteros separados por espacios $n, a, b$ y $c$ ($1 \le n, a, b, c \le 4000$) — la longitud de la cinta original y las longitudes aceptables de las piezas de cinta después del corte, respectivamente. Los números $a, b$ y $c$ pueden coincidir.

### Salida
Imprime un solo número — el máximo número posible de piezas de cinta. Se garantiza que existe al menos un corte de cinta correcto.

---

### Ejemplos

| entrada | salida |
| :--- | :--- |
| `5 5 3 2` | `2` |
| `7 5 5 2` | `2` |

---

### Notas

* En el **primer ejemplo**, Polycarpus puede cortar la cinta de la siguiente manera: la primera pieza tiene longitud 2, la segunda pieza tiene longitud 3.
* En el **segundo ejemplo**, Polycarpus puede cortar la cinta de la siguiente manera: la primera pieza tiene longitud 5, la segunda pieza tiene longitud 2.