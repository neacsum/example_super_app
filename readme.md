# Example repositories for C/C++ Package Management #
This is a sample application that can be built using  [CPM - A C/C++ Package Manager](https://github.com/neacsum/cpm). The application (`super-app`) uses two libraries (`cool_A` and `cool_B`) each one with its own repository. The CPM utility takes care of pulling the latest version of the application and each library, creating the necessary symbolic links and building everything. 

## Usage ##
To see how the whole package management system works, follow these steps:
- Download the [CPM utility](https://github.com/neacsum/cpm/releases/latest/download/cpm.exe) and place it somewhere on your path.
  ````
  cpm -u https://github.com/neacsum/example_super_app.git supper_app
  ````

This will produce two libraries (`cool_A.lib` and `cool_B.lib`) and one executable file (`super_app.exe`)