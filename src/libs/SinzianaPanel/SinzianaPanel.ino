#include <FastLED.h>

#include "Plasma.cpp"
#include "TestPattern.cpp"
#include "Snake.cpp"
#include "Twinkle.cpp"
#include "DeadChannel.cpp"
#include "Bouncy.cpp"
#include "HiRez.cpp"
#include "Boxes.cpp"
#include "Life.cpp"
#include "Sprite.cpp"

#define WIDTH 15
#define HEIGHT 15
#define NUM_LEDS WIDTH * HEIGHT

# define DATA_PIN 6

CRGB leds[NUM_LEDS];

void setup() {
  // put your setup code here, to run once:

    FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS);
}

void loop() {
  // put your main code here, to run repeatedly:
//    TestPattern testPattern(leds, WIDTH, HEIGHT);
//    testPattern.start();


    doTwinkle();
    doSnake();
    doLife();
    doSprite();
}

void doDeadChannel() {
    DeadChannel deadChannel(leds, WIDTH, HEIGHT);
    deadChannel.start();
}

void doPlasma() {
    Plasma plasma(leds, WIDTH, HEIGHT);
    plasma.start();
}

void doTwinkle() {
    Twinkle twinkle(leds, WIDTH, HEIGHT, true, true);
    twinkle.start();
}

void doSnake() {
    Snake snake(leds, WIDTH, HEIGHT);
    snake.start();
}

void doLife() {
    Life life(leds, WIDTH, HEIGHT, 56);
    life.start();
}

void doSprite() {
    Sprite sprite(leds, WIDTH, HEIGHT);
    sprite.start();
}
