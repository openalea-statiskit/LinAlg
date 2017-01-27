#include "_ieigen.h"


namespace autowig
{
    void method_decorator_504017b5eaf1515f86b074d55662e246(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_c0c495841ced565eb5407c1adc6edcdf(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)     { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_5e53b796ec7454b79bd43946dcbd82fd(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)     { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_4dba34a6484350df8208939673aa043a(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 1 > & instance, long int  param_in_0, const int  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_5bf9336e1eab52f9902af9516f0722c7(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 1 > & instance, long int  param_in_0, const int  & param_out)     { instance.operator[](param_in_0) = param_out; }
    void method_decorator_9c79df08e4285f4bb14a197b6a871ef3(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 1 > & instance, long int  param_in_0, const int  & param_out)     { instance.operator()(param_in_0) = param_out; }
    void method_decorator_22d7fb9137fa5bec9df1eb1ee7cdac93(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 1 > & instance, const int  & param_out)     { instance.x() = param_out; }
    void method_decorator_5bafa302e7ab5068bfc7f13d22cb50a5(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 1 > & instance, const int  & param_out)     { instance.y() = param_out; }
    void method_decorator_ac06e7cd9c765016a8d40a4b0734fe7b(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 1 > & instance, const int  & param_out)     { instance.z() = param_out; }
    void method_decorator_eba033b0fabf5314b43c802a338c059e(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 1 > & instance, const int  & param_out)     { instance.w() = param_out; }
}


void wrapper_b6824348602558a9bfe99c73296871a7()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_504017b5eaf1515f86b074d55662e246)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 1 >::coeffRef;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_c0c495841ced565eb5407c1adc6edcdf)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 1 >::coeffRefByOuterInner;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_5e53b796ec7454b79bd43946dcbd82fd)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 1 >::operator();
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_4dba34a6484350df8208939673aa043a)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 1 >::coeffRef;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_5bf9336e1eab52f9902af9516f0722c7)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 1 >::operator[];
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_9c79df08e4285f4bb14a197b6a871ef3)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 1 >::operator();
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_22d7fb9137fa5bec9df1eb1ee7cdac93)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 1 >::x;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_5bafa302e7ab5068bfc7f13d22cb50a5)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 1 >::y;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_ac06e7cd9c765016a8d40a4b0734fe7b)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 1 >::z;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_eba033b0fabf5314b43c802a338c059e)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 0 > > > class_b6824348602558a9bfe99c73296871a7("_DenseCoeffsBase_b6824348602558a9bfe99c73296871a7", "", boost::python::no_init);
    class_b6824348602558a9bfe99c73296871a7.def("coeff_ref", method_pointer_504017b5eaf1515f86b074d55662e246, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b6824348602558a9bfe99c73296871a7.def("coeff_ref", autowig::method_decorator_504017b5eaf1515f86b074d55662e246);
    class_b6824348602558a9bfe99c73296871a7.def("coeff_ref_by_outer_inner", method_pointer_c0c495841ced565eb5407c1adc6edcdf, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b6824348602558a9bfe99c73296871a7.def("coeff_ref_by_outer_inner", autowig::method_decorator_c0c495841ced565eb5407c1adc6edcdf);
    class_b6824348602558a9bfe99c73296871a7.def("__call__", method_pointer_5e53b796ec7454b79bd43946dcbd82fd, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b6824348602558a9bfe99c73296871a7.def("__call__", autowig::method_decorator_5e53b796ec7454b79bd43946dcbd82fd);
    class_b6824348602558a9bfe99c73296871a7.def("coeff_ref", method_pointer_4dba34a6484350df8208939673aa043a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b6824348602558a9bfe99c73296871a7.def("coeff_ref", autowig::method_decorator_4dba34a6484350df8208939673aa043a);
    class_b6824348602558a9bfe99c73296871a7.def("__getitem__", method_pointer_5bf9336e1eab52f9902af9516f0722c7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b6824348602558a9bfe99c73296871a7.def("__getitem__", autowig::method_decorator_5bf9336e1eab52f9902af9516f0722c7);
    class_b6824348602558a9bfe99c73296871a7.def("__call__", method_pointer_9c79df08e4285f4bb14a197b6a871ef3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b6824348602558a9bfe99c73296871a7.def("__call__", autowig::method_decorator_9c79df08e4285f4bb14a197b6a871ef3);
    class_b6824348602558a9bfe99c73296871a7.def("x", method_pointer_22d7fb9137fa5bec9df1eb1ee7cdac93, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b6824348602558a9bfe99c73296871a7.def("x", autowig::method_decorator_22d7fb9137fa5bec9df1eb1ee7cdac93);
    class_b6824348602558a9bfe99c73296871a7.def("y", method_pointer_5bafa302e7ab5068bfc7f13d22cb50a5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b6824348602558a9bfe99c73296871a7.def("y", autowig::method_decorator_5bafa302e7ab5068bfc7f13d22cb50a5);
    class_b6824348602558a9bfe99c73296871a7.def("z", method_pointer_ac06e7cd9c765016a8d40a4b0734fe7b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b6824348602558a9bfe99c73296871a7.def("z", autowig::method_decorator_ac06e7cd9c765016a8d40a4b0734fe7b);
    class_b6824348602558a9bfe99c73296871a7.def("w", method_pointer_eba033b0fabf5314b43c802a338c059e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b6824348602558a9bfe99c73296871a7.def("w", autowig::method_decorator_eba033b0fabf5314b43c802a338c059e);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 0 > > >();
    }

}