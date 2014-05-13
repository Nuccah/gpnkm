#ifndef H_CONSTANTS
#define H_CONSTANTS

/* All libraries needed */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include <math.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/sem.h>
#include <stdbool.h>
#include <fcntl.h>
#include <sys/msg.h>
#include <signal.h>
#include "errorControl.h"

// Permission to Shared Memory
#define PERMS 0666

//MQ ID's
#define SERVER 100
#define ADR 101

/* GENERAL */
#define DRIVERS 22

/* weather constants */
#define DRY 1.0
#define WET 0.9
#define RAIN 0.75

/* Tire Constants (x4 for Sets) */
#define SLICKS 13
#define INTERMEDIATES 4
#define WETS 3
#define TIREWEARMAX 1.0 
#define TIREWEARMIN 0.4
#define TIREWEARLIMIT 10
#define DRYFACTOR 2.5
#define WETFACTOR 1.2

/* random loss percentage constants (by lap)*/
#define CRASH 0.0005
#define BREAK 0.0015

/* sector length (in meters) */
#define S1 2300
#define S2 1800
#define S3 2900

/* Qualifiers (in seconds) */
#define Q1 1080
#define Q2 600
#define Q3 720

/* speed limits (in kmph) */
#define MINSPEED 285.1
#define MAXSPEED 315.0

/* fuel data (in liter) */
#define FUELSMAX 100.0
#define FUELSMIN 95.0
#define FUELCMAX 0.75
#define FUELCMIN 0.35

#endif
