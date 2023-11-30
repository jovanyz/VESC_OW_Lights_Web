// General Inputs
char ssid[] = "yourVESC";                              // network SSID (name)
char pass[] = "vescpassword";                          // network password (use for WPA, or use as key for WEP)

const bool enableUART = false;                         // set "true" if VESC is connected to UART. Makes strip laggy if not configured.

const int datPinNum = 13;                              // GPIO pin connected to LED data line
const int master_brightness = 90;                      // Hard brightness limiter, (0-255). Independent of slider. Choose wisely! Make sure you have enough amps!

const double stripLength = 50;                         // number of LEDs 
const int breakPoint = 25;                             // index of first tail-light pixel



// VESC Behavior Inputs
const int idleBrightness = 30;                         // brightness percent when at idle (0 to 100). Dims lights when not riding
const double idleThresholdMph = 1.5;                   // mph threshold to escape idle mode. 
const double brakingSens = 0.4;                        // 0 to 1, brakelight sensitivity, 1 is sensitive, 0 is sluggish
const bool brakeBlink = true;                          // quick blink animation when brakelights come on
const int brakeBlink_ms = 50;                          // milliseconds. How fast blink occurs



// Mode Inputs
const double numRainbow = 3.0;                         // number of full rainbows distributed in stripLength
const int seed = 0;                                    // starting pixel of Colorwipe Pattern
const double divBy = 10.0;                             // choose a number ideally between 8 and 15
const double modif = 50;                               // From number of LEDs, find the closest larger number with the divisor: divBy.
const int pts = 5;                                     // pts = modif / divBy. Creates guidepoints for wave pattern
const int numFiFl = 16;                                // number of "fireflies" added 8-20 are good values
const int numConf = 8;                                 // number of colored speckles added for "Confetti" 4-10 are good values



// Startup Inputs
const int bootMode = 0;                                // 0 to 12, wihich mode to start initlaize after OW power on
const int bootRed = 255;                               // 0-255 Rgb
const int bootGreen = 255;                             // 0-255 rGb
const int bootBlue = 255;                              // 0-255 rgB
const int bootBrightness = 90;                         // 0-100 inital brightness percent



// Debugand Demo Settings
const bool simulateRpmData = true;                     // feed sine wave data into rpmHist
const bool disableBrakingResponse = true;              // leave false. for debug/  testing 


// Designed for static IP address so you can connect to Arduino
// These are lists and need to be commas instead of dots
// eg. for IP address 192.168.0.1 use 192,168,0,1 instead
#define IP_ADDR 192,168,0,44
#define IP_DNS 8,8,8,8          // Google DNS
#define IP_GW 192,168,0,1       // default gateway (router)
#define IP_SUBNET 255,255,255,0 
