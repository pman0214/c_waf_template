#! /usr/bin/env python
# encoding: utf-8
#
# Copyright (c) 2022 Shigemi ISHIDA
#
# This software is released under the MIT License.
# http://opensource.org/licenses/mit-license.php

APPNAME='my'
VERSION="0.0.1"

top='.'
out='build'

def options(opt):
    opt.load('compiler_c')

def configure(conf):
    conf.env.CXXFLAGS+=['-Wall']
    conf.load('compiler_c')
    
    conf.recurse('libtool')

    conf.env.VERSION=VERSION
    conf.env.INCLUDES += ['libtool']

def build(bld):
    bld.recurse('libtool')
    bld.program(
        source=['main.c',
                'temp.c',
                ],
        defines=['TARGET="'+APPNAME+'"'],
        target=APPNAME,
        use=['tool'],
        vnum=bld.env.VERSION,
        )
