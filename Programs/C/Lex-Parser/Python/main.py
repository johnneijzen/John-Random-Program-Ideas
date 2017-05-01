'''
The MIT License (MIT)

Copyright (c) 2015-2017 John Neijzen

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
'''

'''
    @author:    John V. Neijzen
    @activity:  Final Project
    @section:   CS 22.1 b
    @version:   0.2
    @Change-logs:
        0.1 - First Draft
        0.2 - small bug fix
'''

# list of Token Names
tokens = (
    'ID',
    'DIGIT',
    'ADD',
    'SUB',
    'MUL',
    'DIV',
    'EQUALS',
    'LPAREN',
    'RPAREN',
)

# Regular Expression rules for simple tokens
t_ADD = r'\+'
t_SUB = r'-'
t_MUL = r'\*'
t_DIV = r'/'
t_EQUALS = r'='
t_LPAREN = r'\('
t_RPAREN = r'\)'

# Ignored characters
t_ignore = " \t\n"

# A regular expression rule with some action code
def t_DIGIT(t):
    r'\d+'
    t.value = int(t.value)
    return t

def t_ID(t):
    r'[A_B_C]'
    return t

def t_error(t):
    print("Illegal character '%s'" % t.value[0])
    t.lexer.skip(1)

# Build the lexer
import lex
lexer = lex.lex()

def p_assign(p):
    '''assign : ID EQUALS expr '''

def p_expr(p):
    '''expr : expr ADD term
        | expr SUB term
        | term '''

def p_term(p):
    ''' term : term MUL factor
        | term DIV factor
        | factor '''

def p_factor(p):
    ''' factor : LPAREN expr RPAREN
        | ID
        | number '''

def p_number(p):
    ''' number : number DIGIT
        | DIGIT '''

# Error rule for syntax errors
def p_error(p):
    print("Syntax error in input!")

import yacc;

Filename = input("Enter Filename Note Add .txt to end: ")
F = open(Filename,"r")
count = int(F.readline())

for i in range(0,count):
    data = F.readline()
    parser = yacc.yacc()
    parser.parse(data,lexer)
    output = parser.state
    if output == 5:
        print(data + " = True")
    else:
        print(data + " = False")








