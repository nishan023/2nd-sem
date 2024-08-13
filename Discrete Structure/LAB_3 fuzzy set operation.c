// Q. Write a program to implement fuzzy set operation.
#include <stdio.h>

// Function to perform union of two fuzzy sets
void unionFuzzySet(char set1[], float value1[], int n1, char set2[], float value2[], int n2)
{
    char resultSet[100];
    float resultValue[100];
    int k = 0;

    for (int i = 0; i < n1; i++)
    {
        resultSet[k] = set1[i];
        resultValue[k] = value1[i];
        k++;
    }

    for (int i = 0; i < n2; i++)
    {
        int found = 0;
        for (int j = 0; j < n1; j++)
        {
            if (set2[i] == set1[j])
            {
                found = 1;
                if (value2[i] > value1[j])
                    resultValue[j] = value2[i];
                break;
            }
        }
        if (!found)
        {
            resultSet[k] = set2[i];
            resultValue[k] = value2[i];
            k++;
        }
    }

    printf("A union  B = {");
    for (int i = 0; i < k; i++)
    {
        printf("(%c, %.1f)", resultSet[i], resultValue[i]);
        if (i < k - 1)
            printf(", ");
    }
    printf("}\n");
}

// Function to perform intersection of two fuzzy sets
void intersectionFuzzySet(char set1[], float value1[], int n1, char set2[], float value2[], int n2)
{
    char resultSet[100];
    float resultValue[100];
    int k = 0;

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (set1[i] == set2[j])
            {
                resultSet[k] = set1[i];
                resultValue[k] = value1[i] < value2[j] ? value1[i] : value2[j];
                k++;
                break;
            }
        }
    }

    printf("A intersection  B = {");
    for (int i = 0; i < k; i++)
    {
        printf("(%c, %.1f)", resultSet[i], resultValue[i]);
        if (i < k - 1)
            printf(", ");
    }
    printf("}\n");
}

// Function to perform complement of a fuzzy set
void complementFuzzySet(char set[], float value[], int n)
{
    printf("{");
    for (int i = 0; i < n; i++)
    {
        printf("(%c, %.1f)", set[i], 1.0 - value[i]);
        if (i < n - 1)
            printf(", ");
    }
    printf("}\n");
}

int main()
{
    char set1[100], set2[100];
    float value1[100], value2[100];
    int n1, n2;

    printf("Enter number of elements in set A: ");
    scanf("%d", &n1);

    printf("Enter elements and membership values for set A:");
    for (int i = 0; i < n1; i++)
    {
        scanf(" %c %f", &set1[i], &value1[i]);
    }

    printf("Enter number of elements in set B: ");
    scanf("%d", &n2);

    printf("Enter elements and membership values for set B:");
    for (int i = 0; i < n2; i++)
    {
        scanf(" %c %f", &set2[i], &value2[i]);
    }

    // Perform union of the fuzzy sets
    unionFuzzySet(set1, value1, n1, set2, value2, n2);

    // Perform intersection of the fuzzy sets
    intersectionFuzzySet(set1, value1, n1, set2, value2, n2);

    // Perform complement of the fuzzy set A
    printf("Complement of set A: ");
    complementFuzzySet(set1, value1, n1);

    return 0;
}