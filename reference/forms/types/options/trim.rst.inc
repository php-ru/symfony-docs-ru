trim
~~~~

**type**: ``boolean`` **default**: ``true``

If true, the whitespace of the submitted string value will be stripped
via the :phpfunction:`trim` function when the data is bound. This guarantees
that if a value is submitted with extra whitespace, it will be removed before
the value is merged back onto the underlying object.

.. ready: no
.. revision: 03fdc5b4d23d724425239249d9b2d283e61fe592