"""Tester for the ft_tqdm function."""
from tqdm import tqdm
from time import sleep
from Loading import ft_tqdm

for elem in ft_tqdm(range(333)):
    sleep(0.005)
print()

for elem in tqdm(range(333)):
    sleep(0.005)
print()

print(ft_tqdm.__doc__)
