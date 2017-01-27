#include "_ieigen.h"


namespace autowig
{
    void method_decorator_a73cd645e25e5a17b0f5a43a753aaa86(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >  & param_out)     { instance.base() = param_out; }
    void method_decorator_f1b1708fa3915836847b0d0797237623(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_ec401549ee945773b27ce59d1d14bf2d(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_878468e087c4536e95254fd3531d0159(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, struct ::std::complex< double >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  & param_out)     { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_da49bde33d9b59e9a07f5d91ef9b218e(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  & param_out)     { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_07015e15c6da5171bdb324299fa7b33c(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  & param_out)     { instance.setZero(param_in_0) = param_out; }
    void method_decorator_ad7f14819dc45b8e9471313b1c9a3baa(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  & param_out)     { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_aef2b971f3715c28887781d87ce24c6a(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  & param_out)     { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_06c679f61bc452088d863b4e92b7c4d1(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  & param_out)     { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_9ad3aa547cc555f0bd6217f27039b1a1(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  & param_out)     { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_4ca6d07f93095a3aac0276b9d61d6dc4(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  & param_out)     { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_2a39dbe4e52e50f19f8cfe4652136386()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_a73cd645e25e5a17b0f5a43a753aaa86)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_e486903eb17a56499f268b53c8752661)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_6c4028409209542bb749b9dfff1e214f)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_8ff96d8123225e02b75093817d9bebfd)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::cols;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_7232454c09bd5852bf793d8f590344a0)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::coeff;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_276312593d925f09abadc580aef3e80e)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::coeff;
    struct ::std::complex< double >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_f1b1708fa3915836847b0d0797237623)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::coeffRef;
    struct ::std::complex< double >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_ec401549ee945773b27ce59d1d14bf2d)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::coeffRef;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_9e313587b05e5bdb848812dbb2eeccd4)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::coeffRef;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_275c2fbc0b01584b84b13d4f6bf55f28)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::coeffRef;
    struct ::std::complex< double >  const * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_12ca16fb28fc511fbd8811f524609c52)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::data;
    struct ::std::complex< double >  * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_8020331aa2b359159a6b4dc1a5ff314e)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::data;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_225103faeaf5593ea06272ddc3252f80)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_9a2cac53440b5d7bb6a34bf2a75a4438)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_eacd68f93e535a1fb16fe4dc50fa4623)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_567caef5db155b5da2fb833797e1408a)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_ea23baacf0e6558caf303aba4b4cd42d)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::conservativeResize;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_878468e087c4536e95254fd3531d0159)(long int , struct ::std::complex< double >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_da49bde33d9b59e9a07f5d91ef9b218e)(long int , long int , struct ::std::complex< double >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_07015e15c6da5171bdb324299fa7b33c)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_ad7f14819dc45b8e9471313b1c9a3baa)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_aef2b971f3715c28887781d87ce24c6a)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_06c679f61bc452088d863b4e92b7c4d1)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_9ad3aa547cc555f0bd6217f27039b1a1)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::setRandom;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_4ca6d07f93095a3aac0276b9d61d6dc4)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::setRandom;
    void  (*method_pointer_88a47363f816554192ccaecc01e472cc)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > > >, boost::noncopyable > class_2a39dbe4e52e50f19f8cfe4652136386("_PlainObjectBase_2a39dbe4e52e50f19f8cfe4652136386", "", boost::python::no_init);
    class_2a39dbe4e52e50f19f8cfe4652136386.def("base", method_pointer_a73cd645e25e5a17b0f5a43a753aaa86, boost::python::return_internal_reference<>(), "");
    class_2a39dbe4e52e50f19f8cfe4652136386.def("base", autowig::method_decorator_a73cd645e25e5a17b0f5a43a753aaa86);
    class_2a39dbe4e52e50f19f8cfe4652136386.def("base", method_pointer_e486903eb17a56499f268b53c8752661, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2a39dbe4e52e50f19f8cfe4652136386.def("rows", method_pointer_6c4028409209542bb749b9dfff1e214f, "");
    class_2a39dbe4e52e50f19f8cfe4652136386.def("cols", method_pointer_8ff96d8123225e02b75093817d9bebfd, "");
    class_2a39dbe4e52e50f19f8cfe4652136386.def("coeff", method_pointer_7232454c09bd5852bf793d8f590344a0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2a39dbe4e52e50f19f8cfe4652136386.def("coeff", method_pointer_276312593d925f09abadc580aef3e80e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2a39dbe4e52e50f19f8cfe4652136386.def("coeff_ref", method_pointer_f1b1708fa3915836847b0d0797237623, boost::python::return_internal_reference<>(), "");
    class_2a39dbe4e52e50f19f8cfe4652136386.def("coeff_ref", autowig::method_decorator_f1b1708fa3915836847b0d0797237623);
    class_2a39dbe4e52e50f19f8cfe4652136386.def("coeff_ref", method_pointer_ec401549ee945773b27ce59d1d14bf2d, boost::python::return_internal_reference<>(), "");
    class_2a39dbe4e52e50f19f8cfe4652136386.def("coeff_ref", autowig::method_decorator_ec401549ee945773b27ce59d1d14bf2d);
    class_2a39dbe4e52e50f19f8cfe4652136386.def("coeff_ref", method_pointer_9e313587b05e5bdb848812dbb2eeccd4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2a39dbe4e52e50f19f8cfe4652136386.def("coeff_ref", method_pointer_275c2fbc0b01584b84b13d4f6bf55f28, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2a39dbe4e52e50f19f8cfe4652136386.def("data", method_pointer_12ca16fb28fc511fbd8811f524609c52, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_2a39dbe4e52e50f19f8cfe4652136386.def("data", method_pointer_8020331aa2b359159a6b4dc1a5ff314e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_2a39dbe4e52e50f19f8cfe4652136386.def("resize", method_pointer_225103faeaf5593ea06272ddc3252f80, "");
    class_2a39dbe4e52e50f19f8cfe4652136386.def("resize", method_pointer_9a2cac53440b5d7bb6a34bf2a75a4438, "");
    class_2a39dbe4e52e50f19f8cfe4652136386.def("resize", method_pointer_eacd68f93e535a1fb16fe4dc50fa4623, "");
    class_2a39dbe4e52e50f19f8cfe4652136386.def("resize", method_pointer_567caef5db155b5da2fb833797e1408a, "");
    class_2a39dbe4e52e50f19f8cfe4652136386.def("conservative_resize", method_pointer_ea23baacf0e6558caf303aba4b4cd42d, "");
    class_2a39dbe4e52e50f19f8cfe4652136386.def("set_constant", method_pointer_878468e087c4536e95254fd3531d0159, boost::python::return_internal_reference<>(), "");
    class_2a39dbe4e52e50f19f8cfe4652136386.def("set_constant", autowig::method_decorator_878468e087c4536e95254fd3531d0159);
    class_2a39dbe4e52e50f19f8cfe4652136386.def("set_constant", method_pointer_da49bde33d9b59e9a07f5d91ef9b218e, boost::python::return_internal_reference<>(), "");
    class_2a39dbe4e52e50f19f8cfe4652136386.def("set_constant", autowig::method_decorator_da49bde33d9b59e9a07f5d91ef9b218e);
    class_2a39dbe4e52e50f19f8cfe4652136386.def("set_zero", method_pointer_07015e15c6da5171bdb324299fa7b33c, boost::python::return_internal_reference<>(), "");
    class_2a39dbe4e52e50f19f8cfe4652136386.def("set_zero", autowig::method_decorator_07015e15c6da5171bdb324299fa7b33c);
    class_2a39dbe4e52e50f19f8cfe4652136386.def("set_zero", method_pointer_ad7f14819dc45b8e9471313b1c9a3baa, boost::python::return_internal_reference<>(), "");
    class_2a39dbe4e52e50f19f8cfe4652136386.def("set_zero", autowig::method_decorator_ad7f14819dc45b8e9471313b1c9a3baa);
    class_2a39dbe4e52e50f19f8cfe4652136386.def("set_ones", method_pointer_aef2b971f3715c28887781d87ce24c6a, boost::python::return_internal_reference<>(), "");
    class_2a39dbe4e52e50f19f8cfe4652136386.def("set_ones", autowig::method_decorator_aef2b971f3715c28887781d87ce24c6a);
    class_2a39dbe4e52e50f19f8cfe4652136386.def("set_ones", method_pointer_06c679f61bc452088d863b4e92b7c4d1, boost::python::return_internal_reference<>(), "");
    class_2a39dbe4e52e50f19f8cfe4652136386.def("set_ones", autowig::method_decorator_06c679f61bc452088d863b4e92b7c4d1);
    class_2a39dbe4e52e50f19f8cfe4652136386.def("set_random", method_pointer_9ad3aa547cc555f0bd6217f27039b1a1, boost::python::return_internal_reference<>(), "");
    class_2a39dbe4e52e50f19f8cfe4652136386.def("set_random", autowig::method_decorator_9ad3aa547cc555f0bd6217f27039b1a1);
    class_2a39dbe4e52e50f19f8cfe4652136386.def("set_random", method_pointer_4ca6d07f93095a3aac0276b9d61d6dc4, boost::python::return_internal_reference<>(), "");
    class_2a39dbe4e52e50f19f8cfe4652136386.def("set_random", autowig::method_decorator_4ca6d07f93095a3aac0276b9d61d6dc4);
    class_2a39dbe4e52e50f19f8cfe4652136386.def("check_template_params", method_pointer_88a47363f816554192ccaecc01e472cc, "");
    class_2a39dbe4e52e50f19f8cfe4652136386.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > > > >();
    }

}