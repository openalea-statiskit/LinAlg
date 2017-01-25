#include "_ieigen.h"


namespace autowig
{
    void method_decorator_63dde57164a65c89a32ebafe13bfe856(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_f0678b34e35b52be8637d26218e79f4c(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)
    { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_0387011c12a3587abf5fe88949dfe3e1(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)
    { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_80a5736dd5545dc98a8d000511145b67(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 1 > & instance, long int  param_in_0, const int  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_fce283d0f3fb5d1e88ea1c2749687a8d(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 1 > & instance, long int  param_in_0, const int  & param_out)
    { instance.operator[](param_in_0) = param_out; }
    void method_decorator_0db3dcfc359e5503a32f8c8a47013022(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 1 > & instance, long int  param_in_0, const int  & param_out)
    { instance.operator()(param_in_0) = param_out; }
    void method_decorator_02a9fcc56ab7535da04a1fb42e569a19(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 1 > & instance, const int  & param_out)
    { instance.x() = param_out; }
    void method_decorator_64a547332d7a5adba1ab70689cf6bd47(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 1 > & instance, const int  & param_out)
    { instance.y() = param_out; }
    void method_decorator_28f64d71306d569db974c8b4380cf352(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 1 > & instance, const int  & param_out)
    { instance.z() = param_out; }
    void method_decorator_f2588838be055576adaf601e76594614(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 1 > & instance, const int  & param_out)
    { instance.w() = param_out; }
}


void wrapper_7090c65e5dfe5aaf861b16a8609eb84d()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_63dde57164a65c89a32ebafe13bfe856)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 1 >::coeffRef;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_f0678b34e35b52be8637d26218e79f4c)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 1 >::coeffRefByOuterInner;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_0387011c12a3587abf5fe88949dfe3e1)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 1 >::operator();
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_80a5736dd5545dc98a8d000511145b67)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 1 >::coeffRef;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_fce283d0f3fb5d1e88ea1c2749687a8d)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 1 >::operator[];
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_0db3dcfc359e5503a32f8c8a47013022)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 1 >::operator();
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_02a9fcc56ab7535da04a1fb42e569a19)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 1 >::x;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_64a547332d7a5adba1ab70689cf6bd47)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 1 >::y;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_28f64d71306d569db974c8b4380cf352)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 1 >::z;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_f2588838be055576adaf601e76594614)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 0 > > > class_7090c65e5dfe5aaf861b16a8609eb84d("_DenseCoeffsBase_7090c65e5dfe5aaf861b16a8609eb84d", "", boost::python::no_init);
    class_7090c65e5dfe5aaf861b16a8609eb84d.def("coeff_ref", method_pointer_63dde57164a65c89a32ebafe13bfe856, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7090c65e5dfe5aaf861b16a8609eb84d.def("coeff_ref", autowig::method_decorator_63dde57164a65c89a32ebafe13bfe856);
    class_7090c65e5dfe5aaf861b16a8609eb84d.def("coeff_ref_by_outer_inner", method_pointer_f0678b34e35b52be8637d26218e79f4c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7090c65e5dfe5aaf861b16a8609eb84d.def("coeff_ref_by_outer_inner", autowig::method_decorator_f0678b34e35b52be8637d26218e79f4c);
    class_7090c65e5dfe5aaf861b16a8609eb84d.def("__call__", method_pointer_0387011c12a3587abf5fe88949dfe3e1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7090c65e5dfe5aaf861b16a8609eb84d.def("__call__", autowig::method_decorator_0387011c12a3587abf5fe88949dfe3e1);
    class_7090c65e5dfe5aaf861b16a8609eb84d.def("coeff_ref", method_pointer_80a5736dd5545dc98a8d000511145b67, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7090c65e5dfe5aaf861b16a8609eb84d.def("coeff_ref", autowig::method_decorator_80a5736dd5545dc98a8d000511145b67);
    class_7090c65e5dfe5aaf861b16a8609eb84d.def("__getitem__", method_pointer_fce283d0f3fb5d1e88ea1c2749687a8d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7090c65e5dfe5aaf861b16a8609eb84d.def("__getitem__", autowig::method_decorator_fce283d0f3fb5d1e88ea1c2749687a8d);
    class_7090c65e5dfe5aaf861b16a8609eb84d.def("__call__", method_pointer_0db3dcfc359e5503a32f8c8a47013022, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7090c65e5dfe5aaf861b16a8609eb84d.def("__call__", autowig::method_decorator_0db3dcfc359e5503a32f8c8a47013022);
    class_7090c65e5dfe5aaf861b16a8609eb84d.def("x", method_pointer_02a9fcc56ab7535da04a1fb42e569a19, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7090c65e5dfe5aaf861b16a8609eb84d.def("x", autowig::method_decorator_02a9fcc56ab7535da04a1fb42e569a19);
    class_7090c65e5dfe5aaf861b16a8609eb84d.def("y", method_pointer_64a547332d7a5adba1ab70689cf6bd47, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7090c65e5dfe5aaf861b16a8609eb84d.def("y", autowig::method_decorator_64a547332d7a5adba1ab70689cf6bd47);
    class_7090c65e5dfe5aaf861b16a8609eb84d.def("z", method_pointer_28f64d71306d569db974c8b4380cf352, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7090c65e5dfe5aaf861b16a8609eb84d.def("z", autowig::method_decorator_28f64d71306d569db974c8b4380cf352);
    class_7090c65e5dfe5aaf861b16a8609eb84d.def("w", method_pointer_f2588838be055576adaf601e76594614, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7090c65e5dfe5aaf861b16a8609eb84d.def("w", autowig::method_decorator_f2588838be055576adaf601e76594614);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 0 > > >();
    }

}