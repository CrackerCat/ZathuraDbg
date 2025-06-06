# ZathuraDbg
<img width="100" src="https://i.ibb.co/wCfN9dg/a-simplistic-app-icon-illustration-of-a-mysterious-8-Nv13mot-SFSz3-GY8uhfpd-Q-yms-YVJp-JS8u-Swlx-KNK.jpg">

[![Discord](https://img.shields.io/badge/chat-on%20Discord-green.svg)](https://discord.gg/dyMuwaZfPf)

A GUI open-source assembly emulator-based debugger. Mainly for reverse engineering and learning assembly. Under development, aims to support all major architecture. Powered by Unicorn, Capstone and Keystone Engine.

ZathuraDbg is still in beta, so expect major changes in the framework used or the UI, etc.

# Screenshots
<img src="https://i.ibb.co/7SYVRZG/image.png">

<img src="https://i.ibb.co/s90gWVq/image.png">

<img src="https://i.ibb.co/Kytmwj1/image.png">

# Installation
## Linux
1. Download the AppImage from the [releases](https://github.com/ZathuraDbg/ZathuraDbg/releases) page.
2. Execute `chmod +x ZathuraDbg-*AppImage`
3. Run the program with `./ZathuraDbg-*AppImage`
   
Make sure you have glibc 2.38 or later installed.

## Windows
Download and run the installer from the [releases](https://github.com/ZathuraDbg/ZathuraDbg/releases) page.

# Usage
- [Video Tutorial](https://www.youtube.com/watch?v=NMq5xL3v2hw)

# Compilation
Read [COMPILE.md](/COMPILE.md) to compile ZathuraDbg on your machine.

# Contributing
- To implement a new architecture to work with ZathuraDbg, read [ARCHITECTURE.md](https://github.com/ZathuraDbg/ARCHITECTURE.md)
- For making general contributions read [CONTRIBUTING.md](CONTRIBUTING.md)
- If you have any questions you can always contact us or open an issue.

# Credits
- [mrexodia](https://github.com/mrexodia) for helping me with Unicorn related issues
- [WerWolv](https://github.com/WerWolv/) for help with ImGui
- [NSG650](https://github.com/NSG650) for Windows Build.
- everyone else who supported this project

# FAQs
Q. Can ZathuraDbg debug binaries?    
A. No, ZathuraDbg does not have this feature yet.     
    
Q. Does ZathuraDbg support syscalls and OS level APIs?    
A. Common syscalls are planned to be implemented in the future.    

Q. Which architectures are currently supported in ZathuraDbg?    
A. Intel x86_64 and ARM 32 bit, Thumbv7m and AArch64.
