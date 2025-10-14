#include "karel.h"
#include "superkarel.h"
#include <curses.h>

int main() {
    turn_on("maps/task_1.kw"); // Увімкнути Карела (відкриває вікно)
    set_step_delay(80);
    put_beeper();
    while (true)
        {

        if ( beepers_present()) {
            break;
        }
        if (right_is_clear()) {
            turn_left();
            turn_left();
            turn_left();
        }
        if (front_is_blocked()) {
            turn_left();
        }
        if (front_is_clear()) {
            step();
        }
        if (beepers_present() && facing_south()) {
            pick_beeper();
        }
    }
    // turn_left();    // Повертає вліво
    // step();
    // step();
    // turn_left();
    // turn_left();
    // turn_left();
    // step();
    // step();
    // step();
    // step();
    // turn_left();
    // step();
    // step();
    // step();
    // turn_left();
    // turn_left();
    // turn_left();
    // step();
    // turn_left();
    // turn_left();
    // turn_left();
    // step();
    // turn_left();
    // step();
    // step();
    // step();
    // step();
    // turn_left();
    // turn_left();
    // turn_left();
    // step();
    // step();
    // step();
    // pick_beeper();
    // turn_left();
    // turn_left();
    // step();
    // step();
    // step();
    // step();
    // turn_left();
    // step();
    // step();
    // step();
    // step();
    // step();
    // step();
    // step();
    // step();
    // step();
    // turn_left();
    // step();
    // step();
    // step();
    // step();
    // step();
    // turn_left();
    // turn_left();
    // turn_left();


    refresh(); // оновлює екран
    getch(); // чекає натискання клавіші

    turn_off();
    return 0;
}
