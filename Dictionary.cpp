//                             DICTIONARY                                  //
#include<iostream>
#include<map>
#include<string>
using namespace std;

int main() 
{
	   map<string,string> WordMean;
	   string word,meaning;
	   int choice,end=1;
    cout<<"This program implements the Dictionary....\nThere are 3 operations i.e search, insert and display...\n";
	   map<string,string>::iterator iter;
	   while(end)
	   {
	     cout<<"Menu.....\n1. Search\n2. Insert\n3. Display\n0. Exit"<<endl;            //Enter the choice
	     cin>>choice;
	     getchar();
		    switch(choice)
		    {
			     case 1: //Search word
					         cout<<"Enter the word to be searched : ";
					         cin>>word;
					         getchar();
					         iter=WordMean.find(word);
					         if(iter!=WordMean.end())
             {
               cout<<"Word         Meaning\n";
					          	cout<<iter->first<<"------ "<<iter->second<<endl;
					         }
				          else
					         {
						          cout<<"The Word Not found"<<endl;
					         }
					         break;		
			     case 2: //insert word and meaning in the map
				          cout<<"Enter the Word to insert : "<<endl;
				          cin>>word;
				          getchar();
				          cout<<"Enter the meaning : ";
			    	      getline(cin,meaning);
				          WordMean.insert(pair<string,string>(word,meaning));
				          break;
			     case 3://Display the map
             if(WordMean.size())
             {
				            cout<<"The words in the dictionary are: "<<endl;
				            cout<<"Word         Meaning\n";
                for(iter=WordMean.begin();iter!=WordMean.end();++iter)
				            {
					              cout<<iter->first<<"--------"<<iter->second<<endl;
				            }
              }
              else
                cout<<"Dictionary is Empty...\n";
				          cout<<endl;
				          break;
			     case 0://Exit
              cout<<"Exiting.....";
			          	exit(1);
		     }
	  }	
	return 0;
}
