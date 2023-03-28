#include <stdio.h>

import random
import string

valid_chars = string.ascii_letters + string.digits + '_-!@#$%^&*()'


password_length = 10


def generate_password():
	password = ''.join(random.choice(valid_chars) for i in range(password_length))
	return password

def is_valid_password(password):
    # TODO: Implement the password checking algorithm
    pass

password = generate_password()
while not is_valid_password(password):
	password = generate_password()

print(password)

