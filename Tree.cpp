    #include <iostream>
    // First work a c++
    
    using namespace std;

    int block = 0;

    struct Optional {
	  int amountBranches;
	  int amountLeaves;
    };

    struct Tree {
	  string name;
  	int years;
  	char colorTree;
  	int AmountOfLiving;
  	double temperature;
  	Optional optional;
    };



    void printInformationOnTree(Tree tree) {
  	if (block == 1) {
		double ratioBranchesAndLeaves = tree.optional.amountLeaves / tree.optional.amountBranches;

		cout << "\n       |Your created tree is: " << tree.name << "|      "
			<< "\n Years is - " << tree.years << "." << endl
			<< " Color tree - " << tree.colorTree << "." << endl
			<< " Amount of living - " << tree.AmountOfLiving << "." << endl
			<< " Temperature - " << tree.temperature << "." << endl
			<< "          | " << tree.name << " Optional|     " << endl
			<< " Amount branches - " << tree.optional.amountBranches << "." << endl
			<< " Amount leaves - " << tree.optional.amountLeaves << "." << endl
			<< "\n     Ratio Leaves/Branches is  Branches1=" << ratioBranchesAndLeaves << "Leaves" << endl;
  	}
  	else { cout << "\n      E R R O R   "; }
    }

    void createTree(Tree tree) {

  	cout << "   Hello, Create new Tree!";

  	cout << "\n Enter Name: ";
  	cin >> tree.name;
  	cout << "\n Enter Years: ";
  	cin >> tree.years;
  	cout << "\n Enter Color tree: ";
  	cin >> tree.colorTree;
  	cout << "\n Enter Amount of living: ";
  	cin >> tree.AmountOfLiving;
  	cout << "\n Enter Temperature: ";
  	cin >> tree.temperature;

  	cout << "\n   Create your " << tree.name << " Optional!";
  	cout << "\nEnter Amount branches: ";
  	cin >> tree.optional.amountBranches;
  	cout << "\nEnter Amount leaves: ";
  	cin >> tree.optional.amountLeaves;

	  cout << "\n\n    Print information on tree?"
		<< "    Enter \"Yes\" or \"No\"" << endl;

  	string print;
	  cin >> print;

  	if (print == "Yes"){
		block = 1;
		printInformationOnTree(tree);
  	}else {}

    }
	


    int main() {

	  Tree tree;
	
	  createTree(tree);
    }
