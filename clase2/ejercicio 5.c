#include <stdio.h>

int main() {
    
    struct articulo{
        char nombre[20];
        char descripcion[100];
        float precio;
    };
    
    struct articulo art;
    struct articulo *ptr_art = &art;
    
    (*ptr_art).precio = 50.38;
    ptr_art->precio = 20.38;
    
    printf("precio: %f", ptr_art->precio);
    
    return 0;
}
  