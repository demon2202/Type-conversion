# Converting Between Binary, Decimal, Octal & Hexadecimal Numbers

## Introduction

Welcome to the comprehensive guide on converting between binary, decimal, octal, and hexadecimal numbers. Understanding how to convert between these number systems is essential for various applications in computer science, digital electronics, and programming.

## Table of Contents

1. [Binary to Decimal Conversion](#binary-to-decimal-conversion)
2. [Decimal to Binary Conversion](#decimal-to-binary-conversion)
3. [Binary to Octal Conversion](#binary-to-octal-conversion)
4. [Octal to Binary Conversion](#octal-to-binary-conversion)
5. [Binary to Hexadecimal Conversion](#binary-to-hexadecimal-conversion)
6. [Hexadecimal to Binary Conversion](#hexadecimal-to-binary-conversion)

## Binary to Decimal Conversion

Binary to decimal conversion involves converting binary (base-2) numbers to decimal (base-10) numbers.

### Procedure:

1. Write down the binary number.
2. Assign powers of 2 to each digit from right to left, starting from 2^0 for the rightmost digit.
3. Multiply each binary digit by its corresponding power of 2.
4. Sum up all the products to get the decimal equivalent.

### Example:

Binary Number: 1010

Procedure:

```
(1 * 2^3) + (0 * 2^2) + (1 * 2^1) + (0 * 2^0)
= (1 * 8) + (0 * 4) + (1 * 2) + (0 * 1)
= 8 + 0 + 2 + 0
= 10 (Decimal Equivalent)
```

## Decimal to Binary Conversion

Decimal to binary conversion involves converting decimal (base-10) numbers to binary (base-2) numbers.

### Procedure:

1. Divide the decimal number by 2.
2. Keep track of the remainders obtained at each division (0 or 1).
3. Continue dividing until the quotient is 0.
4. Write the remainders in reverse order to obtain the binary equivalent.

### Example:

Decimal Number: 15

Procedure:

```
15 ÷ 2 = 7 remainder 1
7 ÷ 2 = 3 remainder 1
3 ÷ 2 = 1 remainder 1
1 ÷ 2 = 0 remainder 1
```

Binary Equivalent: 1111

## Binary to Octal Conversion

Binary to octal conversion involves converting binary (base-2) numbers to octal (base-8) numbers.

### Procedure:

1. Group the binary digits into sets of three, starting from the right.
2. If necessary, add leading zeros to the leftmost group to make it a complete set of three.
3. Convert each group of three binary digits to its octal equivalent.

### Example:

Binary Number: 110110

Procedure:

```
(011) (011) (0)
3     3     0
```

Octal Equivalent: 66

## Octal to Binary Conversion

Octal to binary conversion involves converting octal (base-8) numbers to binary (base-2) numbers.

### Procedure:

1. Convert each octal digit to its binary equivalent.
2. Combine the binary equivalents of all the octal digits.

### Example:

Octal Number: 75

Procedure:

```
7 -> 111, 5 -> 101
```

Binary Equivalent: 111101

## Binary to Hexadecimal Conversion

Binary to hexadecimal conversion involves converting binary (base-2) numbers to hexadecimal (base-16) numbers.

### Procedure:

1. Group the binary digits into sets of four, starting from the right.
2. If necessary, add leading zeros to the leftmost group to make it a complete set of four.
3. Convert each group of four binary digits to its hexadecimal equivalent.

### Example:

Binary Number: 11011011

Procedure:

```
(1101) (1011)
D       B
```

Hexadecimal Equivalent: DB

## Hexadecimal to Binary Conversion

Hexadecimal to binary conversion involves converting hexadecimal (base-16) numbers to binary (base-2) numbers.

### Procedure:

1. Convert each hexadecimal digit to its binary equivalent.
2. Combine the binary equivalents of all the hexadecimal digits.

### Example:

Hexadecimal Number: 1A3

Procedure:

```
1 -> 0001, A -> 1010, 3 -> 0011
```

Binary Equivalent: 000110100011

## Conclusion

Mastering the conversion between binary, decimal, octal, and hexadecimal numbers is fundamental in various fields, including computer science and digital electronics. By understanding these conversions, you can work more effectively with different number systems and solve a wide range of problems. We hope this guide has provided you with a comprehensive understanding of these conversions.

---

