#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the solve function below.
def solve(s):
    string_list = s.split(" ")
    result = []
    for i in string_list:
        i = str(i[0:]).capitalize()
        result.append(i)
    return " ".join(result)

print(solve('chris alan'))