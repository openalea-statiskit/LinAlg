#include "_ieigen.h"


namespace autowig
{
    void method_decorator_b1387ba77a9e578580353dbcd07a8723(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_9f2cef622d7f5c289fcdc20c256e9a2d(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)     { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_22aa39d9f96e5427bf838d21c39337cf(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)     { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_f66c3d10457e501ab0e15760088dfe77(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
// TODO     void method_decorator_bd1a40cf9c3356f6829e9746e4174bc7(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)     { instance.operator[](param_in_0) = param_out; }
    void method_decorator_3e52ef0ca5cb5d59a03fccb999c0727b(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)     { instance.operator()(param_in_0) = param_out; }
// TODO // TODO     void method_decorator_c1bf5b732f61538181526d7825e98a87(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 > & instance, struct ::std::complex< double >  & param_out)     { instance.x() = param_out; }
// TODO     void method_decorator_baf6355342dd5e1cae15ec150bd2f5ca(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 > & instance, struct ::std::complex< double >  & param_out)     { instance.y() = param_out; }
// TODO     void method_decorator_570d450a8e1c5b95bf1b58356b58f6e8(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 > & instance, struct ::std::complex< double >  & param_out)     { instance.z() = param_out; }
// TODO     void method_decorator_421a312c2c4859e3aa4c3efe43d32c3b(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 > & instance, struct ::std::complex< double >  & param_out)     { instance.w() = param_out; }
}


void wrapper_0a48970b09585b168a099382d0c62202()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_b1387ba77a9e578580353dbcd07a8723)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::coeffRef;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_9f2cef622d7f5c289fcdc20c256e9a2d)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::coeffRefByOuterInner;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_22aa39d9f96e5427bf838d21c39337cf)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::operator();
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_f66c3d10457e501ab0e15760088dfe77)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::coeffRef;
// TODO // TODO     struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_bd1a40cf9c3356f6829e9746e4174bc7)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::operator[];
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_3e52ef0ca5cb5d59a03fccb999c0727b)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::operator();
// TODO     struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_c1bf5b732f61538181526d7825e98a87)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::x;
// TODO     struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_baf6355342dd5e1cae15ec150bd2f5ca)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::y;
// TODO     struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_570d450a8e1c5b95bf1b58356b58f6e8)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::z;
// TODO     struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_421a312c2c4859e3aa4c3efe43d32c3b)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 0 > > > class_0a48970b09585b168a099382d0c62202("_DenseCoeffsBase_0a48970b09585b168a099382d0c62202", "", boost::python::no_init);
    class_0a48970b09585b168a099382d0c62202.def("coeff_ref", method_pointer_b1387ba77a9e578580353dbcd07a8723, boost::python::return_internal_reference<>(), "");
    class_0a48970b09585b168a099382d0c62202.def("coeff_ref", autowig::method_decorator_b1387ba77a9e578580353dbcd07a8723);
    class_0a48970b09585b168a099382d0c62202.def("coeff_ref_by_outer_inner", method_pointer_9f2cef622d7f5c289fcdc20c256e9a2d, boost::python::return_internal_reference<>(), "");
    class_0a48970b09585b168a099382d0c62202.def("coeff_ref_by_outer_inner", autowig::method_decorator_9f2cef622d7f5c289fcdc20c256e9a2d);
    class_0a48970b09585b168a099382d0c62202.def("__call__", method_pointer_22aa39d9f96e5427bf838d21c39337cf, boost::python::return_internal_reference<>(), "");
    class_0a48970b09585b168a099382d0c62202.def("__call__", autowig::method_decorator_22aa39d9f96e5427bf838d21c39337cf);
    class_0a48970b09585b168a099382d0c62202.def("coeff_ref", method_pointer_f66c3d10457e501ab0e15760088dfe77, boost::python::return_internal_reference<>(), "");
    class_0a48970b09585b168a099382d0c62202.def("coeff_ref", autowig::method_decorator_f66c3d10457e501ab0e15760088dfe77);
// TODO // TODO     class_0a48970b09585b168a099382d0c62202.def("__getitem__", method_pointer_bd1a40cf9c3356f6829e9746e4174bc7, boost::python::return_internal_reference<>(), "");
// TODO // TODO     class_0a48970b09585b168a099382d0c62202.def("__getitem__", autowig::method_decorator_bd1a40cf9c3356f6829e9746e4174bc7);
    class_0a48970b09585b168a099382d0c62202.def("__call__", method_pointer_3e52ef0ca5cb5d59a03fccb999c0727b, boost::python::return_internal_reference<>(), "");
    class_0a48970b09585b168a099382d0c62202.def("__call__", autowig::method_decorator_3e52ef0ca5cb5d59a03fccb999c0727b);
// TODO     class_0a48970b09585b168a099382d0c62202.def("x", method_pointer_c1bf5b732f61538181526d7825e98a87, boost::python::return_internal_reference<>(), "");
// TODO     class_0a48970b09585b168a099382d0c62202.def("x", autowig::method_decorator_c1bf5b732f61538181526d7825e98a87);
// TODO     class_0a48970b09585b168a099382d0c62202.def("y", method_pointer_baf6355342dd5e1cae15ec150bd2f5ca, boost::python::return_internal_reference<>(), "");
// TODO     class_0a48970b09585b168a099382d0c62202.def("y", autowig::method_decorator_baf6355342dd5e1cae15ec150bd2f5ca);
// TODO     class_0a48970b09585b168a099382d0c62202.def("z", method_pointer_570d450a8e1c5b95bf1b58356b58f6e8, boost::python::return_internal_reference<>(), "");
// TODO     class_0a48970b09585b168a099382d0c62202.def("z", autowig::method_decorator_570d450a8e1c5b95bf1b58356b58f6e8);
// TODO     class_0a48970b09585b168a099382d0c62202.def("w", method_pointer_421a312c2c4859e3aa4c3efe43d32c3b, boost::python::return_internal_reference<>(), "");
// TODO     class_0a48970b09585b168a099382d0c62202.def("w", autowig::method_decorator_421a312c2c4859e3aa4c3efe43d32c3b);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 0 > > >();
    }

}