#include <iostream>
#include <string>
using namespace std;

int coursor;
string data1[36] = { //Keywords (n1)
    "CAN YOU ",
    "CAN I ",
    "YOU ARE ",
    "YOURE ",
    "I DONT ",
    "I FEEL ",
    "WHY DONT YOU ",
    "WHY CANT I ",
    "ARE YOU ",
    "I CANT ",
    "I AM ",
    "IM ",
    "YOU ",
    "I WANT ",
    "WHAT ",
    "HOW ",
    "WHO ",
    "WHERE ",
    "WHEN ",
    "WHY",
    "NAME",
    "CAUSE",
    "SORRY",
    "DREAM",
    "HELLO",
    "HI ",
    "MAYBE",
    " NO",
    "YOUR",
    "ALWAYS",
    "THINK",
    "ALIKE",
    "YES",
    "FRIEND",
    "COMPUTER",
    "NOKEYFOUND"
};
string data2[14]={ //Conjugations (n2)
    " ARE ",
    " AM ",
    " WERE ",
    " WAS ",
    " YOU ",
    " I ",
    "YOUR ",
    " MY ",
    " IVE ",
    " YOUVE ",
    " IM ",
    " YOURE ",
    " ME ",
    " !YOU "
};
string data3[112]={ //Replies (n3)
    "DON'T YOU BELIEVE THAT I CAN*",
    "PERHAPS YOU WOULD LIKE TO BE LIKE ME*",
    "YOU WANT ME TO BE ABLE TO*",
    "PERHAPS YOU DON'T WANT TO*",
    "DO YOU WANT TO BE ABLE TO*",
    "WHAT MAKES YOU THINK I AM*",
    "DOES IT PLEASE YOU TO BELIEVE I AM*",
    "PERHAPS YOU WOULD LIKE TO BE*",
    "DO YOU SOMETIMES WISH YOU WERE*",
    "DON'T YOU REALLY*",
    "WHY DON'T YOU*",
    "DO YOU WISH TO BE ABLE TO*",
    "DOES THAT TROUBLE YOU*",
    "DO YOU OFTEN FEEL*",
    "DO YOU OFTEN FEEL*",
    "DO YOU ENJOY FEELING*",
    "DO YOU REALLY BELIEVE I DON'T*",
    "PERHAPS IN GOOD TIME I WILL*",
    "DO YOU WANT ME TO*",
    "DO YOU THINK YOU SHOULD BE ABLE TO*",
    "WHY CAN'T YOU*",
    "WHY ARE YOU INTERESTED IN WHETHER OR NOT I AM*",
    "WOULD YOU PREFER IF I WERE NOT*",
    "PERHAPS IN YOUR FANTASIES I AM*",
    "HOW DO YOU KNOW YOU CAN'T*",
    "HAVE YOU TRIED?",
    "PERHAPS YOU CAN NOW*",
    "DID YOU COME TO ME BECAUSE YOU ARE*",
    "HOW LONG HAVE YOU BEEN*",
    "DO YOU BELIEVE IT IS NORMAL TO BE*",
    "DO YOU ENJOY BEING*",
    "WE WERE DISCUSSING YOU--NOT ME.",
    "OH, I*",
    "YOU'RE NOT REALLY TALKING ABOUT ME, ARE YOU?",
    "WHAT WOULD IT MEAN TO YOU IF YOU GOT*",
    "WHY DO YOU WANT*",
    "SUPPOSE YOU SOON GOT*",
    "WHAT IF YOU NEVER GOT*",
    "I SOMETIMES ALSO WANT*",
    "WHY DO YOU ASK?",
    "DOES THAT QUESTION INTEREST YOU?",
    "WHAT ANSWER WOULD PLEASE YOU THE MOST?",
    "WHAT DO YOU THINK?",
    "ARE SUCH QUESTIONS ON YOUR MIND OFTEN?",
    "WHAT IS IT THAT YOU REALLY WANT TO KNOW?",
    "HAVE YOU ASKED ANYONE ELSE?",
    "HAVE YOU ASKED SUCH QUESTIONS BEFORE?",
    "WHAT ELSE COMES TO MIND WHEN YOU ASK THAT?",
    "NAMES DON'T INTEREST ME.",
    "I DON'T CARE ABOUT NAMES --PLEASE GO ON.",
    "IS THAT THE REAL REASON?",
    "DON'T ANY OTHER REASONS COME TO MIND?",
    "DOES THAT REASON EXPLAIN ANYTHING ELSE?",
    "WHAT OTHER REASONS MIGHT THERE BE?",
    "PLEASE DON'T APOLOGIZE!",
    "APOLOGIES ARE NOT NECESSARY.",
    "WHAT FEELINGS DO YOU HAVE WHEN YOU APOLOGIZE?",
    "DON'T BE SO DEFENSIVE!",
    "WHAT DOES THAT DREAM SUGGEST TO YOU?",
    "DO YOU DREAM OFTEN?",
    "WHAT PERSONS APPEAR IN YOUR DREAMS?",
    "ARE YOU DISTURBED BY YOUR DREAMS?",
    "HOW DO YOU DO ...PLEASE STATE YOUR PROBLEM.",
    "YOU DON'T SEEM QUITE CERTAIN.",
    "WHY THE UNCERTAIN TONE?",
    "CAN'T YOU BE MORE POSITIVE?",
    "YOU AREN'T SURE?",
    "DON'T YOU KNOW?",
    "ARE YOU SAYING NO JUST TO BE NEGATIVE?",
    "YOU ARE BEING A BIT NEGATIVE.",
    "WHY NOT?",
    "ARE YOU SURE?",
    "WHY NO?",
    "WHY ARE YOU CONCERNED ABOUT MY*",
    "WHAT ABOUT YOUR OWN*",
    "CAN YOU THINK OF A SPECIFIC EXAMPLE?",
    "WHEN?",
    "WHAT ARE YOU THINKING OF?",
    "REALLY, ALWAYS?",
    "DO YOU REALLY THINK SO?",
    "BUT YOU ARE NOT SURE YOU*",
    "DO YOU DOUBT YOU*",
    "IN WHAT WAY?",
    "WHAT RESEMBLANCE DO YOU SEE?",
    "WHAT DOES THE SIMILARITY SUGGEST TO YOU?",
    "WHAT OTHER CONNECTIONS DO YOU SEE?",
    "COULD THERE REALLY BE SOME CONNECTION?",
    "HOW?",
    "YOU SEEM QUITE POSITIVE.",
    "ARE YOU SURE?",
    "I SEE.",
    "I UNDERSTAND.",
    "WHY DO YOU BRING UP THE TOPIC OF FRIENDS?",
    "DO YOUR FRIENDS WORRY YOU?",
    "DO YOUR FRIENDS PICK ON YOU?",
    "ARE YOU SURE YOU HAVE ANY FRIENDS?",
    "DO YOU IMPOSE ON YOUR FRIENDS?",
    "PERHAPS YOUR LOVE FOR FRIENDS WORRIES YOU.",
    "DO COMPUTERS WORRY YOU?",
    "ARE YOU TALKING ABOUT ME IN PARTICULAR?",
    "ARE YOU FRIGHTENED BY MACHINES?",
    "WHY DO YOU MENTION COMPUTERS?",
    "WHAT DO YOU THINK MACHINES HAVE TO DO WITH YOUR PROBLEM?",
    "DON'T YOU THINK COMPUTERS CAN HELP PEOPLE?",
    "WHAT IS IT ABOUT MACHINES THAT WORRIES YOU?",
    "SAY, DO YOU HAVE ANY PSYCHOLOGICAL PROBLEMS?",
    "WHAT DOES THAT SUGGEST TO YOU?",
    "I SEE.",
    "I'M NOT SURE I UNDERSTAND YOU FULLY.",
    "COME COME ELUCIDATE YOUR THOUGHTS.",
    "CAN YOU ELABORATE ON THAT?",
    "THAT IS QUITE INTERESTING."
};
int data4[72]={ //Reply search
    1,3,4,2,6,4,6,4,10,4,14,3,17,3,20,2,22,3,25,3,
    28,4,28,4,32,3,35,5,40,9,40,9,40,9,40,9,40,9,40,9,
    49,2,51,4,55,4,59,4,63,1,63,1,64,5,69,5,74,2,76,4,
    80,3,83,7,90,3,93,6,99,7,106,6
};

