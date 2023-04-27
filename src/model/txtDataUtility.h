/*

Blank space for documentation later

*/

#ifndef DATAPARSER_H
#define DATAPARSER_H

#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include "task.h"
#include "note.h"
#include "json.hpp"

using json = nlohmann::json;

// bool validateFile(std::string filename);

// data reading
json fileReader(std::string filename);
std::vector<Task> readTasks(json projectData);
std::vector<Note> readNotes(json projectData);
std::string readDescription(json projectData);
std::string readLastAction(json projectData);

// data writing
bool writeTasks(std::vector<Task> tasks);
bool writeNotes(std::vector<Note> notes);
bool writeDescription(std::string description);
bool writeLastAction(std::string lastAction);

#endif