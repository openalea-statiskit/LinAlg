#include "_ieigen.h"


namespace autowig
{
    void method_decorator_0186a7f174135800813d60c89f07a7f2(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_17352612abd552f0a40707c01b6577d2(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)     { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_5e3d36166db9510fbefaccc21ff752f2(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)     { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_636586f6faa558c98127f49504ee85c7(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
// TODO     void method_decorator_e799aeec175753ecba5722f9911ed826(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)     { instance.operator[](param_in_0) = param_out; }
    void method_decorator_60b5f4b4b97656899ce64f665993ebc6(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)     { instance.operator()(param_in_0) = param_out; }
// TODO // TODO     void method_decorator_5102dc12892f5a8ea73392c721b01bf3(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 > & instance, struct ::std::complex< float >  & param_out)     { instance.x() = param_out; }
// TODO     void method_decorator_013de8d2f0d752fe973bfffce6853d29(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 > & instance, struct ::std::complex< float >  & param_out)     { instance.y() = param_out; }
// TODO     void method_decorator_773909586fe5552b82cb8d154fdc4ff7(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 > & instance, struct ::std::complex< float >  & param_out)     { instance.z() = param_out; }
// TODO     void method_decorator_99d3475d9d5d5cc2b8c26cb52aa74f94(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 > & instance, struct ::std::complex< float >  & param_out)     { instance.w() = param_out; }
}


void wrapper_426738ad4adc586ebcbe06bb207b4aca()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_0186a7f174135800813d60c89f07a7f2)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::coeffRef;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_17352612abd552f0a40707c01b6577d2)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::coeffRefByOuterInner;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_5e3d36166db9510fbefaccc21ff752f2)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::operator();
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_636586f6faa558c98127f49504ee85c7)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::coeffRef;
// TODO // TODO     struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_e799aeec175753ecba5722f9911ed826)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::operator[];
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_60b5f4b4b97656899ce64f665993ebc6)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::operator();
// TODO     struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_5102dc12892f5a8ea73392c721b01bf3)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::x;
// TODO     struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_013de8d2f0d752fe973bfffce6853d29)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::y;
// TODO     struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_773909586fe5552b82cb8d154fdc4ff7)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::z;
// TODO     struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_99d3475d9d5d5cc2b8c26cb52aa74f94)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 0 > > > class_426738ad4adc586ebcbe06bb207b4aca("_DenseCoeffsBase_426738ad4adc586ebcbe06bb207b4aca", "", boost::python::no_init);
    class_426738ad4adc586ebcbe06bb207b4aca.def("coeff_ref", method_pointer_0186a7f174135800813d60c89f07a7f2, boost::python::return_internal_reference<>(), "");
    class_426738ad4adc586ebcbe06bb207b4aca.def("coeff_ref", autowig::method_decorator_0186a7f174135800813d60c89f07a7f2);
    class_426738ad4adc586ebcbe06bb207b4aca.def("coeff_ref_by_outer_inner", method_pointer_17352612abd552f0a40707c01b6577d2, boost::python::return_internal_reference<>(), "");
    class_426738ad4adc586ebcbe06bb207b4aca.def("coeff_ref_by_outer_inner", autowig::method_decorator_17352612abd552f0a40707c01b6577d2);
    class_426738ad4adc586ebcbe06bb207b4aca.def("__call__", method_pointer_5e3d36166db9510fbefaccc21ff752f2, boost::python::return_internal_reference<>(), "");
    class_426738ad4adc586ebcbe06bb207b4aca.def("__call__", autowig::method_decorator_5e3d36166db9510fbefaccc21ff752f2);
    class_426738ad4adc586ebcbe06bb207b4aca.def("coeff_ref", method_pointer_636586f6faa558c98127f49504ee85c7, boost::python::return_internal_reference<>(), "");
    class_426738ad4adc586ebcbe06bb207b4aca.def("coeff_ref", autowig::method_decorator_636586f6faa558c98127f49504ee85c7);
// TODO // TODO     class_426738ad4adc586ebcbe06bb207b4aca.def("__getitem__", method_pointer_e799aeec175753ecba5722f9911ed826, boost::python::return_internal_reference<>(), "");
// TODO // TODO     class_426738ad4adc586ebcbe06bb207b4aca.def("__getitem__", autowig::method_decorator_e799aeec175753ecba5722f9911ed826);
    class_426738ad4adc586ebcbe06bb207b4aca.def("__call__", method_pointer_60b5f4b4b97656899ce64f665993ebc6, boost::python::return_internal_reference<>(), "");
    class_426738ad4adc586ebcbe06bb207b4aca.def("__call__", autowig::method_decorator_60b5f4b4b97656899ce64f665993ebc6);
// TODO     class_426738ad4adc586ebcbe06bb207b4aca.def("x", method_pointer_5102dc12892f5a8ea73392c721b01bf3, boost::python::return_internal_reference<>(), "");
// TODO     class_426738ad4adc586ebcbe06bb207b4aca.def("x", autowig::method_decorator_5102dc12892f5a8ea73392c721b01bf3);
// TODO     class_426738ad4adc586ebcbe06bb207b4aca.def("y", method_pointer_013de8d2f0d752fe973bfffce6853d29, boost::python::return_internal_reference<>(), "");
// TODO     class_426738ad4adc586ebcbe06bb207b4aca.def("y", autowig::method_decorator_013de8d2f0d752fe973bfffce6853d29);
// TODO     class_426738ad4adc586ebcbe06bb207b4aca.def("z", method_pointer_773909586fe5552b82cb8d154fdc4ff7, boost::python::return_internal_reference<>(), "");
// TODO     class_426738ad4adc586ebcbe06bb207b4aca.def("z", autowig::method_decorator_773909586fe5552b82cb8d154fdc4ff7);
// TODO     class_426738ad4adc586ebcbe06bb207b4aca.def("w", method_pointer_99d3475d9d5d5cc2b8c26cb52aa74f94, boost::python::return_internal_reference<>(), "");
// TODO     class_426738ad4adc586ebcbe06bb207b4aca.def("w", autowig::method_decorator_99d3475d9d5d5cc2b8c26cb52aa74f94);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 0 > > >();
    }

}