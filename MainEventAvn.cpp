#include<iostream>
#include<string>
#include<vector>
using namespace std;

#define dialogOut for(auto i = dialogAvn.begin(); i != dialogAvn.end(); i++) cout << *i; // #define ให้ cout dialog ออกมา

vector<string> dialogAvn;

void pressEnterAvn(){ // กด Enter เปลี่ยนฉาก
    cout << "Press Enter to continue...";
    cin.ignore();
    cin.get();
    system("cls");
}

void Summary(int &con){
    system("cls");
    if(con == 1){
        cout << "*****************************************************************\n";
        cout << "   Within this city there are very beautiful old houses. There\nis a nature of trees that are lush green. It goes well with\ntraditional houses built of stone, merging with streams and small roads.\n";
        cout << "\n   When the dwarfs knew that you could cross the bridge, they\nwere very happy. In the past, it was seen that the gap between\nbridges was very wide. But now it's not wide anymore because you\nbelieved in your power. You destroyed the spell and helped the\ndwarfs to come out of the city\n";
        cout << "\n   So they gave you an Aventurine, the \"Crystal of opportunity\".\n";
        cout << "\n   Aventurine Great for purification and opening the mind to\nnew possibilities, Aventurine can also boost creativity, calm the\nnerves before stressful situations, and ward off bad energies from\n“psychic vampires” in your life.\n";
        cout << "\n   A whole town of dwarves come out to send you to the city\ngates with a gratefulness.\n";
        cout << "\n*****************************************************************\n";
        pressEnterAvn();
    }
}

