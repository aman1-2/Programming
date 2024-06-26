# *Bit Manipulation*

- Before going with the bit manipulation a person must have knowledge about these two things:-
    1. Binary Number System
    2. Conversions<br>
        binary -> decimal<br>
        decimal -> binary

- Inside the Bit Manipulation the bits are positioned from right side from 0th position.

---
<br><br>
---

## *Bitwise Operators*

- These Bitwise operators are applied on bit level values i.e, on 0's and 1's.

- We have three different types of bitwise operators these are - 
    1. Bitwise AND (&)
    2. Bitwise OR (|)
    3. Bitwise XOR (^)

### 1.) Bitwise AND (&) ->

- Quite similar to Logical AND operator.

!["Bitwise AND Operator"](./Assets/image1.png)

### 2.) Bitwise OR (|) ->

- Quite similar to Logical OR operator.

!["Bitwise OR Operator"](./Assets/image2.png)

### 3.) Bitwise XOR (^) ->

- Quite similar to Logical XOR operator.

!["Bitwise XOR Operator"](./Assets/image3.png)

---
<br><br>
---

## *One's Complement*

- For applying One's Complement we use the Binary's NOT Operator. And inside the bits the binary NOT Operator is shown by the symbol (~) tilde.

- Binary NOT Operator works on a single bit of value.

- If we try to do ~(6)?

        You would do it somewhat like
        6 -> binary form is 110
        Now we just have to apply NOT on this binary number which is
        ~(6) => ~(110) which should eventually come out to be 001
        and our answer must be 1.

        But in reality the answer comes out to be -7.

        And this is because in the Bits NOT Operator we cann't ignore the zeroes that exists before the number all the 32 bits values matters when we perform a Bits NOT operator.

!["One's Complement"](./Assets/image4.png)

- So, what actually that happens in the memory is we try to flip each bit of that number that is every bit is flipped

        For ~(6) we do,
        ~(00000000000000000000000000000110)
        => (11111111111111111111111111111001)

        Now that this is represented in the decimal form is -7.


!["One's Complement"](./Assets/image5.png)

- How we actually calculate the magnitude of the one's complement.

- It's a Two step process for 2's complement.
 
- `STEP -1 ->` Once we have done the One's complement of the number then we just need to find out the magnitude i.e, the actual value holding in it.
    Inside the 32 bit the first bit which if the Most Significant Bit(MSB) is used for determining the sign of the number whether positive or a negative number.

- `STEP -2 ->` The next step is to do the 2's complement leaving the MSB
    Inside the 2's complement we first do the toggle(flipping) of rest of the bits leaving MSB and then adding 1 to it.

!["2's complement Procedure."](./Assets/image6.png)

!["2's complement another example."](./Assets/image7.png)

---
<br><br>
---

## *Binary Shift Operator*

- We have two shift operators as the left shift operator and right shift operator.

1. `Left Shift Operator(<<) :-` In the left shift operator we try to shift the bits towards the left side with ith positions or ith number of times. And the blank position in the left side are then filled by the zeroes.

        Syntax - number<<ith-position (this shows that we have to shift the bits of the number with the ith-position or by ith-times).

        OR Other way of representing it.

        a<<b = a * 2^b

        7<<2 = 7 *2^2 -> 7 * 4 => 28

!["Binary left shift operator"](./Assets/image8.png)

!["Binary left shift operator-2"](./Assets/image9.png)

2. `Right Shift Operator(>>) :-` The Right shift Operator is just opposite to the left shift operator. In Right shift we try to move the bits towards right side and the blank space in the right side are filled with 0.

        Syntax - number<<ith-position (this shows that we have to shift the bits of the number with the ith-position or by ith-times).

        OR Other way of representing it.

        a>>b = a * 1/2^b

        7>>2 = 7 *1/2^2 -> 7 * 1/4 => 1

!["Binary Right Shift Operator"](./Assets/image10.png)

!["Binary Right Shift Operator-1"](./Assets/image11.png)

### Pratice Question - Check if the given number is even or odd.

- We can solve this finding the right most bit or can say by preserving the right most bit of the number.

- If the right most bit of a number is 1 -> then it means its a odd number.

- whereas if the right most bit of a number is 0 -> then it means its a even number.

!["Even odd problem"](./Assets/image12.png)

!["Even odd problem-1"](./Assets/image13.png)

### Bitmask -> They are used to access specific bits in a byte of data.
---

### Pratice Question - Get the ith bit of a number.

!["Get the ith bit"](./Assets/image14.png)

---

### Pratice Question - Set the ith bit of a number.

- In setting the ith bit it actually means converting that bit to 1 and if it already is 1 then leave it as it is.

!["Set the ith bit"](./Assets/image15.png)

---

### Pratice Question - Clear the ith bit of a number.

- In clearing the ith bit it actually means converting that bit to 0 and if it already is 0 then leave it as it is.

!["Clear the ith bit"](./Assets/image16.png)

---

### Pratice Question - Check the power of 2.

- We can check if a number is power of 2 or not.

- It has following properties like - that number will only have a single set bit on i.e, it will have only one 1 placed bit.
- And that num-1 will have all its bits equal to 1.
- Now the power check can be seen by the AND Operation on both the num and num-1.
- If it 0 then the number is 2's power whereas if its 1 then the number is not a 2's power.

!["Check the power of 2"](./Assets/image17.png)

---

### Pratice Question - Update the ith bit by a given value either 0 or 1.

!["Update the ith bit by a given value either 0 or 1"](./Assets/image18.png)

---

### Pratice Question - Clear the last ith bit of a given Number.

!["Update the ith bit by a given value either 0 or 1"](./Assets/image19.png)

---

### Fast Exponentiation

!["Fast Exponentiation"](./Assets/image20.png)