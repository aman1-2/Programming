# *Array's*
- Array is a data structure i.e used for storing `Linear` data within in it.
- Therefore we can say array is a linear data structure.
- Array's are used for storing similar data type elements in it. That is they accomodate only homogenous data type items in it.
- Array's store the elements in the contiguous fashion.

!["About Array"](./Assets/image1.png)

### *Index in the Array's*
- The elements inside the array are positioned with the help of index value.
- Each element within the array gets a unique index.
- Array's have 0 based indexing in them.
- Index tells the position of the element inside the array.

!["Index description"](./Assets/image2.png)

---
<br>

## *Array Creation*
- Now there are multiple ways in which we can create our array's

        Syntax for array creation-
            <data type> name_of_the_array [Size_of_the_array]; -> This type of array declaration only holds garbage value in it.

- We can access any element of the array by its index value. We just need to provide the array name and its index -> the value present at the index will be printed then.

        Syntax for array creation-
            array_name[index] -> will return the element present at that index.

- array_name[index] is just like a variable name holding some value in it.

- If we just try to access an index position which doesn't exists in the array in that case it will give us a warning or will throw us an error of index out of range.

- The valid index value which we get is from 0 to the size_of_array - 1.

!["Array Creation"](./Assets/image3.png)

- In the second way of array creation the array index gets the element at resprctive position in the order they are passed from 0 and so on... Whereas the rest of the other values gets 0 in the first case they were getting garbage value but here they are given value 0 at other index position whose values aren't provided.

!["Second array declaration method"](./Assets/image4.png)

- Whenever we create a array the memory is statically allocated (i.e they are provided at the compile time) i.e if one's we have declared a size of the array then its been declared now dynamically we cann't do this. This is allowed only in the case of Vectors.

### *Array's size*
!["Array's size"](./Assets/image5.png)

![code](./Assets/image6.png)

---
<br>

## *Input And Output in Array*
- We can simple input Or output a data with the help of the index of the array.
- And for printing the element of the array we can use the for loop.
- In a similar fashion like we have tried to print the value of the loops we can enter the value in the array.

!["Input output in the array"](./Assets/image7.png)

---
<br>

## *Array's are passed by reference*
- In c++ an array name is considered as a Pointer.
- And the array name points to the first element of the array i.e it holds the address of the first element of the array.
- Its because the Array name acts as a pointer theerefore whenever we pass a array inside a function then it is passed as reference.

!["Array passed as Reference"](./Assets/image8.png)

---
<br>

## *Binary Search Time Complexity Solution*

![Step-1](./Assets/image9.png)

![Step-2](./Assets/image10.png)

![Step-3](./Assets/image11.png)

![Step-4](./Assets/image12.png)

---
<br>

## *Array's Pointer*
- The name of the Array is considered as a Constant Pointer. And it holds the memory address of the first element of the array.
- We consider it as the constant Pointer because we cann't change or store any other value in it. It can hold only the address of the first element of the array.

### *Pointer's Arithmetic*
!["Increment Decrement"](./Assets/image13.png)

!["Addition and Subtraction of constants"](./Assets/image14.png) 

!["Addition and Subtraction of constants"](./Assets/image15.png)

!["Pointer Comparison"](./Assets/image16.png)