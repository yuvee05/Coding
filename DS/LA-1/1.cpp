#include <iostream>
using namespace std;
int arr[100];
void createarr(int n)
{
    cout << "Enter " << n << " elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void display(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void insert(int n)
{
    cout << "Enter the index where number is to be entered" << endl;
    int idx;
    cin >> idx;
    for (int i = n; i > idx; i--)
    {
        arr[i] = arr[i - 1];
    }
    cout << "Enter the number to be entered" << endl;
    cin >> arr[idx];
}
void del(int n)
{
    cout << "Enter the index of number to be deleted" << endl;
    int idx;
    cin >> idx;
    for(int i=idx;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
}
void search(int  n)
{
    cout << "Enter the number to be searched" << endl;
    int num,count=0;
    cin >> num;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            cout << "Element found at index " << i << endl;
            count++;
        }
    }
    if(count==0)
        cout << "Element not found" << endl;
}
int main()
{

    int ch, n;

    do
    {
        cout << "Enter your choice" << endl;
        cout << "1. Create Array" << endl;
        cout << "2. Display Array" << endl;
        cout << "3. Insert an element" << endl;
        cout << "4. Delete an element" << endl;
        cout << "5. Linear Search" << endl;
        cout << "6. EXIT" << endl;
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter the size of array" << endl;
            cin >> n;
            createarr(n);
            break;

        case 2:
            display(n);
            break;

        case 3:
            insert(n++);
            break;

        case 4:
            del(n--);
            break;
        
        case 5:
            search(n);
            break;
        case 6:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Wrong Input" << endl;
        }   
    } while (ch != 6);
}
// #include <stdio.h>

// #define MAX 100

// int arr[MAX];
// int size = 0; // current number of elements

// void create() {
//     int n;
//     printf("Enter number of elements: ");
//     scanf("%d", &n);
//     if (n > MAX) {
//         printf("Array size exceeds limit of %d\n", MAX);
//         return;
//     }
//     size = n;
//     printf("Enter %d elements: ", size);
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }
// }

// void display() {
//     if (size == 0) {
//         printf("Array is empty.\n");
//         return;
//     }
//     printf("Array elements: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// void insert() {
//     int pos, val;
//     if (size == MAX) {
//         printf("Array is full, cannot insert.\n");
//         return;
//     }
//     printf("Enter position to insert (1 to %d): ", size + 1);
//     scanf("%d", &pos);
//     if (pos < 1 || pos > size + 1) {
//         printf("Invalid position.\n");
//         return;
//     }
//     printf("Enter value to insert: ");
//     scanf("%d", &val);

//     // Shift elements to right
//     for (int i = size; i >= pos; i--) {
//         arr[i] = arr[i - 1];
//     }
//     arr[pos - 1] = val;
//     size++;
// }

// void deletel() {
//     int pos;
//     if (size == 0) {
//         printf("Array is empty, nothing to delete.\n");
//         return;
//     }
//     printf("Enter position to delete (1 to %d): ", size);
//     scanf("%d", &pos);
//     if (pos < 1 || pos > size) {
//         printf("Invalid position.\n");
//         return;
//     }

//     // Shift elements to left
//     for (int i = pos - 1; i < size - 1; i++) {
//         arr[i] = arr[i + 1];
//     }
//     size--;
// }

// void linear_search() {
//     int key, found = 0;
//     if (size == 0) {
//         printf("Array is empty.\n");
//         return;
//     }
//     printf("Enter value to search: ");
//     scanf("%d", &key);
//     for (int i = 0; i < size; i++) {
//         if (arr[i] == key) {
//             printf("Element found at position %d\n", i + 1);
//             found = 1;
//             break;
//         }
//     }
//     if (!found) {
//         printf("Element not found.\n");
//     }
// }

// int main() {
//     int choice;
//     while (1) {
//         printf("\n---- MENU ----\n");
//         printf("1. CREATE\n");
//         printf("2. DISPLAY\n");
//         printf("3. INSERT\n");
//         printf("4. DELETE\n");
//         printf("5. LINEAR SEARCH\n");
//         printf("6. EXIT\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1: create(); break;
//             case 2: display(); break;
//             case 3: insert(); break;
//             case 4: deletel(); break;
//             case 5: linear_search(); break;
//             case 6: return 0;
//             default: printf("Invalid choice.\n");
//         }
//     }
// }
