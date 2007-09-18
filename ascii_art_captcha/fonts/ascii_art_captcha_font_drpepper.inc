<?php
// Font definition based on figlet font "drpepper" (http://www.figlet.org/)
// as distributed by pyfiglet (http://sourceforge.net/projects/pyfiglet/)

function ASCII_art_captcha_font_drpepper() {
  $font = array();
  $font['height'] = 5;
  $font['name'] = 'drpepper';
  $font['comment'] = 'Font  : Dr. Pepper (after a name in one sig done in this style).Author: Eero Tamminen, t150315@cc.tut.fi.Characters \'#\' and \'&\' are lousy and I\'m not very satisfiedwith the \'$\' or \'t\'... Suggestions?Explanation of first line:flf2 - "magic number" for file identifictiona    - should always be `a\', for now$    - the "hardblank" -- prints s a blank, but can\'t be smushed5    - height of a character4    - height of a character, not including descenders20    - max line length (excluding comment lines) +  fudge factor0    - default smushmode for this font16   - number of comment lines';
  $font['a'] = array(
    '     ',
    ' ___ ',
    '<_> |',
    '<___|',
    '     ',
  );
  $font['b'] = array(
    ' _   ',
    '| |_ ',
    '| . \\',
    '|___/',
    '     ',
  );
  $font['c'] = array(
    '     ',
    ' ___ ',
    '/ | \'',
    '\\_|_.',
    '     ',
  );
  $font['d'] = array(
    '   _ ',
    ' _| |',
    '/ . |',
    '\\___|',
    '     ',
  );
  $font['e'] = array(
    '     ',
    ' ___ ',
    '/ ._>',
    '\\___.',
    '     ',
  );
  $font['f'] = array(
    ' ___ ',
    '| | \'',
    '| |- ',
    '|_|  ',
    '     ',
  );
  $font['g'] = array(
    '     ',
    ' ___ ',
    '/ . |',
    '\\_. |',
    '<___\'',
  );
  $font['h'] = array(
    ' _   ',
    '| |_ ',
    '| . |',
    '|_|_|',
    '     ',
  );
  $font['i'] = array(
    ' _ ',
    '<_>',
    '| |',
    '|_|',
    '   ',
  );
  $font['j'] = array(
    '  _ ',
    ' <_>',
    ' | |',
    ' | |',
    '<__\'',
  );
  $font['k'] = array(
    ' _   ',
    '| |__',
    '| / /',
    '|_\\_\\',
    '     ',
  );
  $font['l'] = array(
    ' _ ',
    '| |',
    '| |',
    '|_|',
    '   ',
  );
  $font['m'] = array(
    '       ',
    '._ _ _ ',
    '| \' \' |',
    '|_|_|_|',
    '       ',
  );
  $font['n'] = array(
    '     ',
    '._ _ ',
    '| \' |',
    '|_|_|',
    '     ',
  );
  $font['o'] = array(
    '     ',
    ' ___ ',
    '/ . \\',
    '\\___/',
    '     ',
  );
  $font['p'] = array(
    '     ',
    ' ___ ',
    '| . \\',
    '|  _/',
    '|_|  ',
  );
  $font['q'] = array(
    '     ',
    ' ___ ',
    '/ . |',
    '\\_  |',
    '  |_|',
  );
  $font['r'] = array(
    '     ',
    ' _ _ ',
    '| \'_>',
    '|_|  ',
    '     ',
  );
  $font['s'] = array(
    '    ',
    ' ___',
    '<_-<',
    '/__/',
    '    ',
  );
  $font['t'] = array(
    '   _   ',
    ' _| |_ ',
    '  | |  ',
    '  |_|  ',
    '       ',
  );
  $font['u'] = array(
    '     ',
    ' _ _ ',
    '| | |',
    '`___|',
    '     ',
  );
  $font['v'] = array(
    '     ',
    ' _ _ ',
    '| | |',
    '|__/ ',
    '     ',
  );
  $font['w'] = array(
    '       ',
    ' _ _ _ ',
    '| | | |',
    '|__/_/ ',
    '       ',
  );
  $font['x'] = array(
    '    ',
    '__  ',
    '\\ \\/',
    '/\\_\\',
    '    ',
  );
  $font['y'] = array(
    '     ',
    ' _ _ ',
    '| | |',
    '`_. |',
    '<___\'',
  );
  $font['z'] = array(
    '    ',
    '.___',
    ' / /',
    '/___',
    '    ',
  );
  $font['A'] = array(
    ' ___ ',
    '| . |',
    '|   |',
    '|_|_|',
    '     ',
  );
  $font['B'] = array(
    ' ___ ',
    '| . >',
    '| . \\',
    '|___/',
    '     ',
  );
  $font['C'] = array(
    ' ___ ',
    '|  _>',
    '| <__',
    '`___/',
    '     ',
  );
  $font['D'] = array(
    ' ___ ',
    '| . \\',
    '| | |',
    '|___/',
    '     ',
  );
  $font['E'] = array(
    ' ___ ',
    '| __>',
    '| _> ',
    '|___>',
    '     ',
  );
  $font['F'] = array(
    ' ___ ',
    '| __>',
    '| _> ',
    '|_|  ',
    '     ',
  );
  $font['G'] = array(
    ' ___  ',
    '/  _> ',
    '| <_/\\',
    '`____/',
    '      ',
  );
  $font['H'] = array(
    ' _ _ ',
    '| | |',
    '|   |',
    '|_|_|',
    '     ',
  );
  $font['I'] = array(
    ' _ ',
    '| |',
    '| |',
    '|_|',
    '   ',
  );
  $font['J'] = array(
    '  _ ',
    ' | |',
    '_| |',
    '\\__/',
    '    ',
  );
  $font['K'] = array(
    ' _ __',
    '| / /',
    '|  \\ ',
    '|_\\_\\',
    '     ',
  );
  $font['L'] = array(
    ' _   ',
    '| |  ',
    '| |_ ',
    '|___|',
    '     ',
  );
  $font['M'] = array(
    ' __ __ ',
    '|  \\  \\',
    '|     |',
    '|_|_|_|',
    '       ',
  );
  $font['N'] = array(
    ' _ _ ',
    '| \\ |',
    '|   |',
    '|_\\_|',
    '     ',
  );
  $font['O'] = array(
    ' ___ ',
    '| . |',
    '| | |',
    '`___\'',
    '     ',
  );
  $font['P'] = array(
    ' ___ ',
    '| . \\',
    '|  _/',
    '|_|  ',
    '     ',
  );
  $font['Q'] = array(
    ' ___ ',
    '| . |',
    '| | |',
    '`___\\',
    '     ',
  );
  $font['R'] = array(
    ' ___ ',
    '| . \\',
    '|   /',
    '|_\\_\\',
    '     ',
  );
  $font['S'] = array(
    ' ___ ',
    '/ __>',
    '\\__ \\',
    '<___/',
    '     ',
  );
  $font['T'] = array(
    ' ___ ',
    '|_ _|',
    ' | | ',
    ' |_| ',
    '     ',
  );
  $font['U'] = array(
    ' _ _ ',
    '| | |',
    '| \' |',
    '`___\'',
    '     ',
  );
  $font['V'] = array(
    ' _ _ ',
    '| | |',
    '| \' |',
    '|__/ ',
    '     ',
  );
  $font['W'] = array(
    ' _ _ _ ',
    '| | | |',
    '| | | |',
    '|__/_/ ',
    '       ',
  );
  $font['X'] = array(
    '__  _ ',
    '\\ \\/  ',
    ' \\ \\  ',
    '_/\\_\\ ',
    '      ',
  );
  $font['Y'] = array(
    ' _ _ ',
    '| | |',
    '\\   /',
    ' |_| ',
    '     ',
  );
  $font['Z'] = array(
    ' ____',
    '|_  /',
    ' / / ',
    '/___|',
    '     ',
  );
  $font['0'] = array(
    ' ___ ',
    '|   |',
    '| / |',
    '`___\'',
    '     ',
  );
  $font['1'] = array(
    ' _ ',
    '/ |',
    '| |',
    '|_|',
    '   ',
  );
  $font['2'] = array(
    ' ___ ',
    '<_  >',
    ' / / ',
    '<___>',
    '     ',
  );
  $font['3'] = array(
    ' ____',
    '<__ /',
    ' <_ \\',
    '<___/',
    '     ',
  );
  $font['4'] = array(
    '  __  ',
    ' /. | ',
    '/_  .|',
    '  |_| ',
    '      ',
  );
  $font['5'] = array(
    ' ___ ',
    '| __|',
    '`__ \\',
    '|___/',
    '     ',
  );
  $font['6'] = array(
    ' ___ ',
    '| __>',
    '| . \\',
    '`___/',
    '     ',
  );
  $font['7'] = array(
    ' ___ ',
    '|_  |',
    ' / / ',
    '/_/  ',
    '     ',
  );
  $font['8'] = array(
    ' ___ ',
    '< . >',
    '/ . \\',
    '\\___/',
    '     ',
  );
  $font['9'] = array(
    ' ___ ',
    '| . |',
    '`_  /',
    ' /_/ ',
    '     ',
  );

  return $font;
}
