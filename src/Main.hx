import haxe.io.Bytes;
import hxd.Timer;
import hxd.res.DefaultFont;
import hxd.res.Image;
import h2d.Font;

class Main extends hxd.App {
	var bmp:h2d.Bitmap;
	var bmpref:h2d.Bitmap;
	var bmps:Array<h2d.Bitmap>;
	var amount_X = 50;
	var amount_Y = 20;
	
	var tf: h2d.Text;

	override function init() {
		tf = new h2d.Text(DefaultFont.get());
		s2d.addChild(tf);
		// var tf = new h2d.Text("乘风破浪会有时");
		var tile = hxd.Res.tree_t01.toTile();
		bmps = new Array<h2d.Bitmap>();
		//var tile = h2d.Tile.fromColor(0xFFFF00, 100, 100);
		//var tileref = h2d.Tile.fromColor(0xFFFF00, 100, 100);
		tile = tile.center();
		var ko = amount_X * amount_Y;
		var c = 0 ;
		for (x in 0...amount_X) {
			for (y in 0...amount_Y) {
				c += 1;
				var k = c / ko;
				if (k > ko)
					c = 0;
				bmp = new h2d.Bitmap(tile, s2d);
				bmp.scale(0.2);
				bmp.x= s2d.width/2 + Math.cos(k*Math.PI*2)*Math.min(s2d.width/2,s2d.height/2);
				bmp.y =s2d.height/2 + Math.sin(k*Math.PI*2)*Math.min(s2d.width/2,s2d.height/2);
				bmps.push(bmp);
			}
		}
		/* bmpref = new h2d.Bitmap(tileref,s2d);
		bmpref.x = s2d.width*0.5;
		bmpref.y = s2d.height*0.5; */

	}

	override function update(dt:Float){
		for (b in bmps){
			if (b == null) trace("null b");
			if (b!=null){
				//trace("==>");
				b.rotation += 0.6*dt;
			}
		}
		tf.text = "fps:"+Timer.fps()+"\n" + "draw calls: "+engine.drawCalls;
	}

	static function main() { 
		//trace("Hello, world!");
		hxd.Res.initEmbed();
		new Main();
		//var s = "直挂云帆济沧海";
		
	}
}
