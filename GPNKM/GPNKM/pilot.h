#ifndef H_PILOT
#define H_PILOT
#include "structures.h"
#include "constants.h"

double randomNumber(double min, double max);
double speedWeather(const char *weather);
double sectorTime(double speed, int sector);
const char * getTeamName(int number);
int forkPilots(int nPilots, int pfdSrvDrv, int pfdDrvSrv);
void pilot(int number,int queue_id,int pfdSrvDrv,int pfdDrvSrv, TmsgbufPilot pilot_msg);

#endif