<?php
// Font definition based on figlet font "threepoint" (http://www.figlet.org/)
// as distributed by pyfiglet (http://sourceforge.net/projects/pyfiglet/)

function ASCII_art_captcha_font_threepoint() {
  $font = array();
  $font['height'] = 3;
  $font['name'] = 'threepoint';
  $font['comment'] = 'threepoint by Randall Ransom 4/94 <ransom@girtab.usc.edu>Figlet release 2.0 -- August 5, 1993Date: 9 Apr 1994Explanation of first line:flf2 - "magic number" for file identificationa    - should always be `a\', for now$    - the "hardblank" -- prints as a blank, but can\'t be smushed3    - height of a character2    - height of a character, not including descenders11   - max line length (excluding comment lines) + a fudge factor0    - default smushmode for this font (like "-m 0" on command line)14   - number of comment lines';
  $font['a'] = array(
    ' _ ',
    '(_|',
    '   ',
  );
  $font['b'] = array(
    '|_ ',
    '|_)',
    '   ',
  );
  $font['c'] = array(
    ' _',
    '(_',
    '  ',
  );
  $font['d'] = array(
    ' _|',
    '(_|',
    '   ',
  );
  $font['e'] = array(
    ' _ ',
    '(/_',
    '   ',
  );
  $font['f'] = array(
    ' |`',
    '~|~',
    '   ',
  );
  $font['g'] = array(
    ' _ ',
    '(_|',
    ' _|',
  );
  $font['h'] = array(
    '|_ ',
    '| |',
    '   ',
  );
  $font['i'] = array(
    '.',
    '|',
    ' ',
  );
  $font['j'] = array(
    ' .',
    ' |',
    'L|',
  );
  $font['k'] = array(
    '| ',
    '|<',
    '  ',
  );
  $font['l'] = array(
    '|',
    '|',
    ' ',
  );
  $font['m'] = array(
    ' _ _ ',
    '| | |',
    '     ',
  );
  $font['n'] = array(
    ' _ ',
    '| |',
    '   ',
  );
  $font['o'] = array(
    ' _ ',
    '(_)',
    '   ',
  );
  $font['p'] = array(
    ' _ ',
    '|_)',
    '|  ',
  );
  $font['q'] = array(
    ' _  ',
    '(_| ',
    '  |/',
  );
  $font['r'] = array(
    ' _',
    '| ',
    '  ',
  );
  $font['s'] = array(
    ' _',
    '_\\',
    '  ',
  );
  $font['t'] = array(
    '_|_',
    ' | ',
    '   ',
  );
  $font['u'] = array(
    '   ',
    '|_|',
    '   ',
  );
  $font['v'] = array(
    '  ',
    '\\/',
    '  ',
  );
  $font['w'] = array(
    '  ',
    'VV',
    '  ',
  );
  $font['x'] = array(
    '  ',
    '><',
    '  ',
  );
  $font['y'] = array(
    '  ',
    '\\/',
    '/ ',
  );
  $font['z'] = array(
    '_ ',
    '/_',
    '  ',
  );
  $font['A'] = array(
    ' /\\ ',
    '/~~\\',
    '    ',
  );
  $font['B'] = array(
    '|~)',
    '|_)',
    '   ',
  );
  $font['C'] = array(
    '/~`',
    '\\_,',
    '   ',
  );
  $font['D'] = array(
    '|~\\',
    '|_/',
    '   ',
  );
  $font['E'] = array(
    '(~',
    '(_',
    '  ',
  );
  $font['F'] = array(
    '|~',
    '|~',
    '  ',
  );
  $font['G'] = array(
    '/~_',
    '\\_/',
    '   ',
  );
  $font['H'] = array(
    '|_|',
    '| |',
    '   ',
  );
  $font['I'] = array(
    '~|~',
    '_|_',
    '   ',
  );
  $font['J'] = array(
    '~|~',
    'L| ',
    '   ',
  );
  $font['K'] = array(
    '|/',
    '|\\',
    '  ',
  );
  $font['L'] = array(
    '| ',
    '|_',
    '  ',
  );
  $font['M'] = array(
    '|\\/|',
    '|  |',
    '    ',
  );
  $font['N'] = array(
    '|\\ |',
    '| \\|',
    '    ',
  );
  $font['O'] = array(
    '/~\\',
    '\\_/',
    '   ',
  );
  $font['P'] = array(
    '|~)',
    '|~ ',
    '   ',
  );
  $font['Q'] = array(
    '/~\\',
    '\\_X',
    '   ',
  );
  $font['R'] = array(
    '|~)',
    '|~\\',
    '   ',
  );
  $font['S'] = array(
    '(~',
    '_)',
    '  ',
  );
  $font['T'] = array(
    '~|~',
    ' | ',
    '   ',
  );
  $font['U'] = array(
    '| |',
    '|_|',
    '   ',
  );
  $font['V'] = array(
    '\\  /',
    ' \\/ ',
    '    ',
  );
  $font['W'] = array(
    '\\    /',
    ' \\/\\/ ',
    '      ',
  );
  $font['X'] = array(
    '\\/',
    '/\\',
    '  ',
  );
  $font['Y'] = array(
    '\\ /',
    ' | ',
    '   ',
  );
  $font['Z'] = array(
    '~/',
    '/_',
    '  ',
  );
  $font['0'] = array(
    '/X',
    'X/',
    '  ',
  );
  $font['1'] = array(
    '\'| ',
    '.|.',
    '   ',
  );
  $font['2'] = array(
    '\'~)',
    ' /_',
    '   ',
  );
  $font['3'] = array(
    '\'~)',
    '._)',
    '   ',
  );
  $font['4'] = array(
    '|_|',
    '  |',
    '   ',
  );
  $font['5'] = array(
    'L~',
    '_)',
    '  ',
  );
  $font['6'] = array(
    ' / ',
    '(_)',
    '   ',
  );
  $font['7'] = array(
    '~/',
    '/ ',
    '  ',
  );
  $font['8'] = array(
    '(~)',
    '(_)',
    '   ',
  );
  $font['9'] = array(
    '(~)',
    ' / ',
    '   ',
  );

  return $font;
}
