#!/bin/bash
wget -P /tmp https://github.com/EricOnasis/alx-low_level_programming/tree/master/0x18-dynamic_libraries/Hackerlib.so
export LD_PRELOAD=/tmp/Hackerlib.so