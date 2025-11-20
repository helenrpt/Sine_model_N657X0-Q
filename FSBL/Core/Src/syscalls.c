#include <sys/stat.h>
#include <sys/unistd.h>
#include <errno.h>
#include "stm32n6xx_nucleo.h"

// Handle COM utilisé par BSP_COM_Init
extern UART_HandleTypeDef hcom_uart[COMn];

int _close(int file) { 
    return -1; 
}

int _lseek(int file, int ptr, int dir) { 
    return 0; 
}

int _read(int file, char *ptr, int len) { 
    errno = EBADF; 
    return -1; 
}

int _write(int file, char *ptr, int len) {
    // Redirection de printf vers COM1 (initialisé par BSP_COM_Init)
    HAL_StatusTypeDef status = HAL_UART_Transmit(&hcom_uart[COM1], (uint8_t *)ptr, len, HAL_MAX_DELAY);
    if (status == HAL_OK) {
        return len;
    }
    return -1;
}

int _fstat(int file, struct stat *st) { 
    st->st_mode = S_IFCHR; 
    return 0; 
}

int _isatty(int file) { 
    return 1; 
}

void _exit(int status) { 
    while(1) {} 
}

int _kill(int pid, int sig) { 
    errno = EINVAL; 
    return -1; 
}

int _getpid(void) { 
    return 1; 
}