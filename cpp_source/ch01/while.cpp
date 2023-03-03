// #include <iostream>

// int main(){
//     int i=50;
//     int sum=0;
//     while (i<=100)
//     {
//         sum+=i;
//         ++i;
//     }
//     std::cout<<sum<<std::endl;
// }

#include <iostream>

// int main()
// {
//     int sum = 0, val = 50;
//     while (val <= 100){
//         sum += val;
//         val += 1;
//     }
//     std::cout << "Sum of 50 to 100 inclusive is "
//               << sum << std::endl;
// }    

// int sum(){
//     int i=10;
//     int sum=0;
//     while(i>=0){
//         sum+=i;
//         i--;
//     }
//     std::cout<<sum<<std::endl;
// }

// int main(){
//     sum();
// }

#include <iostream>

int main()
{
    int sum = 0;
    for (int value = 0; std::cin >> value; )
        sum += value;
    std::cout << sum << std::endl;
    return 0;
}