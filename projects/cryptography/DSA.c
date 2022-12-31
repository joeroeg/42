#include	<stdio.h>
#include	<stdlib.h>
#include	<string.h>
#include	<math.h>

// Function prototypes
int generatePkeys(unsigned int *p, unsigned int *q);
int generateG(unsigned int *p, unsigned int *q, unsigned int *g);
int generatePrivateKey(unsigned int *q, unsigned int *x);
int generatePublicKey(unsigned int *p, unsigned int *g, unsigned int *x, unsigned int *y);
int generateSignature(unsigned int *p, unsigned int *q, unsigned int *g, unsigned int *x, unsigned int *k,unsigned int *r, unsigned int *s);
int verifySignature(unsigned int *p, unsigned int *q, unsigned int *g, unsigned int *y, unsigned int *r, unsigned int *s);
int powerMod(unsigned int base, unsigned int exponent, unsigned int p);
int rand256();
int modInverse(unsigned int a, unsigned int m);
int __gcd(int a, int b);
int power(int x, int y, int p);
int getPrimitiveRoot(unsigned int p, unsigned int q);

// Function to find primitive root using Tonelli-Shank algorithm
int getPrimitiveRoot(unsigned int p, unsigned int q) {
    int j, e;
    int r = 0;
	int d;

    // Calculate e = (p - 1) / q
    e = (p - 1) / q;

    // Iterate through all numbers 2 < r < p
    for (r = 2; r < p; r++)
    {
        // Initialize j = 0
        j =0;

        // Calculate (r^q mod p) and (r^e mod p)
        int pow_q = powerMod(r, q, p);
        int pow_e = powerMod(r, e, p);

        // If r^q mod p is not 1
        if (pow_q != 1)
        {
            // Iterate over e
            while (pow_q != (p - 1))
            {
                if (j > 0)
                    return -1;

                pow_q = powerMod(pow_q, q, p);
                j++;
            }
        }
        // If r^e mod p is not 1
        if (pow_e != 1)
        {
            // Iterate over all numbers 2 < d < q
            for (int d = 2; d < q; d++)
            {
                // Calculate (r^d mod p)
                int pow_d = powerMod(r, d, p);

                // If r^d mod p is 1
                // then r is not a primitive root
                if (pow_d == 1)
                    break;
            }

            // If r is a primitive root
            if (d == q)
            {
                // Return the primitive root
                return r;
            }
        }
    }

    // No primitive root found
    return -1;
}

int power(int x, int y, int p) {
    int res = 1;      // Initialize result

    x = x % p;  // Update x if it is more than or
                // equal to p

    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;

        // y must be even now
        y = y>>1; // y = y/2
        x =
		(x*x) % p;
    }
    return res;
}

int __gcd(int a, int b) {
    if (a == 0)
        return b;
    return __gcd(b % a, a);
}

// Function to calculate (base^exponent) mod p
int powerMod(unsigned int base, unsigned int exponent, unsigned int p) {
    // Use pow() to calculate the power value
    long long int powValue = pow(base, exponent);

    // Calculate (base^exponent) mod p
    int ans = (int)(powValue % p);

    return ans;
}

// Function to generate a random 256 bit number
int rand256() {
    // Use rand() to generate a random number
    int randNum = rand();

    // Use modulus (%) operator to limit the
    // random number to 256 bits
    int rand256 = randNum % ((int)pow(2, 256));

    return rand256;
}

// Function to calculate modulo inverse
int modInverse(unsigned int a, unsigned int m) {
    // Find gcd of a and m
    int g = __gcd(a, m);

    // Return -1 if a and m are not co-prime
    if (g != 1)
        return -1;

    // Finding modular inverse using Fermat's
    // little theorem
    int x = power(a, m-2, m);

    // Return the modular inverse
    return (x % m + m) % m;
}

// Function to generate public and private keys
int generatePkeys(unsigned int *p, unsigned int *q) {
    // rand256omly select prime numbers
    *p = rand256() % 512 + 512;
    *q = rand256() % 256 + 256;

    /* Perform primitive root test to verify if p and q are co-prime or not */
    while (getPrimitiveRoot(*p, *q) == -1) {
        *p = rand256() % 512 + 512;
        *q = rand256() % 256 + 256;
    }

    return 0;
}

// Function to generate g
int generateG(unsigned int *p, unsigned int *q, unsigned int *g) {
    // Calculate p - 1 and q - 1
    unsigned int pminus1 = *p - 1;
    unsigned int qminus1 = *q - 1;

    unsigned int h = 2; // Initialize h = 2

    while (1) {
        // Check if h is a primitive root of p and q
        if (powerMod(h, qminus1, *p) == 1 &&
            powerMod(h, pminus1 / *q, *p) == 1) {
            // If yes, then break the loop and set g = h
            *g = h;
            break;
        }
        // Increment h by 1
        h++;
    }

    return 0;
}

// Function to generate the private key
int generatePrivateKey(unsigned int *q, unsigned int *x) {
    // Generate a rand256om 256 bit number
    *x = rand256();

    // Make sure x lies between 0 < x < q
    while (*x >= *q || *x == 0)
        *x = rand256();

    return 0;
}

// Function to generate the public key
int generatePublicKey(unsigned int *p, unsigned int *g, unsigned int *x, unsigned int *y) {
    // Calculate y = g^x mod p
    *y = powerMod(*g, *x, *p);

    return 0;
}

// Function to generate signature
int generateSignature(unsigned int *p, unsigned int *q, unsigned int *g, unsigned int *x, unsigned int *k, unsigned int *r, unsigned int *s) {
    // Generate a rand256om 256 bit number
    *k = rand256();
	unsigned int hash_message;

    // Make sure k lies between 0 < k < q
    while (*k >= *q || *k == 0)
        *k = rand256();

    // Calculate r = g^k mod p
    *r = powerMod(*g, *k, *p);

    // Calculate s = k^-1 * (SHA256(m) + x*r) mod q
    *s = modInverse(*k, *q) * (hash_message + (*x * *r)) % *q;

    return 0;
}

// Function to verify signature
int verifySignature(unsigned int *p, unsigned int *q, unsigned int *g, unsigned int *y, unsigned int *r, unsigned int *s)
{
	unsigned int hash_message;
    // Verify if r and s lies between 0 and q
    if (*r >= 0 && *r < *q && *s >= 0 && *s < *q)
	{
        // Calculate w = s^-1 mod q
        unsigned int w = modInverse(*s, *q);

        // Calculate u1 = (SHA256(m) * w) mod q
        unsigned int u1 = (hash_message * w) % *q;

        // Calculate u2 = (r * w) mod q
        unsigned int u2 = (*r * w) % *q;

        // Calculate v = ((g^u1 * y^u2) mod p) mod q
        unsigned int v = (powerMod(*g, u1, *p) * powerMod(*y, u2, *p)) % *p % *q;

        // Signature is valid if v == r
        if (v == *r)
            return 1;
    }
	return (0);
}
// Driver code
int main()
{
    // Variables to store the generated parameters
    unsigned int p, q, g, x, y, k, r, s;

    // Generate the parameters
    generatePkeys(&p, &q);
    generateG(&p, &q, &g);
    generatePrivateKey(&q, &x);
    generatePublicKey(&p, &g, &x, &y);
    generateSignature(&p, &q, &g, &x, &k, &r, &s);
    verifySignature(&p, &q, &g, &y, &r, &s);

    return 0;
}