void tab(int t) {
    for (int i = 0; i < t; i++) {
        cout << " ";
    }
}

string read1(int x) { //keywords
    string r1 = data1[x];
    x += 1;
    return r1;
}

string read2(int x) { //conjugations
    string r2 = data2[x];
    x += 1;
    return r2;
}

string read3(int x) { //replies
    string r3 = data3[x];
    x += 1;
    return r3;
}

int read4(int x) { //keyword numbers
    int r4 = data4[x];
    x += 1;
    return r4;
}

void inp(string& I, string P, int L);

void goto170(string I, string P, int L) {
    inp(I, P, L);
    //    rep(I, P, L);
}

void goto390(int x, int n1, string z) {
    for (x = 0; x < n1; x++) {
        z = read1(x);
    }
}
/*
void goto570(int x, int n1, int n2, string z, int r[36], int k, string F, int n[36], int s[36], string P, string I, int L, string C) {
    x = 0;
    for (x = 0; x < n1 + n2; x++) {
        z = read1(x);
    }
    for (x = 0; x < r[k]; x++) {
        F = read3(x);
    }
    r[k] += 1;
    if (r[k] > n[k]) {
        r[k] = s[k];
    }
    if (F.substr(F.length() - 1, 1) != "*") { //OOR
        cout << F << "\n";
        P = I;
        goto170(I, P, L);
    }
    //needed?
    cout << F.substr(F.length() - 2) << C << "\n";
    P = I;
    goto170(I, P, L);
}
*/
void restore(int x, string z, int n1, int n2, int n3) {
    for (x = 0; x < n1 + n2 + n3; x++) {
        z = read1(x);
    }
}

