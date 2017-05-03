/**
 * Author: Pirtoaca George Sebastian
 */

#include <xdo.h>
#include <stdio.h>
#include <unistd.h>

#define SLEEP_TIMEOUT 5  /* seconds */

int main() {

	/* Sleep for the given time */
	sleep(SLEEP_TIMEOUT);

	/**
	 * Send paste command to the GUI application - where you clicked
	 * the last time (where the mouse cursor is).
	 */
	xdo_t *xdo = xdo_new(NULL);
  	xdo_send_keysequence_window(xdo, CURRENTWINDOW, "ctrl+v", 0);
  	xdo_free(xdo);
	
	return  0;
}

