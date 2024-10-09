LTO_ENABLE = yes
KEY_OVERRIDE_ENABLE = yes
CAPS_WORD_ENABLE = yes
UNICODE_COMMON = yes
UNICODE_ENABLE = no
UNICODEMAP_ENABLE = yes
DEBOUNCE_TYPE = sym_eager_pk

SRC += process.c
SRC += features/caps_word.c
SRC += features/french.c
SRC += features/key_tri_layer.c
SRC += features/layer_clear.c
SRC += features/macros.c
SRC += features/mouse.c
SRC += features/nav_lock.c
SRC += features/oneshots.c
SRC += features/overrides.c
SRC += features/remove_mods.c
SRC += features/swappers.c

# Planck defaut config
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = no       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = yes         # Console for debug
COMMAND_ENABLE = no        # Commands for debug and configuration
NKRO_ENABLE = yes           # Enable N-Key Rollover
BACKLIGHT_ENABLE = no      # Enable keyboard backlight functionality
AUDIO_ENABLE = no           # Audio output
RGBLIGHT_ENABLE = no        # Enable WS2812 RGB underlight.
LAYOUTS_HAS_RGB = no
