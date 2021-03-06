Enabling React.js
=================

Using React? First enable support for it in ``webpack.config.js``:

.. code-block:: terminal

    $ yarn add @babel/preset-react --dev
    $ yarn add react react-dom prop-types

Enable react in your ``webpack.config.js``:

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
.. revision: f8de8f346ade3f1034e89271274e08ec71d1a08e