import matplotlib.pyplot as plt
import numpy as np

with open("normal-distribution.txt", "r") as distribution:
    data = distribution.read()
    data = data.split(' ')
    data.pop()

plt.hist(sorted(data, key=float), bins=100)
plt.xlabel('Values in the set')
plt.ylabel('Frequency of occurence')
plt.legend()
plt.show()