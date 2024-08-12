#include<iostream>
#include<vector>
#include<string>
using namespace std;
class task{
	public:
		//hold the task description
		string description;
		//to track wether the task is completed
		bool completed;
		//construtor
		task(string desc): description(desc),completed(false){}
};
//ToDolist to manage list of task
class ToDolist{
	private:
		//that store all the task in the ToDolist
		vector<task>tasks;
		// add a task to ToDo list
		public:
		 void addtask(){
				string desc;
				cout<<"Enter the task description";
				cin.ignore();
				getline(cin,desc);
				tasks.push_back(task(desc));
				cout<<"task added succecfully"<<endl;
		    }
				//view all task
				void viewtask(){
				
					  if (tasks.empty()){
					  cout<<" Hi user here is No any task ! "<<endl;
					  return;
				    }
				 cout<<"To Do list "<<endl;
				  for (size_t i=0;i<tasks.size();i++){
				  cout<<i+1<<"."<<(tasks[i].completed ? "[It is Done ]":"[ooh sorry it is not Done still now]")<<tasks[1].completed<<endl;
				}
			}
			void removetask(){
				int index;
				cout<<"Enter the task number to remove "<<endl;
				cin>>index;
				if (index<1||index>tasks.size()){
					cout<<"pleas sure you Entered invilid task number "<<endl;
				}
				tasks.erase(tasks.begin()+index -1);
				cout<<"The task is successfuly removed okay "<<endl;
			}
			void MarkTaskasDone(){
				int index;
				cout<<"Enetr the correct number of your task to mark as done "<<endl;
				if(index<1||index>tasks.size())
				{
					cout<<"you entered invilid task number sorry "<<endl;
					return;
				}
				tasks[index - 1].completed =true;
				cout<<"your task is Mark as Done "<<endl;
			}			
};
int main(){
	ToDolist mylist;
			cout<<"Enter 1 to add the task "<<endl;
				cout<<"Enter 2 to view the task "<<endl;
					cout<<"Enter 3 to remove the task "<<endl;
						cout<<"Enter 4 to Mark As Done the task "<<endl;
						cout<<"Enter 5 for Exiting application "<<endl;
	int choice;
	//to store user's menu choice
	cin>>choice;
	switch(choice){
		case 1:
			mylist.addtask();
			break;
			case 2:
				mylist.viewtask();
				break;
				case 3:
					mylist.removetask();
					break;
					case 4:
						mylist.MarkTaskasDone();
						break;
						case 5:
							cout<<"Exiting application "<<endl;
							default:
								cout<<"invalid number choice.pleas try again and don't mind  "<<endl;
	}
	while(choice !=5);
	return 0;
}