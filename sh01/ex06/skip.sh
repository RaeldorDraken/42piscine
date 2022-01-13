#!/bin/bash
ls -l | sed 'n;d' #awk 'NR % 2 == 0'
