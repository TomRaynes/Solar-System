#pragma once

// mass (kg)
#define SUN_MASS 1.9885*pow(10, 30)
#define MERCURY_MASS 3.3011*pow(10, 23)
#define VENUS_MASS 4.8675*pow(10, 24)
#define EARTH_MASS 5.9724*pow(10, 24)
#define MARS_MASS 6.4171*pow(10, 23)
#define JUPITER_MASS 1.8982*pow(10, 27)
#define SATURN_MASS 5.6834*pow(10, 26)
#define URANUS_MASS 8.6810*pow(10, 25)
#define NEPTUNE_MASS 1.0241*pow(10, 26)

// position (m)
#define MERCURY_POSITION 5.791*pow(10, 10)
#define VENUS_POSITION 1.082*pow(10, 11)
#define EARTH_POSITION 1.496*pow(10, 11)
#define MARS_POSITION 2.279*pow(10, 11)
#define JUPITER_POSITION 7.785*pow(10, 11)
#define SATURN_POSITION 1.433*pow(10, 12)
#define URANUS_POSITION 2.877*pow(10, 12)
#define NEPTUNE_POSITION 4.503*pow(10, 12)

// velocity (m/s)
#define MERCURY_VELOCITY 47870
#define VENUS_VELOCITY 35020
#define EARTH_VELOCITY 29780
#define MARS_VELOCITY 24070
#define JUPITER_VELOCITY 13070
#define SATURN_VELOCITY 9680
#define URANUS_VELOCITY 6800
#define NEPTUNE_VELOCITY 5430

// radius
#define SUN_RADIUS 3
#define MERCURY_RADIUS 1
#define VENUS_RADIUS 1
#define EARTH_RADIUS 1
#define MARS_RADIUS 1
#define JUPITER_RADIUS 2
#define SATURN_RADIUS 2
#define URANUS_RADIUS 2
#define NEPTUNE_RADIUS 2

#define SCREEN_WIDTH 1400
#define SCREEN_HEIGHT 700
#define SF 7000000000 // NEPTUNE_POSITION / (SCREEN_WIDTH/2 + 50)
#define G 6.6743*pow(10, -11)
#define DT 3600
#define SPEED_INCREMENT 2
#define GRAVITY_INCREMENT 0.2
#define ZOOM_INCREMENT 0.1

