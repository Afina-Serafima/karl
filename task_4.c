#include <superkarel.h>

static void go_back();
static void go_back_with_beepers();
static void turn_back();
static void chod_do_pichi();

int main() {
    turn_on("maps/task_4.kw");
    set_step_delay(150);
    turn_left();

    while (front_is_clear()) {
        chod_do_pichi();

        if (front_is_blocked()) {
            turn_left();
            if (!front_is_blocked()) {
                step();
                turn_left();
            } else {
                break;
            }
        }

        step();

        if (front_is_blocked()) {
            go_back();
        }
    }

    turn_off();
    return 0;
}

static void chod_do_pichi() {
    if (beepers_present()) {
        while (front_is_clear()) {
            step();
        }
        turn_back();
        go_back_with_beepers();
    }
}

static void go_back_with_beepers() {
    while (front_is_clear()) {
        if (no_beepers_present()) {
            put_beeper();
        }
        step();
    }
    if (no_beepers_present()) {
        put_beeper();
    }
}

static void go_back() {
    turn_back();
    while (front_is_clear()) {
        step();
    }
    turn_left();
    if (front_is_clear()) {
        step();
        turn_left();
    }
}

static void turn_back() {
    turn_left();
    turn_left();
}