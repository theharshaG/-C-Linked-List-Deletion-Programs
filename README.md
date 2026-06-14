# -C-Linked-List-Deletion-Programs

 C Linked List Deletion Programs

## Overview

This repository contains C programs demonstrating **deletion operations in a Singly Linked List** using dynamic memory allocation.

The programs show how to:

- Delete the first node
- Delete the last node
- Delete a middle node

These operations help in understanding linked list manipulation, pointer movement, memory management, and node connections.

This project is useful for:

- Beginners learning Data Structures
- College laboratory exercises
- Interview preparation
- Understanding pointers and memory
- Embedded C learning

---

## Programs Included

### 1. Delete First Node

This program deletes the first node (head node) from the linked list.

Process:

- Store current head
- Move head to next node
- Free old head

#### Example

Before:

```text
10 → 20 → NULL
```

After:

```text
20 → NULL
```

#### Output Example

```text
20
```

#### Concepts Used

- Head deletion
- Pointer movement
- Dynamic memory cleanup

---

### 2. Delete Last Node

This program deletes the last node from the linked list.

Process:

- Move to second-last node
- Free last node
- Set next pointer to NULL

#### Example

Before:

```text
10 → 20 → 30 → NULL
```

After:

```text
10 → 20 → NULL
```

#### Output Example

```text
10 20
```

#### Concepts Used

- Traversal
- Second-last node logic
- Memory deallocation

---

### 3. Delete Middle Node

This program deletes a node located in the middle of the linked list.

Process:

- Store node to delete
- Connect previous node to next node
- Free deleted node

#### Example

Before:

```text
10 → 20 → 30 → NULL
```

After:

```text
10 → 30 → NULL
```

#### Output Example

```text
10 30
```

#### Concepts Used

- Middle node deletion
- Pointer reassignment
- Memory management

---

## Technologies Used

- C Programming Language
- GCC Compiler
- VS Code
- CodeBlocks
- Turbo C

---

## Project Structure

```text
c-linked-list-deletion/
│
├── delete_first_node.c
├── delete_last_node.c
├── delete_middle_node.c
└── README.md
```

---

## How to Compile

Compile:

```bash
gcc filename.c -o output
```

Run:

```bash
./output
```

Windows:

```bash
output.exe
```

---

## Linked List Visualization

### Delete First

```text
10 → 20 → NULL
↓

20 → NULL
```

---

### Delete Last

```text
10 → 20 → 30 → NULL
↓

10 → 20 → NULL
```

---

### Delete Middle

```text
10 → 20 → 30 → NULL
↓

10 → 30 → NULL
```

---

## Learning Outcomes

After completing these programs, you will understand:

- Linked list deletion operations
- Pointer traversal
- Node connection logic
- Memory allocation and deallocation
- Safe node removal
- Dynamic data structures

---

## Future Improvements

Possible future additions:

- Insert at Beginning
- Insert at End
- Insert at Position
- Delete by Value
- Search Node
- Reverse Linked List
- Count Nodes
- Circular Linked List
- Doubly Linked List

---

## Author

**Harsha G**

Learning:

- Data Structures
- C Programming
- Embedded Systems
- Python Development
- IoT Systems
- Problem Solving
