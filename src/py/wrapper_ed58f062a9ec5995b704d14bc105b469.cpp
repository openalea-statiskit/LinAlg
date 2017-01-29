#include "_linalg.h"


namespace autowig
{
    void method_decorator_3697020c45e55f06a417cc36514f353e(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > > & instance, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > & param_out)     { instance.derived() = param_out; }
    void method_decorator_d1d5ea25c65b5b95ae1a0bc48ccb5e12(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > > & instance, ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > >::RealScalar const & param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_38cb1c24f6205f3b9c9ec1ef7e13f047(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_ed58f062a9ec5995b704d14bc105b469()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_3697020c45e55f06a417cc36514f353e)() = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > >::derived;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_6fab7b6c5c775fe6a3e7fe8cca6c177f)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > >::derived;
    ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > >::MatrixUType const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_9e826c3d636d56cb95b894a3c6209b7d)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > >::matrixU;
    ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > >::MatrixVType const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_e7b6bc621b695140ad43f242fbe08b92)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > >::matrixV;
    ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > >::SingularValuesType const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_8292465fcc7b5155acc4db7504c86421)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > >::singularValues;
// TODO // TODO // TODO     ::Eigen::SVDBase::Index  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_6c4920cec75d53da96bd711abee1da60)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > >::nonzeroSingularValues;
// TODO // TODO // TODO     ::Eigen::SVDBase::Index  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_fb65a37fee7151ac82073acd5104d832)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > >::rank;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_d1d5ea25c65b5b95ae1a0bc48ccb5e12)(::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > >::RealScalar const &) = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > >::setThreshold;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_38cb1c24f6205f3b9c9ec1ef7e13f047)(enum ::Eigen::Default_t ) = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > >::setThreshold;
    ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > >::RealScalar  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_c95336ca58a15053b1a8eb33a5ea6d33)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > >::threshold;
    bool  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_0cb34b7b69875dfab1e81aa9b4b80810)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > >::computeU;
    bool  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_72d3dedcb0aa5367bceca8d505a32644)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > >::computeV;
// TODO // TODO // TODO     ::Eigen::SVDBase::Index  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_cdf3f1e1ab9258eeb39f4e058ff28ea5)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > >::rows;
// TODO // TODO // TODO     ::Eigen::SVDBase::Index  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_c60d3e762e0559e3920511940aadc55e)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > >::cols;
    boost::python::class_< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > >, autowig::HeldType< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > > > > class_ed58f062a9ec5995b704d14bc105b469("_SVDBase_ed58f062a9ec5995b704d14bc105b469", "", boost::python::no_init);
    class_ed58f062a9ec5995b704d14bc105b469.def(boost::python::init< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > > const & >(""));
    class_ed58f062a9ec5995b704d14bc105b469.def("derived", method_pointer_3697020c45e55f06a417cc36514f353e, boost::python::return_internal_reference<>(), "");
    class_ed58f062a9ec5995b704d14bc105b469.def("derived", autowig::method_decorator_3697020c45e55f06a417cc36514f353e);
    class_ed58f062a9ec5995b704d14bc105b469.def("derived", method_pointer_6fab7b6c5c775fe6a3e7fe8cca6c177f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ed58f062a9ec5995b704d14bc105b469.def("matrix_u", method_pointer_9e826c3d636d56cb95b894a3c6209b7d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ed58f062a9ec5995b704d14bc105b469.def("matrix_v", method_pointer_e7b6bc621b695140ad43f242fbe08b92, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ed58f062a9ec5995b704d14bc105b469.def("singular_values", method_pointer_8292465fcc7b5155acc4db7504c86421, boost::python::return_value_policy< boost::python::return_by_value >(), "");
// TODO     class_ed58f062a9ec5995b704d14bc105b469.def("nonzero_singular_values", method_pointer_6c4920cec75d53da96bd711abee1da60, "");
// TODO     class_ed58f062a9ec5995b704d14bc105b469.def("rank", method_pointer_fb65a37fee7151ac82073acd5104d832, "");
    class_ed58f062a9ec5995b704d14bc105b469.def("set_threshold", method_pointer_d1d5ea25c65b5b95ae1a0bc48ccb5e12, boost::python::return_internal_reference<>(), "");
    class_ed58f062a9ec5995b704d14bc105b469.def("set_threshold", autowig::method_decorator_d1d5ea25c65b5b95ae1a0bc48ccb5e12);
    class_ed58f062a9ec5995b704d14bc105b469.def("set_threshold", method_pointer_38cb1c24f6205f3b9c9ec1ef7e13f047, boost::python::return_internal_reference<>(), "");
    class_ed58f062a9ec5995b704d14bc105b469.def("set_threshold", autowig::method_decorator_38cb1c24f6205f3b9c9ec1ef7e13f047);
    class_ed58f062a9ec5995b704d14bc105b469.def("threshold", method_pointer_c95336ca58a15053b1a8eb33a5ea6d33, "");
    class_ed58f062a9ec5995b704d14bc105b469.def("compute_u", method_pointer_0cb34b7b69875dfab1e81aa9b4b80810, "");
    class_ed58f062a9ec5995b704d14bc105b469.def("compute_v", method_pointer_72d3dedcb0aa5367bceca8d505a32644, "");
// TODO     class_ed58f062a9ec5995b704d14bc105b469.def("rows", method_pointer_cdf3f1e1ab9258eeb39f4e058ff28ea5, "");
// TODO     class_ed58f062a9ec5995b704d14bc105b469.def("cols", method_pointer_c60d3e762e0559e3920511940aadc55e, "");

}