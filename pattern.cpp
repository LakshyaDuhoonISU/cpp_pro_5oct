// // // #include<iostream>
// // // using namespace std;
// // // int main()
// // // {
// // //     for (int i=0;i<=5;i++)
// // //     {
// // //         for (int j=0;j<=5;j++)
// // //         {
// // //         if(i==5 || i==0 || j==5 || j==0)
// // //         {
// // //             cout<<"*";
// // //         }
// // //         else 
// // //         {
// // //             cout<<" ";
// // //         }
// // //         }
// // //         cout<<endl;
// // //     }
// // //     return 0;
// // // }

// // #include<iostream>
// // using namespace std;
// // int main()
// // {
// //     for (int i=0;i<=5;i++)
// //     {
// //         for (int j=5;j>=0;j--)
// //         {
// //         if(i==5 || i==0 || j==5 || j==0)
// //         {
// //             cout<<" * ";
// //         }
// //         else 
// //         {
// //             cout<<" ";
// //         }
// //         }
// //         cout<<endl;
// //     }
// //     return 0;
// // }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=5,a=1,b=5;
//     for (int i=1;i<=n;i++)
//     {
//         for (int j=1;j<=n;j++)
//         {
//             if(i==j)
//             {
//                 cout<<a++;

//             }
//             else
//             {
//                 cout<<" ";
//             }
//             if (i==1&&j==n || i==2&&j==n-1 || i==4&&j==n-3 || i==5&&j==n-4)
//             {
//                 if (b==3)
//                 {
//                     b--;
//                     continue;
//                 }
//                 cout<<b--;
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

