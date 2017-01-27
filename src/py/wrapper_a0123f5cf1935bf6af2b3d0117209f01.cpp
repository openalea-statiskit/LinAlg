#include "_ieigen.h"


namespace autowig
{
    void method_decorator_c4ea7b5849295e59bc96f7341561b8ca(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_2cda614f4dec50048cec69342e1f68c3(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)     { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_7fa442be03d35460b8e210204af3626c(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)     { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_0803c6fe02725bbe870f69b92d44e698(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 1 > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_11fc4d394f765e53a465ec4a51deb971(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 1 > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)     { instance.operator[](param_in_0) = param_out; }
    void method_decorator_1c0631b120365694b5a22fd57edba34f(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 1 > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)     { instance.operator()(param_in_0) = param_out; }
    void method_decorator_e69b4c7f5ba458da8a37bf5e10a58733(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 1 > & instance, struct ::std::complex< double >  & param_out)     { instance.x() = param_out; }
    void method_decorator_a86ae5d01bb65356ae23309590b6ae9b(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 1 > & instance, struct ::std::complex< double >  & param_out)     { instance.y() = param_out; }
    void method_decorator_8c44057075e65dbc8a22b4c24d0d2473(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 1 > & instance, struct ::std::complex< double >  & param_out)     { instance.z() = param_out; }
    void method_decorator_fbf6f639d7435fab9245912cc95aa4ee(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 1 > & instance, struct ::std::complex< double >  & param_out)     { instance.w() = param_out; }
}


void wrapper_a0123f5cf1935bf6af2b3d0117209f01()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_c4ea7b5849295e59bc96f7341561b8ca)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 1 >::coeffRef;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_2cda614f4dec50048cec69342e1f68c3)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 1 >::coeffRefByOuterInner;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_7fa442be03d35460b8e210204af3626c)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 1 >::operator();
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_0803c6fe02725bbe870f69b92d44e698)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 1 >::coeffRef;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_11fc4d394f765e53a465ec4a51deb971)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 1 >::operator[];
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_1c0631b120365694b5a22fd57edba34f)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 1 >::operator();
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_e69b4c7f5ba458da8a37bf5e10a58733)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 1 >::x;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_a86ae5d01bb65356ae23309590b6ae9b)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 1 >::y;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_8c44057075e65dbc8a22b4c24d0d2473)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 1 >::z;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_fbf6f639d7435fab9245912cc95aa4ee)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 0 > > > class_a0123f5cf1935bf6af2b3d0117209f01("_DenseCoeffsBase_a0123f5cf1935bf6af2b3d0117209f01", "", boost::python::no_init);
    class_a0123f5cf1935bf6af2b3d0117209f01.def("coeff_ref", method_pointer_c4ea7b5849295e59bc96f7341561b8ca, boost::python::return_internal_reference<>(), "");
    class_a0123f5cf1935bf6af2b3d0117209f01.def("coeff_ref", autowig::method_decorator_c4ea7b5849295e59bc96f7341561b8ca);
    class_a0123f5cf1935bf6af2b3d0117209f01.def("coeff_ref_by_outer_inner", method_pointer_2cda614f4dec50048cec69342e1f68c3, boost::python::return_internal_reference<>(), "");
    class_a0123f5cf1935bf6af2b3d0117209f01.def("coeff_ref_by_outer_inner", autowig::method_decorator_2cda614f4dec50048cec69342e1f68c3);
    class_a0123f5cf1935bf6af2b3d0117209f01.def("__call__", method_pointer_7fa442be03d35460b8e210204af3626c, boost::python::return_internal_reference<>(), "");
    class_a0123f5cf1935bf6af2b3d0117209f01.def("__call__", autowig::method_decorator_7fa442be03d35460b8e210204af3626c);
    class_a0123f5cf1935bf6af2b3d0117209f01.def("coeff_ref", method_pointer_0803c6fe02725bbe870f69b92d44e698, boost::python::return_internal_reference<>(), "");
    class_a0123f5cf1935bf6af2b3d0117209f01.def("coeff_ref", autowig::method_decorator_0803c6fe02725bbe870f69b92d44e698);
    class_a0123f5cf1935bf6af2b3d0117209f01.def("__getitem__", method_pointer_11fc4d394f765e53a465ec4a51deb971, boost::python::return_internal_reference<>(), "");
    class_a0123f5cf1935bf6af2b3d0117209f01.def("__getitem__", autowig::method_decorator_11fc4d394f765e53a465ec4a51deb971);
    class_a0123f5cf1935bf6af2b3d0117209f01.def("__call__", method_pointer_1c0631b120365694b5a22fd57edba34f, boost::python::return_internal_reference<>(), "");
    class_a0123f5cf1935bf6af2b3d0117209f01.def("__call__", autowig::method_decorator_1c0631b120365694b5a22fd57edba34f);
    class_a0123f5cf1935bf6af2b3d0117209f01.def("x", method_pointer_e69b4c7f5ba458da8a37bf5e10a58733, boost::python::return_internal_reference<>(), "");
    class_a0123f5cf1935bf6af2b3d0117209f01.def("x", autowig::method_decorator_e69b4c7f5ba458da8a37bf5e10a58733);
    class_a0123f5cf1935bf6af2b3d0117209f01.def("y", method_pointer_a86ae5d01bb65356ae23309590b6ae9b, boost::python::return_internal_reference<>(), "");
    class_a0123f5cf1935bf6af2b3d0117209f01.def("y", autowig::method_decorator_a86ae5d01bb65356ae23309590b6ae9b);
    class_a0123f5cf1935bf6af2b3d0117209f01.def("z", method_pointer_8c44057075e65dbc8a22b4c24d0d2473, boost::python::return_internal_reference<>(), "");
    class_a0123f5cf1935bf6af2b3d0117209f01.def("z", autowig::method_decorator_8c44057075e65dbc8a22b4c24d0d2473);
    class_a0123f5cf1935bf6af2b3d0117209f01.def("w", method_pointer_fbf6f639d7435fab9245912cc95aa4ee, boost::python::return_internal_reference<>(), "");
    class_a0123f5cf1935bf6af2b3d0117209f01.def("w", autowig::method_decorator_fbf6f639d7435fab9245912cc95aa4ee);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 0 > > >();
    }

}