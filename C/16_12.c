#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int balance;
} Account;

// 建構子，初始化餘額
Account *createAccount(int initial_balance)
{
    Account *account = (Account *)malloc(sizeof(Account));
    if (initial_balance >= 0)
    {
        account->balance = initial_balance;
    }
    else
    {
        account->balance = 0;
        printf("初始餘額無效\n");
    }
    return account;
}

// credit 成員函式
void credit(Account *account, int amount)
{
    account->balance += amount;
}

// debit 成員函式
void debit(Account *account, int amount)
{
    if (amount <= account->balance)
    {
        account->balance -= amount;
    }
    else
    {
        printf("Debit amount exceeded account balance\n");
    }
}

// getBalance 成員函式
int getBalance(Account *account)
{
    return account->balance;
}

// 釋放 Account 物件
void deleteAccount(Account *account)
{
    free(account);
}

int main()
{
    // 建立兩個 Account 物件
    Account *account1 = createAccount(100);
    Account *account2 = createAccount(-50);

    // 測試 Account 類別的成員函式
    credit(account1, 50);
    debit(account1, 30);
    printf("Account 1 balance: %d\n", getBalance(account1));

    credit(account2, 200);
    debit(account2, 250);
    printf("Account 2 balance: %d\n", getBalance(account2));

    // 釋放 Account 物件
    deleteAccount(account1);
    deleteAccount(account2);

    return 0;
}
