#include "Entity.h"
#include <iterator>

Entity::Entity(int id)
{
	SetID(id);
}


Entity::~Entity(void)
{

}

void Entity::SetID(int var)
{
	m_ID = var;
}


/*
*  Add a new component to the entity, using the map of the component type and the component
*/
void Entity::AddComponent(Component* newComponent)
{
	std::pair<const char*, Component*> newElement;
	newElement.first = newComponent->GetComponentType();
	newElement.second = newComponent;
	m_components.insert(newElement);
}


/*
* Iterate through the components and update each of them
*/
void Entity::UpdateComponents(void)
{
	std::unordered_map<const char*, Component*>::iterator iter;
	for (iter = m_components.begin(); iter != m_components.end(); ++iter)
	{
		((Component*)(iter->first))->Update();
	}
}