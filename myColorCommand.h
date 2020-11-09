#pragma once



class colorMeshVerticesCmd : public MPxCommand
{

public:

	colorMeshVerticesCmd();							
	virtual MStatus	doIt(const MArgList& argList);
	static void* creator();							
	static MSyntax syntax();
	static MString commandName();					
	virtual bool isUndoable() const;

	// added functions
	//valance functions
	void valance(MFnMesh& meshFn, MIntArray& vertexList, MColorArray& colors);
	void colorizeValance(const MFnMesh& meshFn, MIntArray& vertexList, MColorArray& colors);
	//curvature functions
	void curvature(MFnMesh& meshFn, MIntArray& vertexList, MColorArray& colors);
	void iniateCurvature(const MFnMesh& meshFn, std::vector<double>& g1);
	void gaussianCurvature(const MFnMesh& meshFn, std::vector<double>& g1);
	void colorGaussianCurvature(std::vector<double>& g1, MIntArray& vertexList, MColorArray& colors);
};
