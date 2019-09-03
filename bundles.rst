.. index::
   single: Пакеты

.. _page-creation-bundles:

Система пакетов
===============

.. caution::

    В версиях Symfony до 4.0 было рекомендовано упорядочивать ваш код c помощью
    пакетов. Так больше не рекомендуется делать, поэтому пакеты должны
    использоваться только для совместного использования кодом и функциональных
    возможностей между несколькими приложениями.

Пакет похож на плагин в других программах, но ещё лучше. Основные возможности
фреймворка Symfony реализуются с помощью пакетов (FrameworkBundle,
SecurityBundle, DebugBundle и т.д.). Они также используются для добавления новых
возможностей в ваше приложение через `сторонние пакеты`_.

Пакеты, используемые в вашем приложении, должны быть подключены для каждого
:doc:`окружения </configuration/environments>` в файле ``config/bundles.php``:

    // config/bundles.php
    return [
        // Ключ 'all' означает, что пакет подключается для любого окружения Symfony
        Symfony\Bundle\FrameworkBundle\FrameworkBundle::class => ['all' => true],
        Symfony\Bundle\SecurityBundle\SecurityBundle::class => ['all' => true],
        Symfony\Bundle\TwigBundle\TwigBundle::class => ['all' => true],
        Symfony\Bundle\MonologBundle\MonologBundle::class => ['all' => true],
        Symfony\Bundle\SwiftmailerBundle\SwiftmailerBundle::class => ['all' => true],
        Doctrine\Bundle\DoctrineBundle\DoctrineBundle::class => ['all' => true],
        Sensio\Bundle\FrameworkExtraBundle\SensioFrameworkExtraBundle::class => ['all' => true],
        // Этот пакет подключается в окружениях 'dev' и 'test', поэтому он не используется в окружении 'prod'
        Symfony\Bundle\WebProfilerBundle\WebProfilerBundle::class => ['dev' => true, 'test' => true],
    ];

.. tip::

    В приложении Symfony по умолчанию, которое использует :doc:`Symfony Flex
    </setup/flex>`, пакеты подключаются и отключаются автоматически при
    установке или удалении, поэтому вам не нужно искать или редактировать файл
    ``bundles.php``.

Создание пакета
---------------

Этот раздел создаёт и включает новый пакет для демонстрации того, как это можно
сделать всего за несколько шагов. Новый пакет называется AcmeTestBundle, где
часть ``Acme`` - часть фиктивного имени, которое нужно каким-либо именем
"поставщика" (разработчика пакета), который представляет вас или вашу
организацию (например, ABCTestBundle для компании ``ABC``).

Начните с создания директории ``src/Acme/TestBundle/`` и добавьте в него новый
файл под названием ``AcmeTestBundle.php``::

    // src/Acme/TestBundle/AcmeTestBundle.php
    namespace App\Acme\TestBundle;

    use Symfony\Component\HttpKernel\Bundle\Bundle;

    class AcmeTestBundle extends Bundle
    {
    }

.. tip::

    Имя AcmeTestBundle следует стандартным :ref:`соглашениям по именованию
    пакетов <bundles-naming-conventions>`. Вы также можете решить укоротить имя
    пакета до TestBundle, назвав этот класс TestBundle (и соответственно файл
    как ``TestBundle.php``).

Этот пустой класс – единственное, что вам понадобится для создания нового
пакета. Несмотря на то, что чаще всего он будет пустым, этот класс мощный по
своим возможностям и может быть использован для настройки поведения пакета.
Теперь, когда вы создали пакет, подключите его::

    // config/bundles.php
    return [
        // ...
        App\Acme\TestBundle\AcmeTestBundle::class => ['all' => true],
    ];

И хотя он пока ничего не делает, AcmeTestBundle готов к использованию.

Структура директорий пакета
---------------------------

Структура директорий пакета предназначена для поддержания совместимости между
всеми пакетами Symfony. Она следует набору соглашений, которые при необходимости
гибко настраиваются. Посмотрите на AcmeDemoBundle, поскольку он содержит
наиболее распространенные элементы пакета: 

``Controller/``
    Содержит контроллеры пакета (например, ``RandomController.php``).

``DependencyInjection/``
    Содержит некоторые классы расширения внедрения зависимости, которые могут
    импортировать конфигурацию сервиса, регистрировать пропуски компилятора
    (compiler passes ???) и многое другое (эта необязательная директория).

``Resources/config/``
    Содержит конфигурацию, включая конфигурацию маршрутов (например,
    ``routing.yaml``).

``Resources/views/``
    Содержит шаблоны, расположенные в алфавитном порядке по имени контроллера
    (например, ``Random/index.html.twig``).

``Resources/public/``
    Содержит веб-ресурсы (изображения, файлы стилей и т.д.); он копируется или
    символически привязывается к директории проекта ``public/`` с помощью
    консольной команды ``assets:install``.

``Tests/``
   Содержит все тесты пакета.

Пакет может быть как большим, так и маленьким, в зависимости от реализуемого
функционала. Он содержит только те файлы, которые вам нужны, и ничего больше.

По ходу прочтения руководства, вы узнаете, как сохранять объекты в базе данных,
создавать и проверять формы, делать локализацию приложения, писать тесты и
многое другое. Каждая такая возможность имеет свое место и роль внутри пакета.

Читайте дальше
--------------

* :doc:`/bundles/override`
* :doc:`/bundles/best_practices`
* :doc:`/bundles/configuration`
* :doc:`/bundles/extension`
* :doc:`/bundles/prepend_extension`

.. _`сторонние пакеты`: https://github.com/search?q=topic%3Asymfony-bundle&type=Repositories

.. ready: yes
.. revision: 1f4ce3bd7867591c446838ae7d0c031e5eaac227
.. need_update: 9047a17b01ad3d1f5f9a5a6a90d64cebdb491930|32