void inp(string& I, string P, int L) {
    cout << "? ";
    getline(cin, I);
    I = " " + I + " ";
    //cout << "I1: " << I << endl;
    for (L = 0; L < I.length(); L++) {
        if (I[L] == '\'') { //??? 230
            I = I.substr(0, L) + I.substr(L + 1, I.length() - L - 1); //substr(позиция, длина)
        }
        if (L + 4 <= I.length()) { //L+5?
            if (I.substr(L, 4) == "SHUT") {
                cout << "SHUT UP...";
                exit(0); //end
            }
        }
    }
    if (I == P) { //fix
        cout << "PLEASE DON'T REPEAT YOURSELF! \n";
        goto170(I, P, L);
    }
}

int main() {
    tab(26);
    cout << "ELIZA \n";
    tab(20);
    cout << "CREATIVE COMPUTING \n";
    tab(18);
    cout << "MORRISONTOWN, NEW JERSEY \n \n \n \n";
    
    int s[36], r[36], n[36], n1 = 36, n2 = 14, n3 = 112, L, S, T, k, x;
    string z, I, P, ks, F, C, Ss, R;
    bool G390;

    for (x = 0; x < n1 + n2 + n3; x++) {
        z = read1(x);
    }

    for (x = 0; x < n1; x++) { //x - keyword
        s[x] = read4(x); //ordinal number of the start of the reply strings for keywords
        L = read4(x); //scan through strings
        r[x] = s[x]; //the reply to be used next
        n[x] = s[x] + L - 1; //last reply for the keyword
    }
    cout << "HI!  I'M ELIZA.  WHAT'S YOUR PROBLEM? \n";
    P = "";
    while (I != "SHUT") {
        G390 = false;
        inp(I, P, L);
        restore(x, z, n1, n2, n3);
        S = 0;
        x = 0;

        for (int k = 0; k < n1; k++) {
            ks = read1(x);
            x++;
            if (S > 0) {
                continue;
            }
            //cout << "Test: " << I.substr(0, 3) << endl;
            for (L = 0; L < I.length(); L++) { //MODIFIED:  I.length() - ks.length() + 1
            //    cout << "L: " << L << endl;
            //    cout << "I[L]: " << I[L] << endl;
            //    cout << "ks: " << ks << endl;
            //    cout << "I len: " << I.length() << " ks len: " << ks.length() << endl;
            //    cout << "Index check: " << I.substr(L, ks.length()) << endl;
                if (I.substr(L, ks.length()) == ks) {
                    S = k;
                    T = L;
                    F = ks;
                    break; //optional?
                }
            }
        }
        if (S > 0) {
            G390 = true;
            k = S;
            L = T;
            x = 0; //restore
            //goto390
            for (x = 0; x < n1; x++) {
                z = read1(x);
            }
            C = " " + I.substr(F.length() + L, I.length() - F.length() - L + 1) + " ";//OOR
            //C = " " + I.substr(I.length() - (I.length() - F.length() - L), I.length() - F.length() - L + 1) + " ";//OOR
            for (x = 0; x < n2 / 2; x++) { //data123?
                Ss = read1(x);
                R = read1(x);
                for (L = 0; L < C.length(); L++) {
                    if (L + Ss.length() > C.length()) {
                        if (L + R.length() > C.length()) {
                            continue;
                        }
                    }
                    if (C.substr(L, Ss.length()) != Ss) {
                        if (L + R.length() > C.length()) {
                            continue;
                        }
                    }
                    C = C.substr(0, L) + R + C.substr(C.length() - (C.length() - Ss.length() - L), C.length() - Ss.length() - L + 1); //L-1 длина?
                    L += R.length();
                    //530???????????????????????
                }
            }
            if (C.substr(1, 1) == " ") {
                C = C.substr(C.length() - 2, 2); //1 space?
            }
            for (L = 0; L < C.length(); L++) {
                if (C.substr(L, 1) == "!") {
                    C = C.substr(0, L - 1) + C.substr(C.length() - (C.length() - L));
                }
            }
        }
        if (G390 == false) {
            k = 36;
        }
        //goto570(x, n1, n2, z, r, k, F, n, s, P, I, L, C); //r/n/s[36]
        x = 0;
        for (x = 0; x < n1 + n2; x++) {
            z = read1(x);
        }
        for (x = 0; x < r[k]; x++) {
        //    cout << "r[k]: " << r[k] << endl;
            F = read3(x);
        }
        r[k] += 1;
        if (r[k] > n[k]) {
            r[k] = s[k];
        }
        if (F.substr(F.length() - 1, 1) != "*") { //OOR
            cout << F << "\n";
            P = I;
            continue;
        }
        //needed?
        cout << F.substr(F.length() - 2) << C << "\n";
        P = I;   
    }
}
//https://emscripten.org/docs/getting_started/Tutorial.html