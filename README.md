# ChatGPT for PowerToys Run
[![Build](https://github.com/SamGreenwood1/T3ChatPowerToys/actions/workflows/build.yml/badge.svg)](https://github.com/ferraridavidehttps://github.com/SamGreenwood1/T3ChatPowerToys/actions/workflows/build.yml)
<p align="center">
    <img alt="logo" src="./demo.gif">
</p>

### How to install
If you simply want to install the plugin to get up and running quickly, i suggest downloading the [precompiled binaries](https://github.com/SamGreenwood1/T3ChatPowerToys/releases) from the Release section.
The installation process goes as follows:
1. Locate your PowerToys installation (eg. `C:\Program Files\PowerToys`)
1. Navigate to `\RunPlugins`
1. Unpack the downloaded binaries

### Compiling the plugin
1. Clone the PowerToys repository to your local disk using the command `git clone https://github.com/SamGreenwood1/T3ChatPowerToys.git`
1. Navigate to the PowerToys directory using `cd PowerToys`
1. Initialize and update submodules with the command `git submodule update --init --recursive`
1. Fork the ChatGPTPowerToys repository on GitHub
1. Clone the fork of ChatGPTPowerToys into the local PowerToys repository by running `git clone https://github.com/SamGreenwood1/T3ChatPowerToys.git` in the `PowerToys\src\modules\launcher\Plugins` directory
1. In Visual Studio, add the local clone of ChatGPTPowerToys as an existing project to the PowerToys's Plugins folder (`modules\launcher\Plugins`)
1. Compile

For **PWA support**, see [#13](https://github.com/SamGreenwood1/T3ChatPowerToys/issues/13)
