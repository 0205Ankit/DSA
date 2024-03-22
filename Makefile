# Define the folder structure
folder := $(input)

.PHONY: create

create:
	@mkdir -p $(folder)/C++
	@mkdir -p $(folder)/javascript
	@touch $(folder)/C++/solution.cpp
	@touch $(folder)/javascript/solution.js
	@touch $(folder)/readme.md