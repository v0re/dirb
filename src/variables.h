/*
 * DIRB
 *
 * variables.h - Global Variables
 *
 */


#include "global.h"
#include "estructuras.h"


/* Global variables */

extern FILE *outfile;                    // Fichero de output
extern CURL *curl;                       // Descriptor CURL
extern struct opciones options;          // Array con las opciones recibidas del usuario

extern struct result *nec[100];          // Array que almacena los NECs
extern int contador;                     // Contador de palabras generadas
extern int descargadas;                  // Numero de URLs descargadas
extern int encontradas;                  // Numero de URLs encontradas
extern int errores;                      // Contador de errores
extern int existant;                     // Flag para determinar si la URL actual existe
extern int listable;                     // Flag para determinar si un directorio es listable

extern struct words *wordlist_base;      // Base de la lista de palabras
extern struct words *wordlist_current;   // Nodo actual de la lista de palabras
extern struct words *wordlist_final;     // Final de la lista de palabras

extern struct words *exts_base;          // Base de la lista de extensiones
extern struct words *exts_current;       // Nodo actual de la lista de externsiones
extern int exts_num;                     // Numero de extensiones

extern struct words *muts_base;          // Base de la lista de mutaciones

extern struct words *dirlist_base;       // Base de la lista de los directorios encontrados
extern struct words *dirlist_final;      // Final de la lista los directorios encontrados
extern struct words *dirlist_current;    // Nodo actual de la lista los directorios encontrados

extern int resuming;                     // Flag para saber si estamos en una sesion resumida
extern int next_dir;					  // Flag para saber si tenemos que pasar al siguiente directorio








