#pragma once
#include <string>
#include <vector>

class ofFileDialogResult{
	public:
		ofFileDialogResult();
		
		//TODO: only 1 file for now
		std::string getName();
		std::string getPath();
		
		std::string filePath;
		std::string fileName;

		std::vector<std::string> filePaths;
		std::vector<std::string> fileNames;
		bool bSuccess;
		bool multiple() { return filePaths.size() > 0; }
};

void ofSystemAlertDialog(std::string errorMessage);
ofFileDialogResult ofSystemLoadDialog(std::string windowTitle = "", bool bFolderSelection = false, std::string defaultPath = "", const wchar_t * formatstring = L"All\0");
ofFileDialogResult ofSystemSaveDialog(std::string defaultName, std::string messageName, std::string defaultPath = "", const wchar_t * formatstring = L"");
std::string ofSystemTextBoxDialog(std::string question, std::string text="");
