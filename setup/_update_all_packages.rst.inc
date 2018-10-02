Upgrading other Packages
~~~~~~~~~~~~~~~~~~~~~~~~

You may also want to upgrade the rest of your libraries. If you've done a
good job with your `version constraints`_ in ``composer.json``, you can do
this safely by running:

.. code-block:: terminal

    $ composer update

.. caution::

    Beware, if you have some unspecific `version constraints`_ in your
    ``composer.json`` (e.g. ``dev-master``), this could upgrade some
    non-Symfony libraries to new versions that contain backwards-compatibility
    breaking changes.

.. _`version constraints`: https://getcomposer.org/doc/01-basic-usage.md#package-versions

.. ready: no
.. revision: ecf5d16632c6d565ef0793d19a9f1f201649624b