<?hh //strict

namespace pluginChKl\Controllers;

use Plenty\Plugin\Controller;
use Plenty\Plugin\Templates\Twig;

class ExampleController extends Controller
{
    public function showPlugin(Twig $twig):string
    {
        return $twig->render("pluginChKl::index");
    }

}
