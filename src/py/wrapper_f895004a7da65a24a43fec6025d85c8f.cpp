#include "_linalg.h"


namespace autowig
{
    void method_decorator_d2ca45f40af8598fa561d85359b9d63d(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > & instance, ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Base & param_out)     { instance.base() = param_out; }
    void method_decorator_eeec713ff7fb54beb17617fab73ca253(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Scalar & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_8026fd01e5ec59faa8122315911f0f7c(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > & instance, ::Eigen::Index  param_in_0, ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Scalar & param_out)     { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_052c391f93c05d18befcde8d3d511408(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > & instance, ::Eigen::Index  param_in_0, ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Scalar const & param_in_1, class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & param_out)     { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_4614d80473d455e1af300f6a03586cc0(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Scalar const & param_in_2, class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & param_out)     { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_c14be08c8e4052a29daf55b857e8fe5c(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > & instance, ::Eigen::Index  param_in_0, class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & param_out)     { instance.setZero(param_in_0) = param_out; }
    void method_decorator_f099805535b353ea92f3687b32514f5c(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & param_out)     { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_6d4176a642bb5e089289eb59eddf94f9(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > & instance, ::Eigen::Index  param_in_0, class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & param_out)     { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_c9d16d517f715a9caf44bab2b200c741(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & param_out)     { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_709032c78fc55b1dbd8e705c6a487b6d(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > & instance, ::Eigen::Index  param_in_0, class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & param_out)     { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_e97a8490d4d45420b24e8e74696f3b3d(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & param_out)     { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_f895004a7da65a24a43fec6025d85c8f()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Base & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_d2ca45f40af8598fa561d85359b9d63d)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::base;
    ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Base const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_60afebb504f15682a760301985265a20)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::base;
    ::Eigen::Index  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_d664d20e510c53689f48f94d2cae7bc4)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::rows;
    ::Eigen::Index  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_aa289f9a5cd65b09a3e0747dc7da77de)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::cols;
    ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Scalar const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_6c219a21b80055f88b03ef6a575577a1)(::Eigen::Index , ::Eigen::Index ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::coeff;
    ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Scalar const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_4ff19ae6d8245eaeb6767f761f24066a)(::Eigen::Index ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::coeff;
    ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Scalar & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_eeec713ff7fb54beb17617fab73ca253)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::coeffRef;
    ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Scalar & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_8026fd01e5ec59faa8122315911f0f7c)(::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::coeffRef;
    ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Scalar const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_628a7d90d21a5f38ab95056d9fe49430)(::Eigen::Index , ::Eigen::Index ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::coeffRef;
    ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Scalar const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_2aa137571c9a5185be4300b2135b9adc)(::Eigen::Index ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::coeffRef;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_683e6967ce015aedae3595fcf9d93aeb)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_9596639327b755b08f7e8d6ea74d3e17)(::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_526ae16da89e502892bcb079c342aa0a)(enum ::Eigen::NoChange_t , ::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_f339f1e47c59567983b1801596a21ebd)(::Eigen::Index , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_cac68fe5f76357c98627c50d23a2338e)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_c2c788c2ace25b659354a4a2703ef177)(::Eigen::Index , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_1d27715453a555ac9062a746dc9c6bcc)(enum ::Eigen::NoChange_t , ::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_090dba58ad7c551cb08c0f5c738adb59)(::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::conservativeResize;
    class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_052c391f93c05d18befcde8d3d511408)(::Eigen::Index , ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Scalar const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::setConstant;
    class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_4614d80473d455e1af300f6a03586cc0)(::Eigen::Index , ::Eigen::Index , ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Scalar const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::setConstant;
    class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_c14be08c8e4052a29daf55b857e8fe5c)(::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::setZero;
    class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_f099805535b353ea92f3687b32514f5c)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::setZero;
    class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_6d4176a642bb5e089289eb59eddf94f9)(::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::setOnes;
    class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_c9d16d517f715a9caf44bab2b200c741)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::setOnes;
    class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_709032c78fc55b1dbd8e705c6a487b6d)(::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::setRandom;
    class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_e97a8490d4d45420b24e8e74696f3b3d)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::setRandom;
    void  (*method_pointer_e8430524858452afb18e0fc96e43d83b)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >, autowig::Held< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::Type, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >, boost::noncopyable > class_f895004a7da65a24a43fec6025d85c8f("_PlainObjectBase_f895004a7da65a24a43fec6025d85c8f", "", boost::python::no_init);
    class_f895004a7da65a24a43fec6025d85c8f.def("base", method_pointer_d2ca45f40af8598fa561d85359b9d63d, boost::python::return_internal_reference<>(), "");
    class_f895004a7da65a24a43fec6025d85c8f.def("base", autowig::method_decorator_d2ca45f40af8598fa561d85359b9d63d);
    class_f895004a7da65a24a43fec6025d85c8f.def("base", method_pointer_60afebb504f15682a760301985265a20, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f895004a7da65a24a43fec6025d85c8f.def("rows", method_pointer_d664d20e510c53689f48f94d2cae7bc4, "");
    class_f895004a7da65a24a43fec6025d85c8f.def("cols", method_pointer_aa289f9a5cd65b09a3e0747dc7da77de, "");
    class_f895004a7da65a24a43fec6025d85c8f.def("coeff", method_pointer_6c219a21b80055f88b03ef6a575577a1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f895004a7da65a24a43fec6025d85c8f.def("coeff", method_pointer_4ff19ae6d8245eaeb6767f761f24066a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f895004a7da65a24a43fec6025d85c8f.def("coeff_ref", method_pointer_eeec713ff7fb54beb17617fab73ca253, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f895004a7da65a24a43fec6025d85c8f.def("coeff_ref", autowig::method_decorator_eeec713ff7fb54beb17617fab73ca253);
    class_f895004a7da65a24a43fec6025d85c8f.def("coeff_ref", method_pointer_8026fd01e5ec59faa8122315911f0f7c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f895004a7da65a24a43fec6025d85c8f.def("coeff_ref", autowig::method_decorator_8026fd01e5ec59faa8122315911f0f7c);
    class_f895004a7da65a24a43fec6025d85c8f.def("coeff_ref", method_pointer_628a7d90d21a5f38ab95056d9fe49430, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f895004a7da65a24a43fec6025d85c8f.def("coeff_ref", method_pointer_2aa137571c9a5185be4300b2135b9adc, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f895004a7da65a24a43fec6025d85c8f.def("resize", method_pointer_683e6967ce015aedae3595fcf9d93aeb, "");
    class_f895004a7da65a24a43fec6025d85c8f.def("resize", method_pointer_9596639327b755b08f7e8d6ea74d3e17, "");
    class_f895004a7da65a24a43fec6025d85c8f.def("resize", method_pointer_526ae16da89e502892bcb079c342aa0a, "");
    class_f895004a7da65a24a43fec6025d85c8f.def("resize", method_pointer_f339f1e47c59567983b1801596a21ebd, "");
    class_f895004a7da65a24a43fec6025d85c8f.def("conservative_resize", method_pointer_cac68fe5f76357c98627c50d23a2338e, "");
    class_f895004a7da65a24a43fec6025d85c8f.def("conservative_resize", method_pointer_c2c788c2ace25b659354a4a2703ef177, "");
    class_f895004a7da65a24a43fec6025d85c8f.def("conservative_resize", method_pointer_1d27715453a555ac9062a746dc9c6bcc, "");
    class_f895004a7da65a24a43fec6025d85c8f.def("conservative_resize", method_pointer_090dba58ad7c551cb08c0f5c738adb59, "");
    class_f895004a7da65a24a43fec6025d85c8f.def("set_constant", method_pointer_052c391f93c05d18befcde8d3d511408, boost::python::return_internal_reference<>(), "");
    class_f895004a7da65a24a43fec6025d85c8f.def("set_constant", autowig::method_decorator_052c391f93c05d18befcde8d3d511408);
    class_f895004a7da65a24a43fec6025d85c8f.def("set_constant", method_pointer_4614d80473d455e1af300f6a03586cc0, boost::python::return_internal_reference<>(), "");
    class_f895004a7da65a24a43fec6025d85c8f.def("set_constant", autowig::method_decorator_4614d80473d455e1af300f6a03586cc0);
    class_f895004a7da65a24a43fec6025d85c8f.def("set_zero", method_pointer_c14be08c8e4052a29daf55b857e8fe5c, boost::python::return_internal_reference<>(), "");
    class_f895004a7da65a24a43fec6025d85c8f.def("set_zero", autowig::method_decorator_c14be08c8e4052a29daf55b857e8fe5c);
    class_f895004a7da65a24a43fec6025d85c8f.def("set_zero", method_pointer_f099805535b353ea92f3687b32514f5c, boost::python::return_internal_reference<>(), "");
    class_f895004a7da65a24a43fec6025d85c8f.def("set_zero", autowig::method_decorator_f099805535b353ea92f3687b32514f5c);
    class_f895004a7da65a24a43fec6025d85c8f.def("set_ones", method_pointer_6d4176a642bb5e089289eb59eddf94f9, boost::python::return_internal_reference<>(), "");
    class_f895004a7da65a24a43fec6025d85c8f.def("set_ones", autowig::method_decorator_6d4176a642bb5e089289eb59eddf94f9);
    class_f895004a7da65a24a43fec6025d85c8f.def("set_ones", method_pointer_c9d16d517f715a9caf44bab2b200c741, boost::python::return_internal_reference<>(), "");
    class_f895004a7da65a24a43fec6025d85c8f.def("set_ones", autowig::method_decorator_c9d16d517f715a9caf44bab2b200c741);
    class_f895004a7da65a24a43fec6025d85c8f.def("set_random", method_pointer_709032c78fc55b1dbd8e705c6a487b6d, boost::python::return_internal_reference<>(), "");
    class_f895004a7da65a24a43fec6025d85c8f.def("set_random", autowig::method_decorator_709032c78fc55b1dbd8e705c6a487b6d);
    class_f895004a7da65a24a43fec6025d85c8f.def("set_random", method_pointer_e97a8490d4d45420b24e8e74696f3b3d, boost::python::return_internal_reference<>(), "");
    class_f895004a7da65a24a43fec6025d85c8f.def("set_random", autowig::method_decorator_e97a8490d4d45420b24e8e74696f3b3d);
    class_f895004a7da65a24a43fec6025d85c8f.def("check_template_params", method_pointer_e8430524858452afb18e0fc96e43d83b, "");
    class_f895004a7da65a24a43fec6025d85c8f.staticmethod("check_template_params");

    if(std::is_class< autowig::Held< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::Type >::value)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::Type, autowig::Held< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::Type >();
    }

}