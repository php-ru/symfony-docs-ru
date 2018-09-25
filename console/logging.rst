.. index::
   single: Console; Enabling logging

How to Enable Logging in Console Commands
=========================================

In Symfony versions prior to 3.3, the Console component didn't provide any
logging capabilities out of the box and you had to implement your own exception
listener for the console.

Starting from Symfony 3.3, the Console component provides automatic error and
exception logging.

You can of course also access and use the :doc:`logger </logging>` service to
log messages.

.. ready: no
.. revision: 86ab47aaff52878deef6d395d86293434a9f6ca1