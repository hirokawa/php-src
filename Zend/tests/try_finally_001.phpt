--TEST--
Try finally
--FILE--
<?php
function foo ($a) {
   try {
     throw new Exception("ex");
   } finally {
     var_dump($a);
   }
}

foo("finally");
?>
--EXPECTF--
string(7) "finally"

Fatal error: Uncaught exception 'Exception' with message 'ex' %s
Stack trace:
#0 %stry_finally_001.php(%d): foo('finally')
#1 {main}
  thrown in %stry_finally_001.php on line %d