void Avn(int &hp, int &money){
    int answer, con;
    while(true){
        system("cls");
        dialogAvn.push_back("*****************************************************************\n");
        dialogAvn.push_back("   In the middle of the day when the sun is very strong. As you\nwalk on a bridge across a river in front of one of the city gates\nand find that three of the timbers of the bridge were broken.\nUnderneath there\'s an open-mouthed crocodile waiting just where you\nstand. A light breeze blew and made the bridge sway back and forth.\n");
        dialogAvn.push_back("\n*****************************************************************\n");
        dialogAvn.push_back("-----------------------------------------------------------------\n");
        dialogAvn.push_back("Do you think your legs are long enough to cross this gap of the bridge?\n\n");
        dialogAvn.push_back("1) I think my legs are long enough to cross it for sure!\n\n2) I don't think my legs are long enough to cross it!\n");
        dialogAvn.push_back("-----------------------------------------------------------------\n");
        dialogAvn.push_back("Your Choice: ");
        dialogOut;
        cin >> answer;
        if(answer == 1){
            dialogAvn.erase(dialogAvn.begin() + 4, dialogAvn.begin() + 6); // ลบคำถามกับตัวเลือก
            dialogAvn.insert(dialogAvn.begin() + 2, "\n   The river seemed to be flowing faster.\n");
            dialogAvn.insert(dialogAvn.begin() + 5, "Do you think you'll fall in to the river?\n\n");
            dialogAvn.insert(dialogAvn.begin() + 6 ,"1) No, I don't think so.\n\n2) Yes, I think I'll fall in to the river. \n");
            system("cls");
            dialogOut;
            cin >> answer;
            if(answer == 1){
                system("cls");
                dialogAvn.erase(dialogAvn.begin() + 5, dialogAvn.begin() + 7); // ลบคำถามกับตัวเลือก
                dialogAvn.insert(dialogAvn.begin() + 5, "Will you cross it?\n\n");
                dialogAvn.insert(dialogAvn.begin() + 6, "1) Yes,I will.\n\n2) No,I won't.\n");
                dialogOut;
                cin >> answer;
                if(answer == 1){
                    system("cls");
                    dialogAvn.erase(dialogAvn.begin() + 4, dialogAvn.end()); // ลบคำถามกับตัวเลือก
                    dialogAvn.insert(dialogAvn.begin() + 3, "\n   You decided to cross it. You has successfully crossed. This is\nthe bridge that crosses to Bibury, where the dragon cast a magic\nspell that illustrates the distance of the broken bridge was large\nbut once you have jumped over, you will find that it's easy\nto cross, not that far.\n");
                    dialogOut;
                    con = 1;
                    break;
                }else if(answer == 2){
                    system("cls");
                    dialogAvn.erase(dialogAvn.begin() + 3, dialogAvn.end()); // ลบคำถามกับตัวเลือก
                    dialogAvn.insert(dialogAvn.begin() + 3, "\n   You decided not to cross it. You stumble upon a stone on the\nwayside and fall into the river. Suddenly, a whole herd of\ncrocodiles is heading towards you. Both small and large crocodiles\nswim swiftly. The eyes stare at you with a fierce gaze as a\nprey. You tried to scramble up. Fortunately, in the end, you are\nable to make the climb in time.\n");
                    dialogAvn.insert(dialogAvn.begin() + 4, "\n   You are all soak, very tired and barely able to breathe. After\nyou sit down and rest until your tiredness is gone\n");
                    dialogOut;
                    hp -= 1;
                    cout << "\nYour HP: " << hp << "(-1)\n";
                    cout << "\n   You continue the journey.\n";
                    cout << ("\n*****************************************************************\n");
                    break;
                }
            }if(answer == 2){
                system("cls");
                dialogAvn.erase(dialogAvn.begin() + 5, dialogAvn.begin() + 7); // ลบคำถามกับตัวเลือก
                dialogAvn.insert(dialogAvn.begin() + 5, "Will you cross it?\n\n");
                dialogAvn.insert(dialogAvn.begin() + 6, "1) Yes, I will.\n\n2) No, I won't.\n");
                dialogOut;
                cin >> answer;
                if(answer == 1){
                    system("cls");
                    dialogAvn.erase(dialogAvn.begin() + 4, dialogAvn.end()); // ลบคำถามกับตัวเลือก
                    dialogAvn.insert(dialogAvn.begin() + 3, "\n    You decided to cross it. At that moment, there was a strong\nwind blowing as you jumped. till you lose your balance Staggered into the\nfence of the bridge until it almost fell, but you were still\nable to hold onto the fence firmly in time. So you can cross safely. \n");
                    dialogOut;
                    con = 1;
                    break;
                }else if(answer == 2){
                    system("cls");
                    dialogAvn.erase(dialogAvn.begin() + 3, dialogAvn.end()); // ลบคำถามกับตัวเลือก
                    dialogAvn.insert(dialogAvn.begin() + 3, "\n   You decided not to cross it. Then you walk along the riverbank.\n");
                    dialogOut;
                    cout << "\n   You continue the journey.\n";
                    cout << ("\n*****************************************************************\n");
                    break;
                }
            }
        }else if(answer == 2){
            dialogAvn.erase(dialogAvn.begin() + 4, dialogAvn.begin() + 6); // ลบคำถามกับตัวเลือก
            dialogAvn.insert(dialogAvn.begin() + 2, "\n   The river seemed to be flowing faster.\n");
            dialogAvn.insert(dialogAvn.begin() + 5, "Do you think you'll fall in to the river?\n\n");
            dialogAvn.insert(dialogAvn.begin() + 6 ,"1) No, I don't think so.\n\n2) Yes, I think I'll fall in to the river. \n");
            system("cls");
            dialogOut;
            cin >> answer;
            if(answer == 1){
                system("cls");
                dialogAvn.erase(dialogAvn.begin() + 5, dialogAvn.begin() + 7); // ลบคำถามกับตัวเลือก
                dialogAvn.insert(dialogAvn.begin() + 5, "Will you cross it?\n\n");
                dialogAvn.insert(dialogAvn.begin() + 6, "1) Yes, I will.\n\n2) No, I won't.\n");
                dialogOut;
            }if(answer == 2){
                system("cls");
                dialogAvn.erase(dialogAvn.begin() + 5, dialogAvn.begin() + 7); // ลบคำถามกับตัวเลือก
                dialogAvn.insert(dialogAvn.begin() + 5, "Will you cross it?\n\n");
                dialogAvn.insert(dialogAvn.begin() + 6, "1) Yes, I will.\n\n2) No, I won't.\n");
                dialogOut;
            }
        }
    }
    pressEnterAvn();
    Summary(con);
}

int main(){
    int hp = 5, money = 30;
    Avn(hp, money);
}