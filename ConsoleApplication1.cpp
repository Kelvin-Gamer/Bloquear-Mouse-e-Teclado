#include <Windows.h>

#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")


int main() {
    // Bloquear o input do mouse e teclado 
    BlockInput(TRUE);

    // Mant�m o programa em execu��o infinitamente (ou at� que seja manualmente interrompido)
    while (true) {

    }

    return 0;
}
