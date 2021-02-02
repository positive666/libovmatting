#ifndef __SAMPLES__HPP___
#define __SAMPLES__HPP___

#include <vector>
#include <memory>
#include <string>

#include <onnx_import/onnx.hpp>
#include <onnx_import/onnx_utils.hpp> // onnx_import/onnx_utils.hpp provides ngraph::onnx_import::register_operator function, that registers operator in ONNX importer's set.

#include <ngraph/opsets/opset5.hpp> // ngraph/opsets/opset5.hpp provides the declaration of predefined nGraph operator set
#include <inference_engine.hpp>
//#include <details/os/os_filesystem.hpp>

#include "cnn.hpp"

using namespace InferenceEngine;

void Inference_Video();

void Inference_Camera();

#endif