# ⚡ IESCO Monthly Bill Calculator (C++)
This is a simple console-based application written in **C++** that calculates electricity bills for multiple houses based on user-input units consumed. It mimics the billing process used by IESCO (Islamabad Electric Supply Company), applying different per-unit charges based on consumption slabs.

## 📌 Features
1- Accepts number of houses and their unit consumption
2- Applies slab-based unit charges (from 0 to 700+ units)
3- Adds fixed tax and post-due-date fine
4- Calculates:
   Individual bills (before and after due date)
   Total and average bill
   Total and average units
   Maximum and minimum bills

## 🔢 Bill Slab Structure (Approximate)

| Units Range     | Rate per Unit (PKR) |
|------------------|---------------------|
| 0–100            | 16.48               |
| 101–200          | 22.95               |
| 201–300          | 34.26               |
| 301–400          | 39.15               |
| 401–500          | 41.36               |
| 501–600          | 42.78               |
| 601–700          | 43.92               |
| 701 and above    | 48.84               |

⚠️ All bills include a fixed tax (PKR 500) and late fine if applicable.

## 📂 How to Run

1. Copy the code into a file named `bill_calculator.cpp`
2. Compile using any C++ compiler:

```bash
g++ bill_calculator.cpp -o bill
./bill

