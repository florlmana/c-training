#include <stdio.h>
#include <stdlib.h>

enum OpCod {AGREGAR_ESTUDIANTE = 1, MOSTRAR_ESTUDIANTES = 2, ELIMINAR_ESTUDIANTE = 3, SALIR = 4};

struct Estudiante {
    char nombre;
    int edad;
};

int main()
{
    int opCod;
    int cantEstudiantes = 0;
    struct Estudiante *estudiantes = NULL;

    while(1) {
        printf("Ingrese código de operación a realizar: \n");
        printf("AGREGAR ESTUDIANTE = 1, MOSTRAR ESTUDIANTES = 2, ELIMINAR ESTUDIANTE = 3, SALIR = 4\n");
        scanf("%d", &opCod);

        switch(opCod){
            case AGREGAR_ESTUDIANTE:
                cantEstudiantes++;
                estudiantes = (struct Estudiante*)malloc(cantEstudiantes * sizeof(struct Estudiante));

                if (estudiantes == NULL) {
                    printf("Error al asignar memoria para estudiantes.\n");
                    exit(1);
                }

                printf("Ingrese el nombre del nuevo estudiante: ");
                scanf("%s", estudiantes[cantEstudiantes - 1].nombre);
                printf("Ingrese la edad del nuevo estudiante: ");
                scanf("%d", estudiantes[cantEstudiantes - 1].edad);
                printf("¡El estudiante se agregó con éxito!\n");

                break;

            case MOSTRAR_ESTUDIANTES:

                break;

            case ELIMINAR_ESTUDIANTE:

                break;

            case SALIR:
                    for(int i = 0; i < cantEstudiantes; i++){
                        free(estudiantes[i].nombre);
                    }
                    free(estudiantes);
                    printf("¡Hasta pronto!");
                    exit(0);
                break;

            default:
                printf("Intentelo nuevamente ingresando un codigo de operacion existente.\n");
                break;
        }
    }
    return 0;
}




