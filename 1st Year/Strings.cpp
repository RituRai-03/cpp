#include <iostream>
#include <cstring>
#include <cctype>
#include <string>
using namespace std;

// int main ()
// {
//     char greeting[6]={'H','e','l','l','o','\0'};

//     cout<<"Welcome message:";
//     cout << greeting << endl; 
//     return 0;
// }


// int main()
// {
//     char str[100];
//     cout<<"Enter a string:";
//     cin.getline(str,100);
//     cout<<"You entered:"<< str << endl;
//     return 0;
// }

// int main(){
//     char f_name[20];
//     char l_name[20];
//     char full_name[50];

//     cout<<"Enter your first name:";
//     cin>>f_name;

//     cout<<"Enter your last name:";
//     cin>>l_name;

     
//    cout << "Hi " << f_name << "! Your first name has "
//      << strlen(f_name) << " characters." << endl
//      << "And your last name has " << strlen(l_name) << " characters." << endl;

// strcpy(full_name, f_name);
// strcat(full_name, " ");  
// strcat(full_name, l_name);

// cout << "Your Full name is: " << full_name << endl;

// if (strcmp(f_name, l_name) == 0)
//     cout << "Both strings are equal." << endl;
// else
//     cout << "Strings are not equal." << endl;

// return 0;

// }


// int main(){
//     //Decalaring a string object
//     string str;
//     cout<<"Enter a string:";
//     getline(cin,str);
//     cout << "You entered:" << str << endl;
//     return 0;
// }

// int main()
//  {
// //     string firstName="John";
// //     string lastName="Doe";
// //     string fullName = firstName +" "+ lastName;
// //     cout << fullName;

// string firstName;
// string lastName;

// cout << "Enter First name:";
// cin>>firstName;

// cout <<"Enter last name:";
// cin>>lastName;

// string fullName = firstName.append(" ").append(lastName);

// cout << fullName;

//     return 0;

// }

// int main(){
//     string str1 = "Carrom";
//     string str2 = "Board";

//     if((str1.compare(str2))==0)
//      cout << "String Matched"<<endl;
// else
//    cout << "String Not Matched"<<endl;


// int main(){

   //Print


   // string str1 = {"hello"};
   // string str2 ("joy");
   // string str3 (str2);
   // string str4 (5,'a');
   // cout<<str1<<endl<<str2<<endl<<str3<<endl<<str4;

//length of string

   // string str = "Hello World";
   // cout << "Length of string:" << str.length() << endl;


//compare strings using comapre()function

// string str1 ="Welcome";
// string str2 ="Home";
// if ((str1.compare(str2))==0)
//  cout << "String Matched" <<endl;
// else
//  cout << "String Not Matched" <<endl;


//program of inserting into a string


// string str = "HI! Welcome Home";
// string str1 = "I am Nik";

// cout << str.insert(4, "Joy, ") << endl;
// cout << str.insert(4, str1)<< endl;
// cout << str.insert(21, ". what will you have?" , 4, 5);


//to remove lowercase 

//  string str;
//   cout << "Enter a string: ";
//   getline (cin, str);

//   string result = " ";
//   for (char c : str) {
//    if (isalnum(c) && !islower(c)){
    
//       result +=c;
//    }
//   }
  
//   cout << "After removing lowercase: " << result << endl;

// string s, n;
// cout << "Enter a string: ";
// getline(cin, s);

// int begin = 0;
// int end = s.length() -1;

// while (begin < end) {
//    while (begin < end && !isalnum(s[begin])){
//       begin++;
//    }

//    while (begin < end && !isalnum(s[end])){
//       end--;
//    }
// }

//    if (tolower(s[begin]) != tolower(s[end])){
//       cout << "Not a pallindrome";
//       return 0;
//    }
// begin ++;
// end-- ;



//find, rfind, insert, append, erase, replace, compare, subste, length, size, at
//Slicing(substracting), Substr(pos, len)
//ASIIvalue: intS[i] or static-cast<int>(s[i])
//Rotation: right:- S Substr(N-k,k)+S substr(o, N-K)
//left:- s Subtr(K, N-K)+ s substr(o,k)
 



//sort vowels and consonant

// int isVowel(char c) {
//     c = tolower(c);
//     if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
//         return 1;
//     else
//         return 0;
// }


// int main(){
//     string str;
//     cout << "Enter a string: ";
//     getline(cin, str);

//     string vowels = " ", consonants = " ";

//     for (char c : str) {
//       if (isalpha (c)) {
//          if (isVowel(c))
//       vowels += c;
//   else
//       consonants += c;
   
//       }
//     }

//     sort(vowels.begin(), vowels.end());
//     sort(consonant.begin(), consonants.end());
  
//     cout << "Sorted vowels: " << vowels << endl;
//     cout << "Sorted consonants: " << consonants << endl;


//  return 0;
// }



//sort a name 

// int main() {
//    string name;
//    cout << "Enter a name: ";
//    cin >> name;

//    sort(name.begin(), name.end());

//    cout << "Sorted name: " << name << endl;

//    return 0;
// }

// int main(){
//    string name;
//    int n;
//    cin>>n;
//    cin.ignore();
//    getline(cin,name);
//    cout<<n<<" "<<name;
// }



//insert

// string S;
// S.insert (index,string);

// main(){
//    string S="abcdef";
//    S.insert(2,"ABC");
//    cout << S;
// }

// main(){
//    string S="abcdef";
//    S.replace(2,3,"AB");
//    cout<<S;
// }

// main(){
//    string S="abcdef";
//    S.erase(2,3);
//    cout<<S;
// }

// main(){
//    string S="abcadef";
//    int a=S.find('d');
//    int a=S.find('A');

//     int a = S.find('a',1);
//    int a = S.find("ad");
//    cout<<a;
// }


//Counting the input character in a string.

// main(){


//    string S ="abcabbcbf";
//    char ch;
//    cin>>ch;
//    int count = 0;
//    for(char x:S)
//    {
//       if(x==ch)
//       count++;
//    }

//    cout << count;
// }


// main(){
//    string S = "abcabbcbf";
//    string ch;
//    cin >> ch;
//    int count =0, pos=0;
//    while((pos=S.find(ch,pos))!=-1)
//    {
//       count++;
//       pos++;
//    }
//    cout << count;
// }



