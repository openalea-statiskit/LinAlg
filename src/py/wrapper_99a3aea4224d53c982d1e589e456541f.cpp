#include "_ieigen.h"


namespace autowig
{
    void method_decorator_27d9aca3cf365759b4a1a40b71adaa0f(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >  & param_out)     { instance.base() = param_out; }
    void method_decorator_050966a2db815fed9772e0123ecc0164(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, long int  param_in_1, const double  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_d40b38501e6558159446fb4c9524755e(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, const double  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_ae876db314e654dda85c246ade80a0d8(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, double  const & param_in_1, class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  & param_out)     { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_dc56965b41625251b6d99e4c2e974d9c(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, long int  param_in_1, double  const & param_in_2, class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  & param_out)     { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_a51db7abe7fb52b793ec11277bb5825d(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  & param_out)     { instance.setZero(param_in_0) = param_out; }
    void method_decorator_304ed043cd9059058827cfa6fc5789dd(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  & param_out)     { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_7a7bdec5ff9f5f67b472580c4951ef03(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  & param_out)     { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_bc356d7e86505bf59e39f44a68f70ad4(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  & param_out)     { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_615b7e9c00df52c3b2076137dbbb31ce(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  & param_out)     { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_4b2d9df6b00552febb22b88ab0391ba3(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  & param_out)     { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_99a3aea4224d53c982d1e589e456541f()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_27d9aca3cf365759b4a1a40b71adaa0f)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_edfc4b4135355d85858cb637e36709f3)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_683916b1652d556d828ad0b93aa66e78)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_9bc99f609ad2566bb0dceb1ba0dd179c)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::cols;
    double  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_5eca46ff852457a4927403abfd38af50)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::coeff;
    double  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_0ce20000c0e7577ab6468178b7ec7980)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::coeff;
    double  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_050966a2db815fed9772e0123ecc0164)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::coeffRef;
    double  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_d40b38501e6558159446fb4c9524755e)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::coeffRef;
    double  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_792757a9b0365024a2e5c51994bd913f)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::coeffRef;
    double  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_e32360bb181252bdaa93193e338bb152)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::coeffRef;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_80ae219ca2045acabc5f5103b30a6366)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_63b044ebacb75f73a2a44def34ab91cb)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_e19bc71fc2c85750b2fffb0e7b561933)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_72ec984cafc25b918f7e39bfebed085b)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_71db9a8c79fe5a0e800dc814917f8e61)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::conservativeResize;
    class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_ae876db314e654dda85c246ade80a0d8)(long int , double  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::setConstant;
    class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_dc56965b41625251b6d99e4c2e974d9c)(long int , long int , double  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::setConstant;
    class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_a51db7abe7fb52b793ec11277bb5825d)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::setZero;
    class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_304ed043cd9059058827cfa6fc5789dd)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::setZero;
    class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_7a7bdec5ff9f5f67b472580c4951ef03)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::setOnes;
    class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_bc356d7e86505bf59e39f44a68f70ad4)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::setOnes;
    class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_615b7e9c00df52c3b2076137dbbb31ce)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::setRandom;
    class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_4b2d9df6b00552febb22b88ab0391ba3)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::setRandom;
    void  (*method_pointer_727da1fc754552fbb84f53e829578b41)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > > >, boost::noncopyable > class_99a3aea4224d53c982d1e589e456541f("_PlainObjectBase_99a3aea4224d53c982d1e589e456541f", "", boost::python::no_init);
    class_99a3aea4224d53c982d1e589e456541f.def("base", method_pointer_27d9aca3cf365759b4a1a40b71adaa0f, boost::python::return_internal_reference<>(), "");
    class_99a3aea4224d53c982d1e589e456541f.def("base", autowig::method_decorator_27d9aca3cf365759b4a1a40b71adaa0f);
    class_99a3aea4224d53c982d1e589e456541f.def("base", method_pointer_edfc4b4135355d85858cb637e36709f3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_99a3aea4224d53c982d1e589e456541f.def("rows", method_pointer_683916b1652d556d828ad0b93aa66e78, "");
    class_99a3aea4224d53c982d1e589e456541f.def("cols", method_pointer_9bc99f609ad2566bb0dceb1ba0dd179c, "");
    class_99a3aea4224d53c982d1e589e456541f.def("coeff", method_pointer_5eca46ff852457a4927403abfd38af50, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_99a3aea4224d53c982d1e589e456541f.def("coeff", method_pointer_0ce20000c0e7577ab6468178b7ec7980, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_99a3aea4224d53c982d1e589e456541f.def("coeff_ref", method_pointer_050966a2db815fed9772e0123ecc0164, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_99a3aea4224d53c982d1e589e456541f.def("coeff_ref", autowig::method_decorator_050966a2db815fed9772e0123ecc0164);
    class_99a3aea4224d53c982d1e589e456541f.def("coeff_ref", method_pointer_d40b38501e6558159446fb4c9524755e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_99a3aea4224d53c982d1e589e456541f.def("coeff_ref", autowig::method_decorator_d40b38501e6558159446fb4c9524755e);
    class_99a3aea4224d53c982d1e589e456541f.def("coeff_ref", method_pointer_792757a9b0365024a2e5c51994bd913f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_99a3aea4224d53c982d1e589e456541f.def("coeff_ref", method_pointer_e32360bb181252bdaa93193e338bb152, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_99a3aea4224d53c982d1e589e456541f.def("resize", method_pointer_80ae219ca2045acabc5f5103b30a6366, "");
    class_99a3aea4224d53c982d1e589e456541f.def("resize", method_pointer_63b044ebacb75f73a2a44def34ab91cb, "");
    class_99a3aea4224d53c982d1e589e456541f.def("resize", method_pointer_e19bc71fc2c85750b2fffb0e7b561933, "");
    class_99a3aea4224d53c982d1e589e456541f.def("resize", method_pointer_72ec984cafc25b918f7e39bfebed085b, "");
    class_99a3aea4224d53c982d1e589e456541f.def("conservative_resize", method_pointer_71db9a8c79fe5a0e800dc814917f8e61, "");
    class_99a3aea4224d53c982d1e589e456541f.def("set_constant", method_pointer_ae876db314e654dda85c246ade80a0d8, boost::python::return_internal_reference<>(), "");
    class_99a3aea4224d53c982d1e589e456541f.def("set_constant", autowig::method_decorator_ae876db314e654dda85c246ade80a0d8);
    class_99a3aea4224d53c982d1e589e456541f.def("set_constant", method_pointer_dc56965b41625251b6d99e4c2e974d9c, boost::python::return_internal_reference<>(), "");
    class_99a3aea4224d53c982d1e589e456541f.def("set_constant", autowig::method_decorator_dc56965b41625251b6d99e4c2e974d9c);
    class_99a3aea4224d53c982d1e589e456541f.def("set_zero", method_pointer_a51db7abe7fb52b793ec11277bb5825d, boost::python::return_internal_reference<>(), "");
    class_99a3aea4224d53c982d1e589e456541f.def("set_zero", autowig::method_decorator_a51db7abe7fb52b793ec11277bb5825d);
    class_99a3aea4224d53c982d1e589e456541f.def("set_zero", method_pointer_304ed043cd9059058827cfa6fc5789dd, boost::python::return_internal_reference<>(), "");
    class_99a3aea4224d53c982d1e589e456541f.def("set_zero", autowig::method_decorator_304ed043cd9059058827cfa6fc5789dd);
    class_99a3aea4224d53c982d1e589e456541f.def("set_ones", method_pointer_7a7bdec5ff9f5f67b472580c4951ef03, boost::python::return_internal_reference<>(), "");
    class_99a3aea4224d53c982d1e589e456541f.def("set_ones", autowig::method_decorator_7a7bdec5ff9f5f67b472580c4951ef03);
    class_99a3aea4224d53c982d1e589e456541f.def("set_ones", method_pointer_bc356d7e86505bf59e39f44a68f70ad4, boost::python::return_internal_reference<>(), "");
    class_99a3aea4224d53c982d1e589e456541f.def("set_ones", autowig::method_decorator_bc356d7e86505bf59e39f44a68f70ad4);
    class_99a3aea4224d53c982d1e589e456541f.def("set_random", method_pointer_615b7e9c00df52c3b2076137dbbb31ce, boost::python::return_internal_reference<>(), "");
    class_99a3aea4224d53c982d1e589e456541f.def("set_random", autowig::method_decorator_615b7e9c00df52c3b2076137dbbb31ce);
    class_99a3aea4224d53c982d1e589e456541f.def("set_random", method_pointer_4b2d9df6b00552febb22b88ab0391ba3, boost::python::return_internal_reference<>(), "");
    class_99a3aea4224d53c982d1e589e456541f.def("set_random", autowig::method_decorator_4b2d9df6b00552febb22b88ab0391ba3);
    class_99a3aea4224d53c982d1e589e456541f.def("check_template_params", method_pointer_727da1fc754552fbb84f53e829578b41, "");
    class_99a3aea4224d53c982d1e589e456541f.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > > > >();
    }

}