#undef TAPPING_TERM
#define TAPPING_TERM 150

#define USB_SUSPEND_WAKEUP_DELAY 0
#define CAPS_LOCK_STATUS
#define SERIAL_NUMBER "EaoKY/Oa5lNd"
#define LAYER_STATE_8BIT

#define RGB_MATRIX_STARTUP_SPD 60

// --- Pointing device / Cirque ---
#define CIRQUE_PINNACLE_TAP_ENABLE             // Tap-to-click on Cirque Pinnacle
#define POINTING_DEVICE_ROTATION_90            // Rotate X/Y data by 90°
#define MOUSE_EXTENDED_REPORT                  // Extended mouse report (-32767..32767)
#define POINTING_DEVICE_AUTO_MOUSE_ENABLE      // Auto-enable mouse layer on movement
#define AUTO_MOUSE_TIME 280                    // Keep it for 280 ms after use
#define POINTING_DEVICE_GESTURES_SCROLL_ENABLE // Enable scroll gestures (if supported)

#define POINTING_DEVICE_TASK_THROTTLE_MS 1     // Max polling rate (1 kHz)
#define USB_POLLING_INTERVAL_MS 1              // Optional: higher USB polling
