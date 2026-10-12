#include <iostream>
#include <cmath>

using namespace std;


int main()
{
bool verite(true);
cout << verite ;

cout<<"Hello World" << endl << "traduction : \"Bonjour Monde\"" << endl;

string monPrenom;
cout<< "Quel est ton prénom ?: "<< endl;
getline (cin, monPrenom);
cout << "Enchanté, " << monPrenom << endl;

int age;
do
{
    cout<<"Tu as quel age ? : " << endl;
    cin >> age;
    
    if (age > 0 and age <= 105)
        cout << "Enchanté, tu es donc " << monPrenom << " et tu es agé de " << age << " ans. Maintenant, choisis un nombre " << endl;
    else
    {
        cout<< "Tape un âge cohérent" <<endl;
    }
}while(age < 0 or age > 105);


int a;
cin>>a;
cout<< "Bien choisissez à présent un deuxieme nombre ";
int b;
cin>>b;
int c=a+b;
cout << "L'addition de ces deux nombres est de  " << c << endl;
cout << "Tu me dois donc " << c << " euros mon ami ^^";


return 0;

}
