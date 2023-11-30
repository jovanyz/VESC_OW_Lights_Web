char ssid[] = "yourVESC";                              // network SSID (name)
char pass[] = "vescpassword";                          // network password (use for WPA, or use as key for WEP)

const bool enableUART = false;                         // set "true" if VESC is connected to UART. Makes strip laggy if not configured.

const int datPinNum = 13;                              // GPIO pin connected to LED data line
const int master_brightness = 90;                      // Hard brightness limiter, (0-255). Independent of slider. Choose wisely! Make sure you have enough amps!

const double stripLength = 50;                         // number of LEDs 
const int breakPoint = 25;                             // index of first tail-light pixel

const int seed = 0;                                    // starting pixel of Colorwipe Pattern

// For Asymmetric Fade Patterns (Modes 4 - 8)
const int pts = 5;                                     // number of guidepoints in primary loop
const double modif = 50;                               // next largest easily divisible number if LED number is prime or inconvenient
const double divBy = 10.0;                             // modif = this number * pts, 

// For classic Rainbow pattern
const double numRainbow = 2.0;                         // number of full rainbows distributed in stripLength

// For Fireflies Pattern [M9]
const int numFiFl = 16;                                // number of "fireflies"

// For Confetti Pattern [M9]
const int numConf = 8;                                 // number of colored speckles

// VESC Related Inputs
const int idleBrightness = 40;                         // brightness percent when at idle speeds (0 to 100). Dims lights when not riding
const double idleThresholdMph = 1.5;                   // mph threshold to escape idle mode. 
const double brakingSens = 0.4;                        // 0 to 1, brakelight sensitivity, 1 is sensitive, 0 is sluggish
const int bootMode = 0;                               // 0 to 12, wihich mode to start immediately after OW power on

const bool simulateRpmData = false;                    // feed sine wave data into rpmHist



// Designed for static IP address so you can connect to Arduino
// These are lists and need to be commas instead of dots
// eg. for IP address 192.168.0.1 use 192,168,0,1 instead
#define IP_ADDR 192,168,0,44
#define IP_DNS 8,8,8,8          // Google DNS
#define IP_GW 192,168,0,1       // default gateway (router)
#define IP_SUBNET 255,255,255,0 
