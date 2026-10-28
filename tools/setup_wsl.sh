set -e
cd /opt
curl -fsSL https://nodejs.org/dist/v24.22.1/node-v24.22.1-linux-x64.tar.xz | tar -xJ
ln -sf /opt/node-v24.22.1-linux-x64/bin/node /usr/local/bin/node
ln -sf /opt/node-v24.22.1-linux-x64/bin/npm /usr/local/bin/npm
ln -sf /opt/node-v24.22.1-linux-x64/bin/npx /usr/local/bin/npx
unzip -q -o /mnt/d/Unity/Foodie/tools/ghidra_12.1.4.zip -d /opt/ghidra
npm install -g rea-agents 2>&1 | tail -3
ln -sf /opt/node-v24.22.1-linux-x64/bin/rea /usr/local/bin/rea
node -v; rea --version; ls /opt/ghidra
