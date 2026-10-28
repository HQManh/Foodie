using System;

namespace Utilities;

public interface IDraggableLayerBehaviour
{
	event Action<IDraggableLayerBehaviour> onDragStart;

	event Action<IDraggableLayerBehaviour> onEndStart;

	void SetSortOrder(int value);

	void SetZPosition(float value);
}
