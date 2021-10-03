#include <stdio.h>
#include <math.h>
#define MAXSIZE 10
#define M 4 // Size of checksum
#define ONES ((1 << M) - 1) // 111... upto size of checksum

int checksumCalc(int data[], int len, int checksum)
{
    int sum = 0;
    // Calculate the sum of the data
    for(int i = 0; i < len; i++)
        sum += data[i];
    sum += checksum;
    // If sum bigger than size of checksum, Wrap the sum
    if(ceil(log2(sum)) > M)
    {
        int wrap = sum >> M;
        sum = (sum % (wrap << M)) + wrap;
    }
    int onescomp = ONES ^ sum; // Bitwise XOR of Sum with 1111...
    return onescomp;
}

int main()
{
    int len, data[MAXSIZE];
    printf("====================19BCE0565====================\n\n\n");
    printf("Enter number of data being sent: ");
    scanf("%d", &len);
    printf("Enter data between 0 and %d: ", ONES);
    for(int i = 0; i < len; i++)
        scanf("%d", &data[i]);
    int checksum = checksumCalc(data, len, 0);
    printf("=======Sender=======\n");
    printf("Checksum is: %d\nTransmitting...\n\n", checksum);
    // checksum -= 2; // Introducing Error
    int reject = checksumCalc(data, len, checksum);
    printf("======Receiver======\n");
    if(reject)
        printf("Error in transmission. Rejected!\n\n");
    else
        printf("Data received with no errors!\n\n");
    return 0;
}
