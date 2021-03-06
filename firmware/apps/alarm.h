/*! \file alarm.h
  \brief alarm application.
*/

//! Initialize the alarm.
void alarm_init();
//! Exit to the next application.
int alarm_exit();
//! Draw the alarm.
void alarm_draw();

//! A button has been pressed for the alarm.
int alarm_keypress(char ch);

//! Toggle the alarm
void toggle_alarm(int enable);

