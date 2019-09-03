Enabling React.js
=================

Using React? First enable support for it in ``webpack.config.js``:

.. code-block:: diff

    // webpack.config.js
    // ...

    Encore
        // ...
    +     .enableReactPreset()
    ;


Then restart Encore. When you do, it will give you a command you can run to
install any missing dependencies. After running that command and restarting
Encore, you're done!

Your ``.js`` and ``.jsx`` files will now be transformed through ``babel-preset-react``.

.. ready: no
.. revision: 3aeb73e4c4f0c0b348343b506f64be9ce81b6590