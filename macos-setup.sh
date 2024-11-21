#!/bin/bash

# Check if Homebrew is installed
if ! command -v brew &> /dev/null; then
    echo "Homebrew not found. Installing Homebrew..."
    /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
else
    echo "Homebrew already installed. Updating..."
    brew update
fi

# Install SFML
echo "Installing SFML..."
brew install sfml

# Print SFML location for Xcode configuration
echo "SFML installation complete!"
echo "SFML location: $(brew --prefix sfml)"