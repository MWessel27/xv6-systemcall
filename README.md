# xv6-systemcall
# xv6 on QEMU
1. Download the tar file from here: https://campus.fsu.edu/bbcswebdav/pid-8463098-dt-content-rid-50739172_2/xid-50739172_2
2. Extract the tar file
3. scp the executed files to linprog
    - scp -r xv6-public-xv6-rev9 <username>@linprog.cs.fsu.edu:/home/majors/<username>/<project directory>
4. ssh into linprog and navigate to /<project directory>
5. Run 'make' to create xv6.img
6. Run 'make qemu-nox' to run xv6 on linprog

<p align="center">
  <img src="./img/xv6_linprog.png" width="350"/>
</p>