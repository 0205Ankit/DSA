# Define the folder structure
folder := $(input)

.PHONY: create

define CPP_TEMPLATE
#include<vector>
#include<string>
#include<iostream>

using namespace std;

int main() {}
endef
export CPP_TEMPLATE

create:
	@mkdir -p $(folder)/C++
	@mkdir -p $(folder)/javascript
	echo "$$CPP_TEMPLATE" > $(folder)/C++/solution.cpp
	@touch $(folder)/javascript/solution.js
	@touch $(folder)/readme.md