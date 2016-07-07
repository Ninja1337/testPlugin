<?hh // strict

namespace pluginChKl\Providers;

use Plenty\Plugin\ServiceProvider;
use Plenty\Plugin\Templates\Twig;

class PluginServiceProvider extends ServiceProvider
{
    public function register():void
	{
		$this->getApplication()->register(\pluginChKl\Providers\PluginRouteServiceProvider::class);
	}

	public function boot(Twig $twig):void
	{
        
	}
}
