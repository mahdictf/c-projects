# c-projects


# VS Code Setup for C Programming

 VS Code configuration files to help you build and run C programs seamlessly on a Windows environment with F5.

## Configuration Files Overview

### 1. `tasks.json`

Defines tasks to build and run your C files.

```json
{
  "version": "2.0.0",
  "tasks": [
    {
      "label": "Build and Run C",
      "type": "shell",
      "command": "gcc",
      "args": [
        "${file}",
        "-o",
        "${fileDirname}\\${fileBasenameNoExtension}.exe"
      ],
      "group": {
        "kind": "build",
        "isDefault": true
      },
      "problemMatcher": ["$gcc"],
      "detail": "Compile current C file"
    },
    {
      "label": "Run C Executable",
      "type": "shell",
      "command": "${fileDirname}\\${fileBasenameNoExtension}.exe",
      "dependsOn": "Build and Run C",
      "group": {
        "kind": "test",
        "isDefault": true
      },
      "problemMatcher": []
    }
  ]
}
```

* **Build and Run C**: Compiles the current open C file using `gcc`.
* **Run C Executable**: Runs the compiled executable after building.

---

### 2. `launch.json`

Debug configuration for running C programs inside VS Code's integrated terminal.

```json
{
  "version": "0.2.0",
  "configurations": [
    {
      "name": "Run C program",
      "type": "cppvsdbg",
      "request": "launch",
      "program": "${fileDirname}\\${fileBasenameNoExtension}.exe",
      "args": [],
      "stopAtEntry": false,
      "cwd": "${fileDirname}",
      "environment": [],
      "console": "integratedTerminal",
      "preLaunchTask": "Build C"
    }
  ]
}
```

* Uses the Visual Studio C++ debugger (`cppvsdbg`) for debugging.
* Runs the executable in the integrated terminal.
* Automatically builds the program before launching the debugger.

---

### 3. `settings.json`

Editor and runner settings optimized for C development.

```json
{
  "workbench.iconTheme": "eq-material-theme-icons-deepforest",
  "debug.onTaskErrors": "debugAnyway",
  "[c]": {
    "editor.wordBasedSuggestions": "off",
    "editor.semanticHighlighting.enabled": true,
    "editor.stickyScroll.defaultModel": "foldingProviderModel",
    "editor.suggest.insertMode": "replace"
  },
  "code-runner.runInTerminal": true,
  "code-runner.executorMap": {
    "c": "gcc \"$fileName\" -o \"$fileNameWithoutExt.exe\" && .\\\"$fileNameWithoutExt.exe\""
  },
  "workbench.settings.applyToAllProfiles": []
}
```

* Enables semantic highlighting and disables word-based suggestions for C files.
* Configures **Code Runner** extension to compile and run C programs in the terminal.
* Customizes the VS Code icon theme.


