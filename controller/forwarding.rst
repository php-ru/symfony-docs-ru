.. index::
    single: Controller; Forwarding

How to Forward Requests to another Controller
=============================================

Though not very common, you can also forward to another controller internally
with the ``forward()`` method provided by the
:class:`Symfony\\Bundle\\FrameworkBundle\\Controller\\AbstractController`
class.

Instead of redirecting the user's browser, this makes an "internal" sub-request
and calls the defined controller. The ``forward()`` method returns the
:class:`Symfony\\Component\\HttpFoundation\\Response` object that is returned
from *that* controller::

    public function index($name)
    {
        $response = $this->forward('App\Controller\OtherController::fancy', [
            'name'  => $name,
            'color' => 'green',
        ]);

        // ... further modify the response or return it directly

        return $response;
    }

The array passed to the method becomes the arguments for the resulting controller.
The target controller method might look something like this::

    public function fancy($name, $color)
    {
        // ... create and return a Response object
    }

Just like when creating a controller for a route, the order of the arguments
of the ``fancy()`` method doesn't matter: the matching is done by name.

.. ready: no
.. revision: 9d29c39392c1701fca3913c92905665250cadea5