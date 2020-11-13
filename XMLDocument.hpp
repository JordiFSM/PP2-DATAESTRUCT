#include "tree.hpp"
#include "utilitarios.hpp"

class XMLDocument {
	private:// Function operating modes, use the constant names and not the values in the code
	const int ADD = 100;	// Mode addition, adds the value to the beginning of the set
                                // as allowed by the specific function (with or without repetition)
	const int OVR = 200;	// Mode overwrite, if it already exists, replaces the value, if not, just add it.
	const int APD = 300;	// Mode append, appends the value to the end of the set as
                                // allowed by the specific function (with or without repetition)
	const int DEL = 400;	// Mode delete, if the value exists, it is deleted instead
	
	// Node content location type
	const int BEG = 10;		// Content is displayed before children of node, just after the opening tag.
	const int END = 20;		// Content is displayed after children of node, just before the closing tag.
    tree *ptree;
	// Public functions
	public:
    XMLDocument();
	int   Root (char *name);
	bool  Select (int id);
	int   Child (char *name);
	int   Child (char *name, char *content);
	bool  EditAttribute (char *key, char *value, int mode);
	bool  EditContent (char *content, int mode);
	bool  SwitchContentPosition ();
	bool  SetBalanced ();
	bool  Delete ();
	char* ViewTree ();
	char* ViewNode ();
	char* ViewXML ();
	bool  Save (char *filename);
};