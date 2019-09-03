.. index::
   single: Requirements

.. _requirements-for-running-symfony2:

Requirements for Running Symfony
================================

Symfony 3.4 requires **PHP 5.5.9** or higher to run, in addition to other minor
requirements, when using the traditional installation based on the
`Symfony Standard Edition`_. If Symfony 3.4 is installed via the `skeleton`_ or
`website-skeleton`_ (which is the recommended way for modern Symfony
applications) the requirements are **PHP 7.0.8** or higher.

To make things simple, Symfony provides a tool to quickly check if your system
meets all those requirements. Beware that PHP can define a different
configuration for the command console and the web server, so you need to check
the requirements in both environments.

Checking Requirements for the Web Server
----------------------------------------

Symfony includes a ``config.php`` file in the ``web/`` directory of your project.
Open that file with your browser to check the requirements.

Once you've fixed all the reported issues, delete the ``web/config.php`` file
to avoid leaking internal information about your application to visitors.

Checking Requirements for the Command Console
---------------------------------------------

Open your console or terminal and run the following command provided by the
``symfony`` binary created when `installing Symfony`_:

.. code-block:: terminal

    # checks if your computer/server is ready to run Symfony projects
    $ symfony check:requirements

    # use the --dir option to also check if some specific Symfony project is ready to be run
    $ symfony check:requirements --dir=/path/to/my-project

.. _`Symfony Standard Edition`: https://github.com/symfony/symfony-standard
.. _`skeleton`: https://github.com/symfony/skeleton
.. _`website-skeleton`: https://github.com/symfony/website-skeleton
.. _`installing Symfony`: https://symfony.com/download

.. ready: no
.. revision: 6f816efdef065bef74db663865c395ebd2ed62db