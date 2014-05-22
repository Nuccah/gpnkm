#ifndef H_OPCODES
#define H_OPCODES
/* Signals for control */

// End of program
#define SIGEXIT 2
// No action sent  
#define SIGFREE 1

// End the race
#define SIGEND 3
// Start the race
#define SIGSTART 4

// Trial sig
#define SIGTR1 10
#define SIGTR2 11
#define SIGTR3 12

// Qualif sig
#define SIGQU1 13
#define SIGQU2 14
#define SIGQU3 15

// GP sig
#define SIGGP 16

// Project number for sem/shm key generation + Path
#define PATH "/usr/bin/passwd"
#define CONTROL 10
#define TYPE 11
#define RACE 12
#define STOCK 13
#define PIT 14

#define RACESHM 22
#define STOCKSHM 23
#define PITSHM 24

#endif