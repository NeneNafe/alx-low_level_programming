#!/bin/bash
weget -P /tmp https://github.com/NeneNafe/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libdynamic.so
export LD_PRELOAD=/tmp/lidynamic.so
