/*
   +----------------------------------------------------------------------+
   | PHP Version 5                                                        |
   +----------------------------------------------------------------------+
   | Copyright (c) 1997-2012 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Authors: Anthony Ferrara <ircmaxell@php.net>                         |
   +----------------------------------------------------------------------+
*/

/* $Id$ */

#ifndef PHP_PASSWORD_H
#define PHP_PASSWORD_H

PHP_FUNCTION(password_hash);
PHP_FUNCTION(password_verify);
PHP_FUNCTION(password_make_salt);
PHP_FUNCTION(password_needs_rehash);
PHP_FUNCTION(password_get_info);

PHP_MINIT_FUNCTION(password);

#define PHP_PASSWORD_DEFAULT	1
#define PHP_PASSWORD_BCRYPT	1

#define PHP_PASSWORD_SALT_RAW    1
#define PHP_PASSWORD_SALT_BCRYPT 2

#define PHP_PASSWORD_BCRYPT_COST 10

#endif


/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 */
