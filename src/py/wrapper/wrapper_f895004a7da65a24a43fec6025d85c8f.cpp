#include "_linalg.h"



namespace autowig
{

    void method_decorator_d2ca45f40af8598fa561d85359b9d63d(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > & instance, const ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Base & param_out) { instance.base() = param_out; }
    void method_decorator_302593e72ed557e0af24874d4866342a(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, double param_out) { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_e1134fdcb99c520abc42cedd2f01ef1e(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > & instance, ::Eigen::Index  param_in_0, double param_out) { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_9dd9f7349a3b5a70bd7dda52738b6dc5(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > & instance, ::Eigen::Index  param_in_0, ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Scalar const & param_in_1, const class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & param_out) { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_89b1b1a6479a5c32a840fa8c7cda6f9d(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Scalar const & param_in_2, const class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & param_out) { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_4f89e23c63b05283b65a90b183c15094(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > & instance, ::Eigen::Index  param_in_0, const class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & param_out) { instance.setZero(param_in_0) = param_out; }
    void method_decorator_786fd42208d650e49cb6b9d43e5779c2(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, const class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & param_out) { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_76ecd59b219b5cc8ac5d721c4dc8f3b8(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > & instance, ::Eigen::Index  param_in_0, const class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & param_out) { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_abc41f38b5fb511ea1beeaab6e15a5c1(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, const class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & param_out) { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_2d8250accb03502396b56afb894c03ff(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > & instance, ::Eigen::Index  param_in_0, const class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & param_out) { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_061744c8d97b5bafb9e9fe8c438c1067(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, const class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & param_out) { instance.setRandom(param_in_0, param_in_1) = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > const volatile * get_pointer<class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > const volatile >(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > const volatile *c) { return c; }
}
    #endif
#endif



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
    ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Scalar const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_4de478d891e25e10a34f538d8df81890)(::Eigen::Index , ::Eigen::Index ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::coeff;
    ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Scalar const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_f7b19de80d575371a9387b1940272329)(::Eigen::Index ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::coeff;
    ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Scalar & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_302593e72ed557e0af24874d4866342a)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::coeffRef;
    ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Scalar & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_e1134fdcb99c520abc42cedd2f01ef1e)(::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::coeffRef;
    ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Scalar const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_e3c136faa2765aa7aec2e1cf70b8dd86)(::Eigen::Index , ::Eigen::Index ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::coeffRef;
    ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Scalar const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_49b3df7f93035e809f10936190af747c)(::Eigen::Index ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::coeffRef;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_44732cc7b3c65b11b685f53ed4500850)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_2e5b1d6304e35bc78523fb6b6f349357)(::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_b845ef90ae545e0c881c7d9ba766e305)(enum ::Eigen::NoChange_t , ::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_39c86281acc154a390fefc94090ac704)(::Eigen::Index , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_deae8257f6d8592c87a59f9f81da3e87)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_26a84f4d61025f87bb77ea5ba33ca20c)(::Eigen::Index , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_9a83fd1cc603571089385c02c56625b5)(enum ::Eigen::NoChange_t , ::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_920c77d3adc554c8b13757d88deb922e)(::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::conservativeResize;
    class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_9dd9f7349a3b5a70bd7dda52738b6dc5)(::Eigen::Index , ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Scalar const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::setConstant;
    class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_89b1b1a6479a5c32a840fa8c7cda6f9d)(::Eigen::Index , ::Eigen::Index , ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Scalar const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::setConstant;
    class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_4f89e23c63b05283b65a90b183c15094)(::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::setZero;
    class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_786fd42208d650e49cb6b9d43e5779c2)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::setZero;
    class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_76ecd59b219b5cc8ac5d721c4dc8f3b8)(::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::setOnes;
    class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_abc41f38b5fb511ea1beeaab6e15a5c1)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::setOnes;
    class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_2d8250accb03502396b56afb894c03ff)(::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::setRandom;
    class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_061744c8d97b5bafb9e9fe8c438c1067)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::setRandom;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_b29371b176eb54b79ea4a0f38cc18617)(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::swap;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >, autowig::Held< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::Type, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >, boost::noncopyable > class_f895004a7da65a24a43fec6025d85c8f("_PlainObjectBase_f895004a7da65a24a43fec6025d85c8f", "", boost::python::no_init);
    class_f895004a7da65a24a43fec6025d85c8f.def("base", method_pointer_d2ca45f40af8598fa561d85359b9d63d, boost::python::return_internal_reference<>(), "");
    class_f895004a7da65a24a43fec6025d85c8f.def("base", autowig::method_decorator_d2ca45f40af8598fa561d85359b9d63d);
    class_f895004a7da65a24a43fec6025d85c8f.def("base", method_pointer_60afebb504f15682a760301985265a20, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f895004a7da65a24a43fec6025d85c8f.def("rows", method_pointer_d664d20e510c53689f48f94d2cae7bc4, "");
    class_f895004a7da65a24a43fec6025d85c8f.def("cols", method_pointer_aa289f9a5cd65b09a3e0747dc7da77de, "");
    class_f895004a7da65a24a43fec6025d85c8f.def("coeff", method_pointer_4de478d891e25e10a34f538d8df81890, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f895004a7da65a24a43fec6025d85c8f.def("coeff", method_pointer_f7b19de80d575371a9387b1940272329, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f895004a7da65a24a43fec6025d85c8f.def("coeff_ref", method_pointer_302593e72ed557e0af24874d4866342a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f895004a7da65a24a43fec6025d85c8f.def("coeff_ref", autowig::method_decorator_302593e72ed557e0af24874d4866342a);
    class_f895004a7da65a24a43fec6025d85c8f.def("coeff_ref", method_pointer_e1134fdcb99c520abc42cedd2f01ef1e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f895004a7da65a24a43fec6025d85c8f.def("coeff_ref", autowig::method_decorator_e1134fdcb99c520abc42cedd2f01ef1e);
    class_f895004a7da65a24a43fec6025d85c8f.def("coeff_ref", method_pointer_e3c136faa2765aa7aec2e1cf70b8dd86, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f895004a7da65a24a43fec6025d85c8f.def("coeff_ref", method_pointer_49b3df7f93035e809f10936190af747c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f895004a7da65a24a43fec6025d85c8f.def("resize", method_pointer_44732cc7b3c65b11b685f53ed4500850, "");
    class_f895004a7da65a24a43fec6025d85c8f.def("resize", method_pointer_2e5b1d6304e35bc78523fb6b6f349357, "");
    class_f895004a7da65a24a43fec6025d85c8f.def("resize", method_pointer_b845ef90ae545e0c881c7d9ba766e305, "");
    class_f895004a7da65a24a43fec6025d85c8f.def("resize", method_pointer_39c86281acc154a390fefc94090ac704, "");
    class_f895004a7da65a24a43fec6025d85c8f.def("conservative_resize", method_pointer_deae8257f6d8592c87a59f9f81da3e87, "");
    class_f895004a7da65a24a43fec6025d85c8f.def("conservative_resize", method_pointer_26a84f4d61025f87bb77ea5ba33ca20c, "");
    class_f895004a7da65a24a43fec6025d85c8f.def("conservative_resize", method_pointer_9a83fd1cc603571089385c02c56625b5, "");
    class_f895004a7da65a24a43fec6025d85c8f.def("conservative_resize", method_pointer_920c77d3adc554c8b13757d88deb922e, "");
    class_f895004a7da65a24a43fec6025d85c8f.def("set_constant", method_pointer_9dd9f7349a3b5a70bd7dda52738b6dc5, boost::python::return_internal_reference<>(), "");
    class_f895004a7da65a24a43fec6025d85c8f.def("set_constant", autowig::method_decorator_9dd9f7349a3b5a70bd7dda52738b6dc5);
    class_f895004a7da65a24a43fec6025d85c8f.def("set_constant", method_pointer_89b1b1a6479a5c32a840fa8c7cda6f9d, boost::python::return_internal_reference<>(), "");
    class_f895004a7da65a24a43fec6025d85c8f.def("set_constant", autowig::method_decorator_89b1b1a6479a5c32a840fa8c7cda6f9d);
    class_f895004a7da65a24a43fec6025d85c8f.def("set_zero", method_pointer_4f89e23c63b05283b65a90b183c15094, boost::python::return_internal_reference<>(), "");
    class_f895004a7da65a24a43fec6025d85c8f.def("set_zero", autowig::method_decorator_4f89e23c63b05283b65a90b183c15094);
    class_f895004a7da65a24a43fec6025d85c8f.def("set_zero", method_pointer_786fd42208d650e49cb6b9d43e5779c2, boost::python::return_internal_reference<>(), "");
    class_f895004a7da65a24a43fec6025d85c8f.def("set_zero", autowig::method_decorator_786fd42208d650e49cb6b9d43e5779c2);
    class_f895004a7da65a24a43fec6025d85c8f.def("set_ones", method_pointer_76ecd59b219b5cc8ac5d721c4dc8f3b8, boost::python::return_internal_reference<>(), "");
    class_f895004a7da65a24a43fec6025d85c8f.def("set_ones", autowig::method_decorator_76ecd59b219b5cc8ac5d721c4dc8f3b8);
    class_f895004a7da65a24a43fec6025d85c8f.def("set_ones", method_pointer_abc41f38b5fb511ea1beeaab6e15a5c1, boost::python::return_internal_reference<>(), "");
    class_f895004a7da65a24a43fec6025d85c8f.def("set_ones", autowig::method_decorator_abc41f38b5fb511ea1beeaab6e15a5c1);
    class_f895004a7da65a24a43fec6025d85c8f.def("set_random", method_pointer_2d8250accb03502396b56afb894c03ff, boost::python::return_internal_reference<>(), "");
    class_f895004a7da65a24a43fec6025d85c8f.def("set_random", autowig::method_decorator_2d8250accb03502396b56afb894c03ff);
    class_f895004a7da65a24a43fec6025d85c8f.def("set_random", method_pointer_061744c8d97b5bafb9e9fe8c438c1067, boost::python::return_internal_reference<>(), "");
    class_f895004a7da65a24a43fec6025d85c8f.def("set_random", autowig::method_decorator_061744c8d97b5bafb9e9fe8c438c1067);
    class_f895004a7da65a24a43fec6025d85c8f.def("swap", method_pointer_b29371b176eb54b79ea4a0f38cc18617, "");

    if(autowig::Held< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::Type, autowig::Held< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::Type >();
    }

}