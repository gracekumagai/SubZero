/*
 * FPGAModel.h
 *
 *  Created on: Jan 17, 2015
 *      Author: ahsueh1996
 */

#ifndef FPGAMODEL_H_
#define FPGAMODEL_H_

#include "Model.h"

namespace std {
/**
 * This is a concrete child of the Model class. It implements functions
 * specific to communicating with the FGPA.
 */
class FPGAModel: public Model {
public:
	FPGAModel();
	/**
	 * Constructor
	 */
	virtual ~FPGAModel();
	/**
	 * Deconstructor
	 */
};

} /* namespace std */

#endif /* FPGAMODEL_H_ */