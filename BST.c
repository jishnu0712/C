#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *getNode(int val)
{
    struct Node *t = (struct Node *)malloc(sizeof(struct Node));
    t->data = val;
    t->left = NULL;
    t->right = NULL;
    return t;
}

struct Node *insertBST(struct Node *root, int val)
{
    if (root == NULL)
    {
        return getNode(val);
    }
    if (root->data > val)
    {
        root->left = insertBST(root->left, val);
    }
    else
    {
        root->right = insertBST(root->right, val);
    }
    return root;
}

void inorder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    printf("%d  ", root->data);
    inorder(root->right);
}

struct Node *searchInBST(struct Node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == key)
    {
        return root;
    }
    else if (key < root->data)
    {
        return searchInBST(root->left, key);
    }
    else // key > data
        return searchInBST(root->right, key);
}
struct Node *inorderSucc(struct Node *root)
{
    struct Node *curr = root;
    while (curr && curr->left != NULL)
    {
        curr = curr->left;
    }
    return curr;
}
struct Node *deleteInBST(struct Node *root, int key)
{
    if (root == NULL)
    {
        printf("key not found\n");
        return root;
    }
    if (key > root->data)
    {
        root->right = deleteInBST(root->right, key);
    }
    else if (key < root->data)
    {
        root->left = deleteInBST(root->left, key);
    }
    else // key == data
    {
        if (root->left == NULL)
        {
            struct Node *t = root->right;
            free(root);
            return t;
        }
        else if (root->right == NULL)
        {
            struct Node *t = root->left;
            free(root);
            return t;
        }
        // case 3 : 2 child
        struct Node *temp = inorderSucc(root->right);
        root->data = temp->data;
        root->right = deleteInBST(root->right, temp->data);
    }
    return root;
}

int main()
{
    struct Node *root = NULL, *t = NULL;
    int ch, key;
    while (1)
    {
        printf("Enter 1: InsertInBST \n 2: SearchInBST \n 3:Delete \n 4:Display \n 5:exit\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter value to be inserted\n");
            scanf("%d", &key);
            root = insertBST(root, key);
            inorder(root);
            break;
        case 2:
            printf("Enter value to be searched\n");
            scanf("%d", &key);
            t = searchInBST(root, key);
            if (t == NULL)
            {
                printf("NOT found");
            }
            else
            {
                printf("ITEM found");
            }
            break;
        case 3:
            printf("Enter value to be deleted\n");
            scanf("%d", &key);
            root = deleteInBST(root, key);
        case 4:
            inorder(root);
            break;
        case 5:
            exit(0);
        default:
            printf("Enter valid choice");
        }
    }
    return 0;
}
