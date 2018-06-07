package arm.node;

@:keep class NodeTree extends armory.logicnode.LogicTree {

	public function new() { super(); notifyOnAdd(add); }

	override public function add() {
		var _SetLocation = new armory.logicnode.SetLocationNode(this);
		var _Keyboard = new armory.logicnode.KeyboardNode(this);
		_Keyboard.property0 = "Started";
		_Keyboard.property1 = "up";
		_Keyboard.addOutputs([_SetLocation]);
		_SetLocation.addInput(_Keyboard, 0);
		_SetLocation.addInput(new armory.logicnode.ObjectNode(this, "Camera"), 0);
		var _Math = new armory.logicnode.MathNode(this);
		_Math.property0 = "Add";
		_Math.property1 = "false";
		var _GetLocation = new armory.logicnode.GetLocationNode(this);
		_GetLocation.addInput(new armory.logicnode.ObjectNode(this, "Camera"), 0);
		_GetLocation.addOutputs([_Math]);
		_Math.addInput(_GetLocation, 0);
		var _Vector = new armory.logicnode.VectorNode(this);
		_Vector.addInput(new armory.logicnode.FloatNode(this, 0.0), 0);
		_Vector.addInput(new armory.logicnode.FloatNode(this, 10.0), 0);
		_Vector.addInput(new armory.logicnode.FloatNode(this, 0.0), 0);
		_Vector.addOutputs([_Math]);
		_Math.addInput(_Vector, 0);
		_Math.addOutputs([_SetLocation]);
		_SetLocation.addInput(_Math, 0);
		_SetLocation.addOutputs([new armory.logicnode.NullNode(this)]);
		var _SetLocation_001 = new armory.logicnode.SetLocationNode(this);
		var _Keyboard_001 = new armory.logicnode.KeyboardNode(this);
		_Keyboard_001.property0 = "Started";
		_Keyboard_001.property1 = "down";
		_Keyboard_001.addOutputs([_SetLocation_001]);
		_SetLocation_001.addInput(_Keyboard_001, 0);
		_SetLocation_001.addInput(new armory.logicnode.ObjectNode(this, "Camera"), 0);
		var _Math_001 = new armory.logicnode.MathNode(this);
		_Math_001.property0 = "Add";
		_Math_001.property1 = "false";
		var _GetLocation_001 = new armory.logicnode.GetLocationNode(this);
		_GetLocation_001.addInput(new armory.logicnode.ObjectNode(this, "Camera"), 0);
		_GetLocation_001.addOutputs([_Math_001]);
		_Math_001.addInput(_GetLocation_001, 0);
		var _Vector_001 = new armory.logicnode.VectorNode(this);
		_Vector_001.addInput(new armory.logicnode.FloatNode(this, 0.0), 0);
		_Vector_001.addInput(new armory.logicnode.FloatNode(this, -10.0), 0);
		_Vector_001.addInput(new armory.logicnode.FloatNode(this, 0.0), 0);
		_Vector_001.addOutputs([_Math_001]);
		_Math_001.addInput(_Vector_001, 0);
		_Math_001.addOutputs([_SetLocation_001]);
		_SetLocation_001.addInput(_Math_001, 0);
		_SetLocation_001.addOutputs([new armory.logicnode.NullNode(this)]);
		var _SetLocation_002 = new armory.logicnode.SetLocationNode(this);
		var _Keyboard_002 = new armory.logicnode.KeyboardNode(this);
		_Keyboard_002.property0 = "Started";
		_Keyboard_002.property1 = "left";
		_Keyboard_002.addOutputs([_SetLocation_002]);
		_SetLocation_002.addInput(_Keyboard_002, 0);
		_SetLocation_002.addInput(new armory.logicnode.ObjectNode(this, "Camera"), 0);
		var _Math_002 = new armory.logicnode.MathNode(this);
		_Math_002.property0 = "Add";
		_Math_002.property1 = "false";
		var _GetLocation_002 = new armory.logicnode.GetLocationNode(this);
		_GetLocation_002.addInput(new armory.logicnode.ObjectNode(this, "Camera"), 0);
		_GetLocation_002.addOutputs([_Math_002]);
		_Math_002.addInput(_GetLocation_002, 0);
		var _Vector_002 = new armory.logicnode.VectorNode(this);
		_Vector_002.addInput(new armory.logicnode.FloatNode(this, -10.0), 0);
		_Vector_002.addInput(new armory.logicnode.FloatNode(this, 0.0), 0);
		_Vector_002.addInput(new armory.logicnode.FloatNode(this, 0.0), 0);
		_Vector_002.addOutputs([_Math_002]);
		_Math_002.addInput(_Vector_002, 0);
		_Math_002.addOutputs([_SetLocation_002]);
		_SetLocation_002.addInput(_Math_002, 0);
		_SetLocation_002.addOutputs([new armory.logicnode.NullNode(this)]);
		var _SetLocation_003 = new armory.logicnode.SetLocationNode(this);
		var _Keyboard_003 = new armory.logicnode.KeyboardNode(this);
		_Keyboard_003.property0 = "Started";
		_Keyboard_003.property1 = "right";
		_Keyboard_003.addOutputs([_SetLocation_003]);
		_SetLocation_003.addInput(_Keyboard_003, 0);
		_SetLocation_003.addInput(new armory.logicnode.ObjectNode(this, "Camera"), 0);
		var _Math_003 = new armory.logicnode.MathNode(this);
		_Math_003.property0 = "Add";
		_Math_003.property1 = "false";
		var _GetLocation_003 = new armory.logicnode.GetLocationNode(this);
		_GetLocation_003.addInput(new armory.logicnode.ObjectNode(this, "Camera"), 0);
		_GetLocation_003.addOutputs([_Math_003]);
		_Math_003.addInput(_GetLocation_003, 0);
		var _Vector_003 = new armory.logicnode.VectorNode(this);
		_Vector_003.addInput(new armory.logicnode.FloatNode(this, 10.0), 0);
		_Vector_003.addInput(new armory.logicnode.FloatNode(this, 0.0), 0);
		_Vector_003.addInput(new armory.logicnode.FloatNode(this, 0.0), 0);
		_Vector_003.addOutputs([_Math_003]);
		_Math_003.addInput(_Vector_003, 0);
		_Math_003.addOutputs([_SetLocation_003]);
		_SetLocation_003.addInput(_Math_003, 0);
		_SetLocation_003.addOutputs([new armory.logicnode.NullNode(this)]);
	}
}
