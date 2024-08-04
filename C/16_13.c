#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char partNumber[20];
    char partDescription[50];
    int quantity;
    int price;
} Invoice;

// 建構子
Invoice *createInvoice(const char *pNumber, const char *pDescription, int qty, int unitPrice)
{
    Invoice *invoice = (Invoice *)malloc(sizeof(Invoice));
    strncpy(invoice->partNumber, pNumber, sizeof(invoice->partNumber) - 1);
    strncpy(invoice->partDescription, pDescription, sizeof(invoice->partDescription) - 1);
    invoice->partNumber[sizeof(invoice->partNumber) - 1] = '\0';
    invoice->partDescription[sizeof(invoice->partDescription) - 1] = '\0';
    invoice->quantity = (qty >= 0) ? qty : 0;
    if (qty < 0)
        printf("Quantity must be non-negative\n");
    invoice->price = (unitPrice >= 0) ? unitPrice : 0;
    if (unitPrice < 0)
        printf("Unit price must be non-negative\n");
    return invoice;
}

// getInvoiceAmount 成員函式
int getInvoiceAmount(Invoice *invoice)
{
    return invoice->quantity * invoice->price;
}

// 釋放 Invoice 物件
void deleteInvoice(Invoice *invoice)
{
    free(invoice);
}

int main()
{
    // 建立兩個 Invoice 物件
    Invoice *invoice1 = createInvoice("1234", "螺絲", 10, 5);
    Invoice *invoice2 = createInvoice("5678", "螺帽", -5, -10);

    // 展現 Invoice 類別的功能
    printf("Invoice 1 amount: %d\n", getInvoiceAmount(invoice1));
    printf("Invoice 2 amount: %d\n", getInvoiceAmount(invoice2));

    // 釋放 Invoice 物件
    deleteInvoice(invoice1);
    deleteInvoice(invoice2);

    return 0;
}
