#pragma once

//#define COLOR_MODE
//#define TEXTURE_MODE
//#define LIGHT_MODE
//#define TWO_D_MODE
//#define TEXT_MODE
#define FRUSTUM_MODE

class Direct3D;
class Camera;
class Model;
class ColorShader;
class ModelTexture;
class TextureShader;
class ModelLight;
class LightShader;
class Light;
class Model3D;
class Input;
class ModelBitmap;
class Text;
class ModelList;
class Frustum;
class Graphic
{
public:
	Graphic();
	Graphic(const Graphic& other);
	~Graphic();

	bool Initialize(int width, int height, HWND hwnd);
	void Shutdown();
	bool Frame(int fps, int cpu, float timeDelta, float rotationY);
	bool Render();

	// �ӽ� �ڵ�
	bool UpdateInput(Input* input);

private:
	Direct3D* m_Direct3D = nullptr;
	Camera* m_Camera = nullptr;

#ifdef COLOR_MODE
	// color
	Model* m_Model = nullptr;
	ColorShader* m_ColorShader = nullptr;
#endif

#ifdef TEXTURE_MODE
	// texture
	ModelTexture* m_ModelTexture = nullptr;
	TextureShader* m_TextureShader = nullptr;
#endif

#ifdef LIGHT_MODE
	// light
	//ModelLight* m_ModelLight = nullptr;
	Model3D* m_Model3D = nullptr;
	LightShader* m_LightShader = nullptr;
	Light* m_Light = nullptr;
#endif

#ifdef TWO_D_MODE
	// 2d
	TextureShader* m_TextureShader = nullptr;
	ModelBitmap* m_ModelBitmap = nullptr;
#endif

#ifdef TEXT_MODE
	Text* m_Text = nullptr;
#endif

#ifdef FRUSTUM_MODE
	Text* m_Text = nullptr;
	Model3D* m_Model = nullptr;
	LightShader* m_LightShader = nullptr;
	Light* m_Light = nullptr;
	ModelList* m_ModelList = nullptr;
	Frustum* m_Frustum = nullptr;
#endif
};

