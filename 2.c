#include <stdio.h>
#include <string.h>

int main() {
    char email1[50];
     char password1[50];
    
    char email[] = "taksh234@gmail.com";
    char password[] = "12345678";

    printf("Enter your email: ");
    scanf("%s",email);

    printf("Enter your password: ");
    scanf("%s",password);

    if (strcmp(email,email1) == 0 && strcmp(password,password1) == 0) {
        printf("Login successful");
    } else {
        printf("Invalid email and password");
    }

}
