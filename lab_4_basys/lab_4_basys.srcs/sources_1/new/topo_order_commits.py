#!/usr/bin/env python3
import os, zlib, sys

def topo_order_commits():
    git_dir = check_dir(get_cwd())
    if git_dir == 0:
        sys.stderr.write("Not inside a Git repository \n")
        sys.exit(1)
    else:
        print(git_dir)


def get_cwd():
    return os.getcwd()

def check_dir(d):
    if d == "..":
        os.chdir("..")
        d = get_cwd()
    if d == "/":
        return 0
    elif os.path.exists(".git"):
        return get_cwd()
    else:
        return check_dir("..")

if __name__ == "__main__":
    topo_order_commits()
