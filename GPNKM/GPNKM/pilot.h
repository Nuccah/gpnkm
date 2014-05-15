#ifndef H_PILOT
#define H_PILOT
#include "structures.h"

bool crashed();
bool damaged();
int chooseTires(int weather);
double tireWear(int weather);
double fuelConsumption();
double fuelStart();
double randomNumber(double min, double max);
double speedWeather(int weather);
double sectorTime(double speed, int sector);
const char * getTeamName(int number);
int forkPilots(int queue_id, int pfdSrvDrv, int pfdDrvSrv, TmsgbufPilot pilot_msg,
			  TCar *tabCar, int sem_race, int *raceType, int sem_type);
void pilot(int number, int queue_id, int pfdSrvDrv, int pfdDrvSrv, TmsgbufPilot pilot_msg, 
			int table, pid_t pid, TCar *tabCar, int sem_race, int *raceType, int sem_type);

#endif