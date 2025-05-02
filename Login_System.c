#include <stdio.h>
#include <string.h>

int main() {
    int attempt = 0;
    int maxAttempts = 3;
    char Admin_user_Name[30];
    char Admin_Password[30];

    // بيانات الحساب الصحيحة
    char Admin[30] = "OTHMANE ";
    char CorrectPassword[30] = "2025";

    while (attempt < maxAttempts) {
        // طلب إدخال اسم المستخدم
        printf("\nEnter User_Name: ");
        fgets(Admin_user_Name, sizeof(Admin_user_Name), stdin);
        Admin_user_Name[strcspn(Admin_user_Name, "\n")] = '\0';  // إزالة محرف السطر الجديد
    
        // طلب إدخال كلمة المرور
        printf("Enter Password: ");
        fgets(Admin_Password, sizeof(Admin_Password), stdin);
        Admin_Password[strcspn(Admin_Password, "\n")] = '\0';  // إزالة محرف السطر الجديد
    
        // التحقق من صحة الإدخال
        if (strcmp(Admin_user_Name, Admin) == 0 && strcmp(Admin_Password, CorrectPassword) == 0) {
            printf("\n Welcome to Your Account, %s!\n", Admin_user_Name);
            return 0; // الخروج بنجاح
        } else {
            attempt++; // زيادة عدد المحاولات
            printf("\n Incorrect Username or Password. Attempts left: %d\n", maxAttempts - attempt);
        }

        // عند استنفاد المحاولات
        if (attempt == maxAttempts) {
            printf("\n ERROR: Maximum attempts reached. Access denied.\n");
            return 1; // الخروج بفشل
        }
    }

    return 0;
}
