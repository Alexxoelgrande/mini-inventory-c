#include <stdio.h>

void mostrarMenu() {
    cout << "\n=== MINI SISTEMA DE INVENTARIO ==="; // O printf clásico en C
    printf("\n=== MINI SISTEMA DE INVENTARIO ===\n");
    printf("1. Registrar producto\n");
    printf("2. Calcular valor total del inventario\n");
    printf("3. Salir\n");
}

int main() {
    int opcion;
    float precio = 0.0;
    int cantidad = 0;
    int registrado = 0;

    do {
        mostrarMenu();
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                printf("Ingrese el precio unitario del producto: ");
                scanf("%f", &precio);
                printf("Ingrese la cantidad en stock: ");
                scanf("%d", &cantidad);
                registrado = 1;
                printf("¡Producto registrado con éxito!\n");
                break;
            case 2:
                if (registrado) {
                    float total = precio * cantidad;
                    printf("El valor total en inventario es: $%.2f\n", total);
                } else {
                    printf("Primero debe registrar un producto (Opción 1).\n");
                }
                break;
            case 3:
                printf("Saliendo del sistema...\n");
                break;
            default:
                printf("Opción inválida.\n");
        }
    } while(opcion != 3);

    return 0;
}
