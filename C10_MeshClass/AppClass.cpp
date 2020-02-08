#include "AppClass.h"
void Application::InitVariables(void)
{
	//Make MyMesh object
	m_pMesh = new MyMesh();
	m_pMesh->GenerateCube(1.0f, C_BLACK);

	//Make MyMesh object
	//m_pMesh1 = new MyMesh();
	//m_pMesh1->GenerateCube(1.0f, C_WHITE);
}
void Application::Update(void)
{
	//Update the system so it knows how much time has passed since the last call
	m_pSystem->Update();

	//Is the arcball active?
	ArcBall();

	//Is the first person camera active?
	CameraRotation();
}
void Application::Display(void)
{
	// Clear the screen
	ClearScreen();

	matrix4 m4View = m_pCameraMngr->GetViewMatrix();
	matrix4 m4Projection = m_pCameraMngr->GetProjectionMatrix();
	matrix4 m4Model = ToMatrix4(m_qArcBall);

#pragma region Space Invader Creation
	m_pMesh->Render(m4Projection, m4View, m4Model);
	m_pMesh->Render(m4Projection, m4View, m4Model * glm::translate(vector3 (0, 1, 0)));
	m_pMesh->Render(m4Projection, m4View, m4Model * glm::translate(vector3(0, 2, 0)));
	m_pMesh->Render(m4Projection, m4View, m4Model * glm::translate(vector3(0, -1, 0)));
	m_pMesh->Render(m4Projection, m4View, m4Model * glm::translate(vector3(1, -3, 0)));
	m_pMesh->Render(m4Projection, m4View, m4Model * glm::translate(vector3(1, -1, 0)));
	m_pMesh->Render(m4Projection, m4View, m4Model * glm::translate(vector3(1, 0, 0)));
	m_pMesh->Render(m4Projection, m4View, m4Model * glm::translate(vector3(1, 1, 0)));
	m_pMesh->Render(m4Projection, m4View, m4Model * glm::translate(vector3(1, 2, 0)));
	m_pMesh->Render(m4Projection, m4View, m4Model * glm::translate(vector3(-1, -3, 0)));
	m_pMesh->Render(m4Projection, m4View, m4Model * glm::translate(vector3(-1, -1, 0)));
	m_pMesh->Render(m4Projection, m4View, m4Model * glm::translate(vector3(-1, 0, 0)));
	m_pMesh->Render(m4Projection, m4View, m4Model * glm::translate(vector3(-1, 1, 0)));
	m_pMesh->Render(m4Projection, m4View, m4Model * glm::translate(vector3(-1, 2, 0)));
	m_pMesh->Render(m4Projection, m4View, m4Model * glm::translate(vector3(-2, -3, 0)));
	m_pMesh->Render(m4Projection, m4View, m4Model * glm::translate(vector3(-2, -1, 0)));
	m_pMesh->Render(m4Projection, m4View, m4Model * glm::translate(vector3(-2, 0, 0)));
	m_pMesh->Render(m4Projection, m4View, m4Model * glm::translate(vector3(-2, 2, 0)));
	m_pMesh->Render(m4Projection, m4View, m4Model * glm::translate(vector3(-2, 3, 0)));
	m_pMesh->Render(m4Projection, m4View, m4Model * glm::translate(vector3(2, -3, 0)));
	m_pMesh->Render(m4Projection, m4View, m4Model * glm::translate(vector3(2, -1, 0)));
	m_pMesh->Render(m4Projection, m4View, m4Model * glm::translate(vector3(2, 0, 0)));
	m_pMesh->Render(m4Projection, m4View, m4Model * glm::translate(vector3(2, 2, 0)));
	m_pMesh->Render(m4Projection, m4View, m4Model * glm::translate(vector3(2, 3, 0)));
	m_pMesh->Render(m4Projection, m4View, m4Model * glm::translate(vector3(-3, -2, 0)));
	m_pMesh->Render(m4Projection, m4View, m4Model * glm::translate(vector3(-3, -1, 0)));
	m_pMesh->Render(m4Projection, m4View, m4Model * glm::translate(vector3(-3, 0, 0)));
	m_pMesh->Render(m4Projection, m4View, m4Model * glm::translate(vector3(-3, 1, 0)));
	m_pMesh->Render(m4Projection, m4View, m4Model * glm::translate(vector3(-3, 2, 0)));
	m_pMesh->Render(m4Projection, m4View, m4Model * glm::translate(vector3(-3, 4, 0)));
	m_pMesh->Render(m4Projection, m4View, m4Model * glm::translate(vector3(3, -2, 0)));
	m_pMesh->Render(m4Projection, m4View, m4Model * glm::translate(vector3(3, -1, 0)));
	m_pMesh->Render(m4Projection, m4View, m4Model * glm::translate(vector3(3, 0, 0)));
	m_pMesh->Render(m4Projection, m4View, m4Model * glm::translate(vector3(3, 1, 0)));
	m_pMesh->Render(m4Projection, m4View, m4Model * glm::translate(vector3(3, 2, 0)));
	m_pMesh->Render(m4Projection, m4View, m4Model * glm::translate(vector3(3, 4, 0)));
	m_pMesh->Render(m4Projection, m4View, m4Model * glm::translate(vector3(4, 0, 0)));
	m_pMesh->Render(m4Projection, m4View, m4Model * glm::translate(vector3(4, 1, 0)));
	m_pMesh->Render(m4Projection, m4View, m4Model * glm::translate(vector3(-4, 0, 0)));
	m_pMesh->Render(m4Projection, m4View, m4Model * glm::translate(vector3(-4, 1, 0)));
	m_pMesh->Render(m4Projection, m4View, m4Model * glm::translate(vector3(5, 0, 0)));
	m_pMesh->Render(m4Projection, m4View, m4Model * glm::translate(vector3(5, -1, 0)));
	m_pMesh->Render(m4Projection, m4View, m4Model * glm::translate(vector3(5, -2, 0)));
	m_pMesh->Render(m4Projection, m4View, m4Model * glm::translate(vector3(-5, 0, 0)));
	m_pMesh->Render(m4Projection, m4View, m4Model * glm::translate(vector3(-5, -1, 0)));
	m_pMesh->Render(m4Projection, m4View, m4Model * glm::translate(vector3(-5, -2, 0)));
#pragma endregion

#pragma region Space Invader Movement
#pragma endregion
	

	/*
		- Create loop where Invader constantly moves to the right
			- Make loop where it goes through fps to move?
	*/
	

	// draw a skybox
	m_pMeshMngr->AddSkyboxToRenderList();
	
	m_pMeshMngr->AddGridToRenderList();

	//render list call
	m_uRenderCallCount = m_pMeshMngr->Render();

	//clear the render list
	m_pMeshMngr->ClearRenderList();
	
	//draw gui
	DrawGUI();
	
	//end the current frame (internally swaps the front and back buffers)
	m_pWindow->display();
}
void Application::Release(void)
{
	if (m_pMesh != nullptr)
	{
		delete m_pMesh;
		m_pMesh = nullptr;
	}
	SafeDelete(m_pMesh1);
	//release GUI
	ShutdownGUI();
}