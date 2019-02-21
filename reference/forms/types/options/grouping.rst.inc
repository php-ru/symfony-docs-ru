grouping
~~~~~~~~

**type**: ``boolean`` **default**: ``false``

This value is used internally as the ``NumberFormatter::GROUPING_USED``
value when using PHP's ``NumberFormatter`` class. Its documentation is
non-existent, but it appears that if you set this to ``true``, numbers will
be grouped with a comma or period (depending on your locale): ``12345.123``
would display as ``12,345.123``.

.. ready: no
.. revision: af028003b9a6519e29d7f987192314e0fa111579