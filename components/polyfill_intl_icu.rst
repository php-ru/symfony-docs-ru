.. index::
    single: Polyfill
    single: ICU
    single: Components; Polyfill

The Symfony Polyfill / Intl ICU Component
=========================================

    This component provides a native PHP implementation of several Intl
    functions and classes to users who run PHP versions without the ``intl``
    extension.

Installation
------------

.. code-block:: terminal

    $ composer require symfony/polyfill-intl-icu

.. include:: /components/require_autoload.rst.inc

Usage
-----

Once this component is installed in your application, you can use the following
classes and functions, no matter if the `PHP intl extension`_ is installed or
not in your server.

Provided Classes
~~~~~~~~~~~~~~~~

* :phpclass:`Collator`
* :phpclass:`IntlDateFormatter`
* :phpclass:`Locale`
* :phpclass:`NumberFormatter`

Provided Functions
~~~~~~~~~~~~~~~~~~

* :phpfunction:`intl_error_name`
* :phpfunction:`intl_get_error_code`
* :phpfunction:`intl_get_error_message`
* :phpfunction:`intl_is_failure`

.. seealso::

    Symfony provides more polyfills for other classes and functions related to
    the Intl PHP extension:
    :doc:`polyfill-intl-grapheme </components/polyfill_intl_grapheme>`,
    :doc:`polyfill-intl-idn </components/polyfill_intl_idn>`,
    :doc:`polyfill-intl-messageformatter </components/polyfill_intl_messageformatter>`,
    and :doc:`polyfill-intl-normalizer </components/polyfill_intl_normalizer>`.

.. _`PHP intl extension`: https://secure.php.net/manual/en/book.intl.php

.. ready: no
.. revision: 5ee0c1b810e595e52f252b8002c287ee18026eff