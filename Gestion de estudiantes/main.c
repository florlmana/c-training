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
    struct Estudiante *listaEstudiantes = NULL;

    while(1) {
        printf("Ingrese código de operación a realizar: \n");
        printf("AGREGAR ESTUDIANTE = 1, MOSTRAR ESTUDIANTES = 2, ELIMINAR ESTUDIANTE = 3, SALIR = 4\n");
        scanf("%d", &opCod);

        switch(opCod){
            case AGREGAR_ESTUDIANTE:
                cantEstudiantes++;
                listaEstudiantes = (struct Estudiante *)realloc(listaEstudiantes, sizeof(struct Estudiante)*cantEstudiantes);

                printf("Ingrese el nombre y la edad del nuevo estudiante: ");
                scanf("%s", listaEstudiantes[cantEstudiantes - 1].nombre);
                printf("Ingrese la edad del nuevo estudiante: ");
                scanf("%d", listaEstudiantes[cantEstudiantes - 1].edad);
                printf("¡El estudiante se agregó con éxito!");

                break;

            case MOSTRAR_ESTUDIANTES:
                if(cantEstudiantes == 0){
                    printf("No existen estudiantes para mostrar \n");
                } else {
                    printf("Los estudiantes inscriptos son: \n");
                    for(int i = 0; i < cantEstudiantes; i++){
                        printf("Nombre: %s\n", listaEstudiantes[i].nombre);
                        printf("Nombre: %d\n", listaEstudiantes[i].edad);
                    }
                }

                break;

            case ELIMINAR_ESTUDIANTE:
                //Codigo para eliminar un estudiante
                break;

            case SALIR:
                //Codigo para salir
                break;

            default:
                printf("Intentelo nuevamente ingresando un codigo de operacion existente.\n");
                break;
        }
    }
    return 0;
}




