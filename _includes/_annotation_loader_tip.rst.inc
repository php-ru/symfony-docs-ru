.. note::

    In order to use the annotation loader, you should have installed the
    ``doctrine/annotations`` and ``doctrine/cache`` packages with Composer.

.. tip::

    Annotation classes aren't loaded automatically, so you must load them
    using a class loader like this::

        use Composer\Autoload\ClassLoader;
        use Doctrine\Common\Annotations\AnnotationRegistry;

        /** @var ClassLoader $loader */
        $loader = require __DIR__.'/../vendor/autoload.php';

        AnnotationRegistry::registerLoader([$loader, 'loadClass']);

        return $loader;

.. ready: no
.. revision: b6e27bd1dd1f8221ba8d0b1f1f1a955ab66f9f33