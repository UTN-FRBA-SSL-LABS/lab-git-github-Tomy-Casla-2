#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

//el const le indica al programa que esos valores no se pueden modificar dentro de la funcion
int sumar(const int a, const int b) {
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int a, int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */

/* esta funcion multiplica 2 numeros y retorna el resultado.    */
int multiplicar(int a, int b) {
    return a * b;
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n % 2) == 0; /* version main */ 
}
