
# parsetab.py
# This file is automatically generated. Do not edit.
_tabversion = '3.10'

_lr_method = 'LALR'

_lr_signature = 'ID DIGIT ADD SUB MUL DIV EQUALS LPAREN RPARENassign : ID EQUALS expr expr : expr ADD term\n        | expr SUB term\n        | term  term : term MUL factor\n        | term DIV factor\n        | factor  factor : LPAREN expr RPAREN\n        | ID\n        | number  number : number DIGIT\n        | DIGIT '
    
_lr_action_items = {'ID':([0,3,8,11,12,13,14,],[2,4,4,4,4,4,4,]),'$end':([1,4,5,6,7,9,10,16,17,18,19,20,21,],[0,-9,-1,-4,-7,-10,-12,-11,-2,-3,-5,-6,-8,]),'EQUALS':([2,],[3,]),'LPAREN':([3,8,11,12,13,14,],[8,8,8,8,8,8,]),'DIGIT':([3,8,9,10,11,12,13,14,16,],[10,10,16,-12,10,10,10,10,-11,]),'MUL':([4,6,7,9,10,16,17,18,19,20,21,],[-9,13,-7,-10,-12,-11,13,13,-5,-6,-8,]),'DIV':([4,6,7,9,10,16,17,18,19,20,21,],[-9,14,-7,-10,-12,-11,14,14,-5,-6,-8,]),'ADD':([4,5,6,7,9,10,15,16,17,18,19,20,21,],[-9,11,-4,-7,-10,-12,11,-11,-2,-3,-5,-6,-8,]),'SUB':([4,5,6,7,9,10,15,16,17,18,19,20,21,],[-9,12,-4,-7,-10,-12,12,-11,-2,-3,-5,-6,-8,]),'RPAREN':([4,6,7,9,10,15,16,17,18,19,20,21,],[-9,-4,-7,-10,-12,21,-11,-2,-3,-5,-6,-8,]),}

_lr_action = {}
for _k, _v in _lr_action_items.items():
   for _x,_y in zip(_v[0],_v[1]):
      if not _x in _lr_action:  _lr_action[_x] = {}
      _lr_action[_x][_k] = _y
del _lr_action_items

_lr_goto_items = {'assign':([0,],[1,]),'expr':([3,8,],[5,15,]),'term':([3,8,11,12,],[6,6,17,18,]),'factor':([3,8,11,12,13,14,],[7,7,7,7,19,20,]),'number':([3,8,11,12,13,14,],[9,9,9,9,9,9,]),}

_lr_goto = {}
for _k, _v in _lr_goto_items.items():
   for _x, _y in zip(_v[0], _v[1]):
       if not _x in _lr_goto: _lr_goto[_x] = {}
       _lr_goto[_x][_k] = _y
del _lr_goto_items
_lr_productions = [
  ("S' -> assign","S'",1,None,None,None),
  ('assign -> ID EQUALS expr','assign',3,'p_assign','main.py',79),
  ('expr -> expr ADD term','expr',3,'p_expr','main.py',82),
  ('expr -> expr SUB term','expr',3,'p_expr','main.py',83),
  ('expr -> term','expr',1,'p_expr','main.py',84),
  ('term -> term MUL factor','term',3,'p_term','main.py',87),
  ('term -> term DIV factor','term',3,'p_term','main.py',88),
  ('term -> factor','term',1,'p_term','main.py',89),
  ('factor -> LPAREN expr RPAREN','factor',3,'p_factor','main.py',92),
  ('factor -> ID','factor',1,'p_factor','main.py',93),
  ('factor -> number','factor',1,'p_factor','main.py',94),
  ('number -> number DIGIT','number',2,'p_number','main.py',97),
  ('number -> DIGIT','number',1,'p_number','main.py',98),
]
