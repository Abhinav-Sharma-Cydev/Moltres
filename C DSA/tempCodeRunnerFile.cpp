#include <stdio.h>
#include <ncurses.h>
#include <math.h>
#include <unistd.h>

// Define screen dimensions
#define WIDTH 80
#define HEIGHT 24

// Initialize ncurses environment
void init_screen() {
    initscr();               // Initialize the screen
    noecho();                // Disable automatic echoing of input characters
    curs_set(0);             // Hide the cursor
    timeout(0);              // Non-blocking input
    keypad(stdscr, TRUE);    // Enable special keys
    refresh();               // Refresh the screen
}

// Clean up ncurses environment
void end_screen() {
    endwin();    // End the ncurses window
}

// Function to create the floating circle animation
void floating_circle(int *x, int *y, float *angle, int *dx, int *dy) {
    // Floating effect using sine wave for vertical motion
    *y = HEIGHT / 2 + (int)(8 * sin(*angle));  // The vertical movement is controlled by sine wave

    // Horizontal movement with boundary checks
    *x += *dx;

    // Bounce the circle off the boundaries
    if (*x <= 0 || *x >= WIDTH - 2) {
        *dx = -(*dx);  // Reverse direction if hitting boundary
    }

    // Increase angle for continuous movement
    *angle += 0.1;
}

int main() {
    // Initialize ncurses
    init_screen();

    // Define variables for circle position, movement, and floating effect
    int x = 0, y = HEIGHT / 2;
    float angle = 0.0;
    int dx = 1, dy = 1;

    // Main loop for animation
    while (1) {
        // Clear the screen
        clear();

        // Create the floating effect and update position
        floating_circle(&x, &y, &angle, &dx, &dy);

        // Print the circle ('O') at the new position
        mvprintw(y, x, "O");

        // Refresh the screen to show the new frame
        refresh();

        // Delay for animation effect
        usleep(50000);  // 50 milliseconds

        // Check for quit condition (press 'q' to exit)
        if (getch() == 'q') {
            break;
        }
    }

    // Clean up and end ncurses
    end_screen();
    return 0;
}
