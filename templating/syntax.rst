.. index::
    single: Templating; Linting
    single: Twig; Linting
    single: Templating; Syntax Check
    single: Twig; Syntax Check

How to Check the Syntax of Your Twig Templates
==============================================

You can check for syntax errors in Twig templates using the ``lint:twig``
console command:

.. code-block:: terminal

    # You can check by filename:
    $ php bin/console lint:twig templates/article/recent_list.html.twig

    # or by directory:
    $ php bin/console lint:twig templates/

.. ready: no
.. revision: d0ede9911e75cc5a6e967cb202322a7c49cc5649