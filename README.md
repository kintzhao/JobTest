# JobTest





```yaml
name: C/C++ CI

on: [push]

jobs:
  build:

    runs-on: ubuntu-latest
    
    steps:
    - uses: actions/checkout@master # goto current repo
    - name: pwd  
      run: pwd
    - name: sudo apt-get -y install tree   
      run: sudo apt-get -y install tree 
    - name: tree -l
      run: tree -l
    - name: git status
      run: git status
    - name: cmake and make 
      run: |
          pwd
          tree -l
          mkdir -p build
          cd build
          cmake .. 
          tree -l
          make
          tree -l
    - name: current dirs
      run: pwd && tree -l 

```

