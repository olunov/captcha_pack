<?php
// $Id$

/**
 * Helper function for splitting a string on white spaces.
 * Using explode(' ', $string) is not enough because it returns empty elements
 * if $string contains consecutive spaces.
 */
function _text_captcha_whitespace_explode($string) {
  return preg_split('/\s+/', $string, -1, PREG_SPLIT_NO_EMPTY);
}

/**
 * Helper function for splitting an utf8 string correctly in characters.
 * Assumes the given utf8 string is well formed.
 * See http://en.wikipedia.org/wiki/Utf8 for more info
 */
function _text_captcha_utf8_split($str) {
  $characters = array();
  $len = strlen($str);
  for ($i=0; $i < $len; ) {
    $chr = ord($str[$i]);
    if (($chr & 0x80) == 0x00) { // one byte character (0zzzzzzz)
      $width = 1;
    }
    else {
      if (($chr & 0xE0) == 0xC0) { // two byte character (first byte: 110yyyyy)
        $width = 2;
      }
      elseif (($chr & 0xF0) == 0xE0) { // three byte character (first byte: 1110xxxx)
        $width = 3;
      }
      elseif (($chr & 0xF8) == 0xF0) { // four byte character (first byte: 11110www)
        $width = 4;
      }
      else {
        watchdog('image_captcha', t('Encountered an illegal byte while splitting an utf8 string in characters.'), WATCHDOG_ERROR);
        return $characters;
      }
    }
    $characters[] = substr($str, $i, $width);
    $i += $width;
  }
  return $characters;
}

