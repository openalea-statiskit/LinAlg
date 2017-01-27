#include "_ieigen.h"


namespace autowig
{
    void method_decorator_66277285a28a56bd8c9ac4dab2677fea(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_29d29ec1f25c5fc5b542f54f4906343e(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)     { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_36be829ebc31515191a8a32243902455(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)     { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_d9c4d9b0fbfb55f886058417e73eb059(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 1 > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_c2b326ca2d9058a9a98070ec4414feb8(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 1 > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)     { instance.operator[](param_in_0) = param_out; }
    void method_decorator_b3c0bc64ce1c5731a9e6d06ecb0e8824(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 1 > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)     { instance.operator()(param_in_0) = param_out; }
    void method_decorator_6ade43af24015e918f2c8022da2bbc84(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 1 > & instance, struct ::std::complex< float >  & param_out)     { instance.x() = param_out; }
    void method_decorator_c4c5d6b360e5520a83877d4947922a91(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 1 > & instance, struct ::std::complex< float >  & param_out)     { instance.y() = param_out; }
// TODO     void method_decorator_c00162f49e9f5460b8c8a852febfa83e(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 1 > & instance, struct ::std::complex< float >  & param_out)     { instance.z() = param_out; }
// TODO     void method_decorator_1016151f40d25e27a22ffa3048ace787(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 1 > & instance, struct ::std::complex< float >  & param_out)     { instance.w() = param_out; }
}


void wrapper_c65e91d946505a46899dbd4e63b33a4a()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_66277285a28a56bd8c9ac4dab2677fea)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 1 >::coeffRef;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_29d29ec1f25c5fc5b542f54f4906343e)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 1 >::coeffRefByOuterInner;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_36be829ebc31515191a8a32243902455)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 1 >::operator();
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_d9c4d9b0fbfb55f886058417e73eb059)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 1 >::coeffRef;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_c2b326ca2d9058a9a98070ec4414feb8)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 1 >::operator[];
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_b3c0bc64ce1c5731a9e6d06ecb0e8824)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 1 >::operator();
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_6ade43af24015e918f2c8022da2bbc84)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 1 >::x;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_c4c5d6b360e5520a83877d4947922a91)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 1 >::y;
// TODO // TODO     struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_c00162f49e9f5460b8c8a852febfa83e)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 1 >::z;
// TODO // TODO     struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_1016151f40d25e27a22ffa3048ace787)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 0 > > > class_c65e91d946505a46899dbd4e63b33a4a("_DenseCoeffsBase_c65e91d946505a46899dbd4e63b33a4a", "", boost::python::no_init);
    class_c65e91d946505a46899dbd4e63b33a4a.def("coeff_ref", method_pointer_66277285a28a56bd8c9ac4dab2677fea, boost::python::return_internal_reference<>(), "");
    class_c65e91d946505a46899dbd4e63b33a4a.def("coeff_ref", autowig::method_decorator_66277285a28a56bd8c9ac4dab2677fea);
    class_c65e91d946505a46899dbd4e63b33a4a.def("coeff_ref_by_outer_inner", method_pointer_29d29ec1f25c5fc5b542f54f4906343e, boost::python::return_internal_reference<>(), "");
    class_c65e91d946505a46899dbd4e63b33a4a.def("coeff_ref_by_outer_inner", autowig::method_decorator_29d29ec1f25c5fc5b542f54f4906343e);
    class_c65e91d946505a46899dbd4e63b33a4a.def("__call__", method_pointer_36be829ebc31515191a8a32243902455, boost::python::return_internal_reference<>(), "");
    class_c65e91d946505a46899dbd4e63b33a4a.def("__call__", autowig::method_decorator_36be829ebc31515191a8a32243902455);
    class_c65e91d946505a46899dbd4e63b33a4a.def("coeff_ref", method_pointer_d9c4d9b0fbfb55f886058417e73eb059, boost::python::return_internal_reference<>(), "");
    class_c65e91d946505a46899dbd4e63b33a4a.def("coeff_ref", autowig::method_decorator_d9c4d9b0fbfb55f886058417e73eb059);
    class_c65e91d946505a46899dbd4e63b33a4a.def("__getitem__", method_pointer_c2b326ca2d9058a9a98070ec4414feb8, boost::python::return_internal_reference<>(), "");
    class_c65e91d946505a46899dbd4e63b33a4a.def("__getitem__", autowig::method_decorator_c2b326ca2d9058a9a98070ec4414feb8);
    class_c65e91d946505a46899dbd4e63b33a4a.def("__call__", method_pointer_b3c0bc64ce1c5731a9e6d06ecb0e8824, boost::python::return_internal_reference<>(), "");
    class_c65e91d946505a46899dbd4e63b33a4a.def("__call__", autowig::method_decorator_b3c0bc64ce1c5731a9e6d06ecb0e8824);
    class_c65e91d946505a46899dbd4e63b33a4a.def("x", method_pointer_6ade43af24015e918f2c8022da2bbc84, boost::python::return_internal_reference<>(), "");
    class_c65e91d946505a46899dbd4e63b33a4a.def("x", autowig::method_decorator_6ade43af24015e918f2c8022da2bbc84);
    class_c65e91d946505a46899dbd4e63b33a4a.def("y", method_pointer_c4c5d6b360e5520a83877d4947922a91, boost::python::return_internal_reference<>(), "");
    class_c65e91d946505a46899dbd4e63b33a4a.def("y", autowig::method_decorator_c4c5d6b360e5520a83877d4947922a91);
// TODO // TODO     class_c65e91d946505a46899dbd4e63b33a4a.def("z", method_pointer_c00162f49e9f5460b8c8a852febfa83e, boost::python::return_internal_reference<>(), "");
// TODO // TODO     class_c65e91d946505a46899dbd4e63b33a4a.def("z", autowig::method_decorator_c00162f49e9f5460b8c8a852febfa83e);
// TODO // TODO     class_c65e91d946505a46899dbd4e63b33a4a.def("w", method_pointer_1016151f40d25e27a22ffa3048ace787, boost::python::return_internal_reference<>(), "");
// TODO // TODO     class_c65e91d946505a46899dbd4e63b33a4a.def("w", autowig::method_decorator_1016151f40d25e27a22ffa3048ace787);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 0 > > >();
    }

}