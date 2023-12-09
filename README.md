# Procedures Overview

This repository contains implementations of various procedures using C++ classes and objects.

## 1. Inventory System

### Description
The Inventory System involves managing products' details and their quantities. 📦

### Class Structure

#### Product Class
- **Attributes:**
  - `Product_id`: integer
  - `name`: string
  - `price`: float
  - `quantity`: integer

#### Methods
- `Add_Product()`: Adds a new product with details. ➕
- `Sell_Product()`: Decreases the quantity of a sold product. ➖
- `Display_Product()`: Displays product details. 📋

---

## 2. Banking System

### Description
The Banking System manages bank accounts, enabling deposits, withdrawals, and balance inquiries. 💳

### Class Structure

#### BankAccount Class
- **Attributes:**
  - `Account_Number`: unsigned integer
  - `Holder_Name`: string
  - `Balance`: float

#### Methods
- `Deposit()`: Adds money to the account. 💰
- `Withdraw()`: Deducts money from the account. 💸
- `Display_Balance()`: Displays account details and balance. 📈

---

## 3. Voting System

### Description
The Voting System facilitates adding candidates and casting votes for an election. 🗳️

### Class Structure

#### VotingSystem Class
- **Attributes:**
  - `candidate_names[]`: Array of strings for candidate names
  - `votes[]`: Array of integers for vote counts

#### Methods
- `add_candidate()`: Adds a new candidate to the election. ➕
- `vote_for_candidate()`: Casts a vote for a specific candidate. ✅
- `display_results()`: Displays election results. 📊

---

## 4. Profile Management System

### Description
The Profile Management System manages user profiles, posts, and follower counts. 👤

### Class Structure

#### Profile Class
- **Attributes:**
  - `username`: string
  - `followers_count`: integer
  - `posts[]`: Array of strings to store posts

#### Methods
- `Add_Post()`: Adds a new post to the profile. ✍️
- `increase_followers()`: Increases the count of followers. 🔼
- `display_profile()`: Displays profile information, followers count, and posts. 📄

---

## 5. Book and Library Management

### Description
The Book and Library Management System manages book details and their availability in a library. 📚

### Class Structure

#### Book Class
- **Attributes:**
  - `Title`: string
  - `Author`: string
  - `ISBN`: string

#### Methods
- `Add_Book()`: Adds a new book with details. ➕
- `Remove_Book()`: Removes a book by resetting its details. ❌
- `Display_books_by_author()`: Displays books by a specific author. 👓

---

## 6. Hospital Patient Management System

### Description
The Hospital Patient Management System manages patient IDs and tracks the total number of patients.

### Class Structure

#### PatientManager Class
- **Attributes:**
  - `patientIDs[]`: Array of integers to store patient IDs
  - `totalPatients`: Integer to keep track of the total number of patients

#### Methods
- `addPatient(int patientID)`: Adds a new patient ID to the system.
  - Parameter: `patientID` (integer) - ID of the patient to be added.
- `displayPatients()`: Displays the list of patient IDs.

---

## 7. Sports Club Membership System

### Description
The Sports Club Membership System manages member IDs and tracks the total number of members.

### Class Structure

#### MembershipSystem Class
- **Attributes:**
  - `memberIDs[]`: Array of strings to store member IDs
  - `totalMembers`: Integer to keep track of the total number of members

#### Methods
- `registerMember(string memberID)`: Registers a new member ID in the sports club.
  - Parameter: `memberID` (string) - ID of the member to be registered.
- `displayMembers()`: Displays the list of registered member IDs.

---

## 8. University Course Management System

### Description
The University Course Management System manages course details and instructors.

### Class Structure

#### Course Class
- **Attributes:**
  - `courseCode`: string - Code representing the course
  - `courseName`: string - Name of the course
  - `instructor`: string - Name of the instructor teaching the course

#### Methods
- `setCourseDetails(string code, string name, string instructor)`: Sets course details.
  - Parameters: `code` (string) - Course code.
  - `name` (string) - Course name.
  - `instructor` (string) - Instructor's name.
- `displayCourses()`: Displays available courses in the university.

---

## 9. Online Shopping Cart Management

### Description
The Online Shopping Cart Management System manages items in an online shopping cart.

### Class Structure

#### OnlineShoppingCart Class
- **Attributes:**
  - `itemName`: string - Name of the item in the cart
  - `price`: float - Price of the item
  - `quantity`: integer - Quantity of the item

#### Methods
- `addItemToCart(string name, float price, int quantity)`: Adds an item to the cart.
  - Parameters: `name` (string) - Name of the item.
  - `price` (float) - Price of the item.
  - `quantity` (int) - Quantity of the item.
- `displayCartItems()`: Displays items in the online shopping cart.

---

Feel free to explore the implementations within this repository and use these procedures as references or templates for your projects! 🚀
