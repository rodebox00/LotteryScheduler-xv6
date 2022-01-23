# LotteryScheduler-xv6

Esta modificación del sistema operativo xv6 contiene un planificador modificado que se denomina **Lottery Scheduler**. En esta versión de xv6, cada proceso contiene un número de tickets (por defecto 1) que se pueden modificar con la llamada al sistema `settickets(int)` donde el número de tickets asignados es mayor o igual que 1. Cuando un proceso realice una llamada a `fork()` el proceso hijo heredará los tickets del proceso padre. Cada vez que el planificador de la CPU seleccione un proceso, cuanto mayor número de tickets tenga un proceso mayor será la probabilidad de que sea seleccionado y pase a ejecución aumentando así el numero de ticks del proceso.

Esta versión trae consigo un programa llamado `lotterytest` en el que se crean 3 procesos con 30, 20 y 10 tickets que ejecutan el mismo programa hasta que uno de ellos termina y mata a los demás procesos. De esta forma se puede comprobar como el planificador **lottery scheduler** se ejecuta correctamente otorgando un mayor número de veces la CPU a los procesos que contienen más tickets.

Para poder ejecutar este xv6 modificado y simular la arquitectura se debe ejecutar el comando `make qemu` desde el directorio en el que se encuentra el fichero **Makefile**.

-------------------------------------------------

# LotteryScheduler-xv6

This modification of the xv6 operating system contains a modified scheduler called **Lottery Scheduler**. In this version of xv6, each process contains a number of tickets (by default 1) that can be modified with the `settickets(int)` system call where the number of tickets assigned is greater than or equal to 1. When a process makes a call to `fork()` the child process will inherit the tickets from the parent process. Each time the CPU scheduler selects a process, the more tickets a process has, the higher probability has to be selected and go to execution, thus increasing the number of ticks of the process.

This version brings with it a program called `lotterytest` in which 3 processes with 30, 20 and 10 tickets are created and execute the same program until one of them terminates and kills the other processes. In this way it is possible to check how the **lottery scheduler** is executed correctly granting a greater number of times the CPU to the processes that contain more tickets.

In order to run this modified xv6 and simulate the architecture you must run the `make qemu` command from the directory where the **Makefile** file is located.
