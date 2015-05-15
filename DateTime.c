====================================================================================================================
/*
 *display date and time(millisecond)
 * exp: Wed Apr 29 19:37:50 2015 443335
*/
#include <time.h>

time_t now;
struct timezone tz;
struct timeval tv;
struct tm *ptime;
char   currentTime[100];

void getCurrentTime() {

if(gettimeofday(&tv,&tz)<0){ perror("gettimeofday"); exit(-1); }

    memset(currentTime, 0, sizeof(currentTime));
    ptime=localtime(&(tv.tv_sec));
    sprintf(currentTime, "%s%d", asctime(ptime), tv.tv_usec );
}


void getCurrentTime() {

if(gettimeofday(&tv,&tz)<0){ perror("gettimeofday"); exit(-1); }

    memset(currentTime, 0, sizeof(currentTime));
    ptime=localtime(&(tv.tv_sec));
    sprintf(currentTime, "%s%d", asctime(ptime), tv.tv_usec );
}
====================================================================================================================
