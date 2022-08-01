#include <sys/time.h>
#include <sys/resource.h>

// Must have a structure of the following type to use the functions
typedef struct {
	struct timeval start;
	struct timeval end;
} TimeStruct;

// Log the start time
void set_time_start(TimeStruct * times);
// Log the end time
void set_time_end(TimeStruct * times);
// get the difference of the two times in microseconds
long get_time_usage(TimeStruct * times);
