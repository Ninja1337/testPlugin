<?hh //strict

namespace pluginChKl\Providers;

use Plenty\Plugin\RouteServiceProvider;
use Plenty\Plugin\Routing\Router;
use Plenty\Plugin\Templates\Twig;

class PluginRouteServiceProvider extends RouteServiceProvider
{
	public function register():void
	{
	}

	public function map(Router $router):void
	{
		// category route
		$router->get('example-plugin','pluginChKl\Controllers\ExampleController@showPlugin');

	}
}
