let fs = require('fs');
let path = require('path');
let project = new Project('test_game');
project.targetOptions = {"html5":{},"flash":{},"android":{},"ios":{}};
project.setDebugDir('build_test_game/osx');
await project.addProject('build_test_game/osx-build');
await project.addProject('/Applications/blender.app/armsdk/Kha');
if (fs.existsSync(path.join('/Applications/blender.app//armsdk//armory', 'korefile.js'))) {
	await project.addProject('/Applications/blender.app//armsdk//armory');
}
if (fs.existsSync(path.join('/Applications/blender.app//armsdk//iron', 'korefile.js'))) {
	await project.addProject('/Applications/blender.app//armsdk//iron');
}
resolve(project);
