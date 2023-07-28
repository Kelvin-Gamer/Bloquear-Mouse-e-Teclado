#include <Windows.h>

#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")


int main() {
    // Bloquear o input do mouse e teclado 
    BlockInput(TRUE);

    // Mantém o programa em execução infinitamente (ou até que seja manualmente interrompido)
    while (true) {

    }

    return 0;
}
