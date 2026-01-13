# Proximity Constrained Decimal Generator

This project implements a statistical sampling algorithm in C designed to generate **Tightly Clustered Data Points**.

## ⚙️ Algorithm Logic

The program generates a sequence of random numbers subject to two strict conditions:

1.  **Range Constraint:** All numbers $x$ must satisfy $0.20 \le x \le 1.20$.
    * *Implementation:* `(rand() % 101 + 20) / 100.0`
2.  **Proximity Constraint (Clustering):** For every pair of numbers $(x_i, x_j)$ in the set, the absolute difference must be minimal:
    $$|x_i - x_j| \le 0.1$$

## ⚠️ Complexity Note
Because the constraint requires **every** new number to be within `0.1` distance of **every** previous number, the valid solution space shrinks rapidly as $N$ increases.
* If inputs are `0.20` and `0.30`, the next number *must* be between `0.20` and `0.30`.
* This mimics finding a "Clique" in a graph of numerical relationships.

## 🚀 Usage

1.  Compile the code:
    ```bash
    gcc main.c -o cluster_gen
    ```
2.  Run the executable:
    ```bash
    ./cluster_gen
    ```

---
*This repository demonstrates floating-point arithmetic and constraint satisfaction loops in C.*
