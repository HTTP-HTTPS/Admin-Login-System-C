
```markdown
# Admin Login System (C)

This project is a simple admin login system written in C. It allows users to log in using a predefined username and password. The system checks the entered credentials and limits the number of attempts to 3. After three failed attempts, the user is denied access.

## Features
- Username and password authentication.
- Up to 3 login attempts.
- Simple console interface for user input.
- Error messages when the login attempt fails.
- Access denied after 3 failed login attempts.

## Files
- `admin_login.c`: C source code for the login system.
- `README.md`: Documentation for the project.

## Installation and Usage

1. **Clone the Repository:**
   Clone the repository to your local machine using Git:
   ```bash
   git clone https://github.com/yourusername/Admin-Login-System-C.git
   ```

2. **Navigate to the Project Folder:**
   Go to the project directory:
   ```bash
   cd Admin-Login-System-C
   ```

3. **Compile the Code:**
   Use a C compiler like `gcc` to compile the code:
   ```bash
   gcc admin_login.c -o admin_login
   ```

4. **Run the Program:**
   Execute the program to start the login process:
   ```bash
   ./admin_login
   ```

5. **Login Information:**
   - Username: `OTHMANE`
   - Password: `2025`
   
   You have 3 attempts to enter the correct username and password. After 3 incorrect attempts, access will be denied.

## Example Output
```
Enter User_Name: OTHMANE
Enter Password: 2025

✅ Welcome to Your Account, OTHMANE!
```


