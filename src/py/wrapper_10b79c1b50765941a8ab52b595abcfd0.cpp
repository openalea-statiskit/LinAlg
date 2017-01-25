#include "_ieigen.h"


namespace autowig
{
    void method_decorator_dc22f721eeca512e91511a745985cc75(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_0fc9173eeb5c528fa3cd6c390224865f(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)
    { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_5a1fd4fe40c7586883a54b1c50ea11a1(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)
    { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_9d41c5b565885a37b6a25bfbebdc56d4(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 1 > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_4299abffe8bb5258911c1c6352f1d1d6(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 1 > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)
    { instance.operator[](param_in_0) = param_out; }
    void method_decorator_3a421eb0b0a25dbeaaa125409f2f9728(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 1 > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)
    { instance.operator()(param_in_0) = param_out; }
    void method_decorator_a1580351f82e5e9e9bd1a2aa728956e1(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 1 > & instance, struct ::std::complex< double >  & param_out)
    { instance.x() = param_out; }
    void method_decorator_f4536ac289805383b000db80df02e323(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 1 > & instance, struct ::std::complex< double >  & param_out)
    { instance.y() = param_out; }
    void method_decorator_64cfe67611f351958ecef46b64dbce08(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 1 > & instance, struct ::std::complex< double >  & param_out)
    { instance.z() = param_out; }
    void method_decorator_7dafb59f8a07562faa0a3c7ec1262335(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 1 > & instance, struct ::std::complex< double >  & param_out)
    { instance.w() = param_out; }
}


void wrapper_10b79c1b50765941a8ab52b595abcfd0()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_dc22f721eeca512e91511a745985cc75)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 1 >::coeffRef;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_0fc9173eeb5c528fa3cd6c390224865f)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 1 >::coeffRefByOuterInner;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_5a1fd4fe40c7586883a54b1c50ea11a1)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 1 >::operator();
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_9d41c5b565885a37b6a25bfbebdc56d4)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 1 >::coeffRef;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_4299abffe8bb5258911c1c6352f1d1d6)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 1 >::operator[];
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_3a421eb0b0a25dbeaaa125409f2f9728)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 1 >::operator();
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_a1580351f82e5e9e9bd1a2aa728956e1)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 1 >::x;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_f4536ac289805383b000db80df02e323)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 1 >::y;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_64cfe67611f351958ecef46b64dbce08)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 1 >::z;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_7dafb59f8a07562faa0a3c7ec1262335)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 0 > > > class_10b79c1b50765941a8ab52b595abcfd0("_DenseCoeffsBase_10b79c1b50765941a8ab52b595abcfd0", "", boost::python::no_init);
    class_10b79c1b50765941a8ab52b595abcfd0.def("coeff_ref", method_pointer_dc22f721eeca512e91511a745985cc75, boost::python::return_internal_reference<>(), "");
    class_10b79c1b50765941a8ab52b595abcfd0.def("coeff_ref", autowig::method_decorator_dc22f721eeca512e91511a745985cc75);
    class_10b79c1b50765941a8ab52b595abcfd0.def("coeff_ref_by_outer_inner", method_pointer_0fc9173eeb5c528fa3cd6c390224865f, boost::python::return_internal_reference<>(), "");
    class_10b79c1b50765941a8ab52b595abcfd0.def("coeff_ref_by_outer_inner", autowig::method_decorator_0fc9173eeb5c528fa3cd6c390224865f);
    class_10b79c1b50765941a8ab52b595abcfd0.def("__call__", method_pointer_5a1fd4fe40c7586883a54b1c50ea11a1, boost::python::return_internal_reference<>(), "");
    class_10b79c1b50765941a8ab52b595abcfd0.def("__call__", autowig::method_decorator_5a1fd4fe40c7586883a54b1c50ea11a1);
    class_10b79c1b50765941a8ab52b595abcfd0.def("coeff_ref", method_pointer_9d41c5b565885a37b6a25bfbebdc56d4, boost::python::return_internal_reference<>(), "");
    class_10b79c1b50765941a8ab52b595abcfd0.def("coeff_ref", autowig::method_decorator_9d41c5b565885a37b6a25bfbebdc56d4);
    class_10b79c1b50765941a8ab52b595abcfd0.def("__getitem__", method_pointer_4299abffe8bb5258911c1c6352f1d1d6, boost::python::return_internal_reference<>(), "");
    class_10b79c1b50765941a8ab52b595abcfd0.def("__getitem__", autowig::method_decorator_4299abffe8bb5258911c1c6352f1d1d6);
    class_10b79c1b50765941a8ab52b595abcfd0.def("__call__", method_pointer_3a421eb0b0a25dbeaaa125409f2f9728, boost::python::return_internal_reference<>(), "");
    class_10b79c1b50765941a8ab52b595abcfd0.def("__call__", autowig::method_decorator_3a421eb0b0a25dbeaaa125409f2f9728);
    class_10b79c1b50765941a8ab52b595abcfd0.def("x", method_pointer_a1580351f82e5e9e9bd1a2aa728956e1, boost::python::return_internal_reference<>(), "");
    class_10b79c1b50765941a8ab52b595abcfd0.def("x", autowig::method_decorator_a1580351f82e5e9e9bd1a2aa728956e1);
    class_10b79c1b50765941a8ab52b595abcfd0.def("y", method_pointer_f4536ac289805383b000db80df02e323, boost::python::return_internal_reference<>(), "");
    class_10b79c1b50765941a8ab52b595abcfd0.def("y", autowig::method_decorator_f4536ac289805383b000db80df02e323);
    class_10b79c1b50765941a8ab52b595abcfd0.def("z", method_pointer_64cfe67611f351958ecef46b64dbce08, boost::python::return_internal_reference<>(), "");
    class_10b79c1b50765941a8ab52b595abcfd0.def("z", autowig::method_decorator_64cfe67611f351958ecef46b64dbce08);
    class_10b79c1b50765941a8ab52b595abcfd0.def("w", method_pointer_7dafb59f8a07562faa0a3c7ec1262335, boost::python::return_internal_reference<>(), "");
    class_10b79c1b50765941a8ab52b595abcfd0.def("w", autowig::method_decorator_7dafb59f8a07562faa0a3c7ec1262335);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 0 > > >();
    }

}