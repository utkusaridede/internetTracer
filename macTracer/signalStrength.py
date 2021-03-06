from collections import Counter
import matplotlib.pyplot as plt
import numpy as np

readFile = open("data/signals", "r")

lines = readFile.readlines()

listOsman = []

for i in xrange(0, len(lines)):
	listOsman.append(lines[i].split('|'))

x = np.arange(len(listOsman))

macAdresses = []
packetS = []

print listOsman

for i in xrange(0, len(listOsman)):
	macAdresses.append(listOsman[i][0])
	packetS.append(float(listOsman[i][1]))

size = len(macAdresses)

plt.bar(x, packetS)
plt.xticks(x + 0.5, macAdresses, rotation=90)

plt.xlabel('Unique Devices')
plt.ylabel('Strength')
title = 'Signal Strengths of ' + `size` + ' Devices'
plt.title(title)

plt.show()