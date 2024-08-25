// user_setup.h for TFT_eSPI with ILI9341 in Parallel mode

// Uncomment the following line to enable parallel mode for ESP32
#define ESP32_PARALLEL

// Define the display driver you are using
#define ILI9341_DRIVER

// Define the screen dimensions
#define TFT_WIDTH  240
#define TFT_HEIGHT 320

// Backlight configuration
#define TFT_BACKLIGHT_ON 0 // 0 means the backlight is ON when pin is HIGH
#define TFT_BCKL -1        // No configurable backlight pin

// Display orientation
#define TFT_ROTATION 0    // 0 for default rotation, can be adjusted as needed

// Define pins for parallel mode
#define TFT_CS   12  // Chip select pin
#define TFT_DC   14  // Data/Command pin
#define TFT_RST  13  // Reset pin
#define TFT_WR   27  // Write pin
#define TFT_RD   26  // Read pin

// Data pins for 8-bit parallel mode
#define TFT_D0   22  // Data 0
#define TFT_D1   21  // Data 1
#define TFT_D2   25  // Data 2
#define TFT_D3   15  // Data 3
#define TFT_D4   2   // Data 4
#define TFT_D5   4   // Data 5
#define TFT_D6   16  // Data 6
#define TFT_D7   17  // Data 7

// SD card CS pin (if used)
#define SD_CS    6   // Chip select pin for SD card

// SPI settings
#define SPI_FREQUENCY  40000000   // SPI frequency for display communication
#define SPI_READ_FREQUENCY 20000000 // SPI frequency for read operations

// Touchscreen configuration (if applicable)
#define TOUCH_DRIVER 0x0ADC // Set to 0 if no touchscreen driver is used
#define TOUCH_anDC   34     // Analog pin for touchscreen DC
#define TOUCH_anWR   35     // Analog pin for touchscreen WR

// Uncomment if you want to enable debugging
// #define CORE_DEBUG_LEVEL ARDUHAL_LOG_LEVEL_DEBUG
