#include "_ieigen.h"


namespace autowig
{
    void method_decorator_e9063ae8031d5c3c9e4c169d0ec559a8(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_e969163850105113bf13c1667c99dd64(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)     { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_90a80c11aeda5f8fae4878135f6f9cab(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)     { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_be669414f1c6568ab554fe9822d90ddc(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
// TODO     void method_decorator_280cda33d2755e398f75a22881231c39(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)     { instance.operator[](param_in_0) = param_out; }
    void method_decorator_78824da3f543573ebd289c14334788e3(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)     { instance.operator()(param_in_0) = param_out; }
// TODO // TODO     void method_decorator_1b84da553397590d852abfae675fbb84(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 > & instance, struct ::std::complex< float >  & param_out)     { instance.x() = param_out; }
// TODO     void method_decorator_b3f4c591d70852e2b4d8d6d16ecd8919(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 > & instance, struct ::std::complex< float >  & param_out)     { instance.y() = param_out; }
// TODO     void method_decorator_b1d5ca4a79c250388a904673929c38cb(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 > & instance, struct ::std::complex< float >  & param_out)     { instance.z() = param_out; }
// TODO     void method_decorator_1e2497c390e558dd890077b679658ad3(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 > & instance, struct ::std::complex< float >  & param_out)     { instance.w() = param_out; }
}


void wrapper_75904e49bb88539da86aba31c048b821()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_e9063ae8031d5c3c9e4c169d0ec559a8)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::coeffRef;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_e969163850105113bf13c1667c99dd64)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::coeffRefByOuterInner;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_90a80c11aeda5f8fae4878135f6f9cab)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::operator();
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_be669414f1c6568ab554fe9822d90ddc)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::coeffRef;
// TODO // TODO     struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_280cda33d2755e398f75a22881231c39)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::operator[];
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_78824da3f543573ebd289c14334788e3)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::operator();
// TODO     struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_1b84da553397590d852abfae675fbb84)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::x;
// TODO     struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_b3f4c591d70852e2b4d8d6d16ecd8919)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::y;
// TODO     struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_b1d5ca4a79c250388a904673929c38cb)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::z;
// TODO     struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_1e2497c390e558dd890077b679658ad3)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 0 > > > class_75904e49bb88539da86aba31c048b821("_DenseCoeffsBase_75904e49bb88539da86aba31c048b821", "", boost::python::no_init);
    class_75904e49bb88539da86aba31c048b821.def("coeff_ref", method_pointer_e9063ae8031d5c3c9e4c169d0ec559a8, boost::python::return_internal_reference<>(), "");
    class_75904e49bb88539da86aba31c048b821.def("coeff_ref", autowig::method_decorator_e9063ae8031d5c3c9e4c169d0ec559a8);
    class_75904e49bb88539da86aba31c048b821.def("coeff_ref_by_outer_inner", method_pointer_e969163850105113bf13c1667c99dd64, boost::python::return_internal_reference<>(), "");
    class_75904e49bb88539da86aba31c048b821.def("coeff_ref_by_outer_inner", autowig::method_decorator_e969163850105113bf13c1667c99dd64);
    class_75904e49bb88539da86aba31c048b821.def("__call__", method_pointer_90a80c11aeda5f8fae4878135f6f9cab, boost::python::return_internal_reference<>(), "");
    class_75904e49bb88539da86aba31c048b821.def("__call__", autowig::method_decorator_90a80c11aeda5f8fae4878135f6f9cab);
    class_75904e49bb88539da86aba31c048b821.def("coeff_ref", method_pointer_be669414f1c6568ab554fe9822d90ddc, boost::python::return_internal_reference<>(), "");
    class_75904e49bb88539da86aba31c048b821.def("coeff_ref", autowig::method_decorator_be669414f1c6568ab554fe9822d90ddc);
// TODO // TODO     class_75904e49bb88539da86aba31c048b821.def("__getitem__", method_pointer_280cda33d2755e398f75a22881231c39, boost::python::return_internal_reference<>(), "");
// TODO // TODO     class_75904e49bb88539da86aba31c048b821.def("__getitem__", autowig::method_decorator_280cda33d2755e398f75a22881231c39);
    class_75904e49bb88539da86aba31c048b821.def("__call__", method_pointer_78824da3f543573ebd289c14334788e3, boost::python::return_internal_reference<>(), "");
    class_75904e49bb88539da86aba31c048b821.def("__call__", autowig::method_decorator_78824da3f543573ebd289c14334788e3);
// TODO     class_75904e49bb88539da86aba31c048b821.def("x", method_pointer_1b84da553397590d852abfae675fbb84, boost::python::return_internal_reference<>(), "");
// TODO     class_75904e49bb88539da86aba31c048b821.def("x", autowig::method_decorator_1b84da553397590d852abfae675fbb84);
// TODO     class_75904e49bb88539da86aba31c048b821.def("y", method_pointer_b3f4c591d70852e2b4d8d6d16ecd8919, boost::python::return_internal_reference<>(), "");
// TODO     class_75904e49bb88539da86aba31c048b821.def("y", autowig::method_decorator_b3f4c591d70852e2b4d8d6d16ecd8919);
// TODO     class_75904e49bb88539da86aba31c048b821.def("z", method_pointer_b1d5ca4a79c250388a904673929c38cb, boost::python::return_internal_reference<>(), "");
// TODO     class_75904e49bb88539da86aba31c048b821.def("z", autowig::method_decorator_b1d5ca4a79c250388a904673929c38cb);
// TODO     class_75904e49bb88539da86aba31c048b821.def("w", method_pointer_1e2497c390e558dd890077b679658ad3, boost::python::return_internal_reference<>(), "");
// TODO     class_75904e49bb88539da86aba31c048b821.def("w", autowig::method_decorator_1e2497c390e558dd890077b679658ad3);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 0 > > >();
    }

}