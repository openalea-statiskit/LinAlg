#include "_ieigen.h"


namespace autowig
{
    void method_decorator_7846a981b32159fdba73c1a851169c53(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_3d06d90dfc0752629a477661761e3975(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)
    { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_118c59a323cb5977b75ab49286749095(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)
    { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_b64bb9ae821a5457b0eef6a46a51f268(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 1 > & instance, long int  param_in_0, const int  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_6b75d163467154bb95665f945d4f9a53(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 1 > & instance, long int  param_in_0, const int  & param_out)
    { instance.operator[](param_in_0) = param_out; }
    void method_decorator_0603b12004a55a5d8a0d8951ad57b155(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 1 > & instance, long int  param_in_0, const int  & param_out)
    { instance.operator()(param_in_0) = param_out; }
    void method_decorator_47313d2dcc1c532baaec180cde997b20(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 1 > & instance, const int  & param_out)
    { instance.x() = param_out; }
    void method_decorator_fe471a12a85a5d5298639a674f67862d(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 1 > & instance, const int  & param_out)
    { instance.y() = param_out; }
    void method_decorator_0feaed342a5e521ab7fc94b3f27d7277(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 1 > & instance, const int  & param_out)
    { instance.z() = param_out; }
    void method_decorator_2c58cd3ea0a75b62b8d2c7b3c2852b43(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 1 > & instance, const int  & param_out)
    { instance.w() = param_out; }
}


void wrapper_66222c6c60b651feadfacbed9d636dfe()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_7846a981b32159fdba73c1a851169c53)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 1 >::coeffRef;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_3d06d90dfc0752629a477661761e3975)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 1 >::coeffRefByOuterInner;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_118c59a323cb5977b75ab49286749095)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 1 >::operator();
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_b64bb9ae821a5457b0eef6a46a51f268)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 1 >::coeffRef;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_6b75d163467154bb95665f945d4f9a53)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 1 >::operator[];
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_0603b12004a55a5d8a0d8951ad57b155)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 1 >::operator();
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_47313d2dcc1c532baaec180cde997b20)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 1 >::x;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_fe471a12a85a5d5298639a674f67862d)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 1 >::y;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_0feaed342a5e521ab7fc94b3f27d7277)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 1 >::z;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_2c58cd3ea0a75b62b8d2c7b3c2852b43)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 0 > > > class_66222c6c60b651feadfacbed9d636dfe("_DenseCoeffsBase_66222c6c60b651feadfacbed9d636dfe", "", boost::python::no_init);
    class_66222c6c60b651feadfacbed9d636dfe.def("coeff_ref", method_pointer_7846a981b32159fdba73c1a851169c53, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_66222c6c60b651feadfacbed9d636dfe.def("coeff_ref", autowig::method_decorator_7846a981b32159fdba73c1a851169c53);
    class_66222c6c60b651feadfacbed9d636dfe.def("coeff_ref_by_outer_inner", method_pointer_3d06d90dfc0752629a477661761e3975, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_66222c6c60b651feadfacbed9d636dfe.def("coeff_ref_by_outer_inner", autowig::method_decorator_3d06d90dfc0752629a477661761e3975);
    class_66222c6c60b651feadfacbed9d636dfe.def("__call__", method_pointer_118c59a323cb5977b75ab49286749095, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_66222c6c60b651feadfacbed9d636dfe.def("__call__", autowig::method_decorator_118c59a323cb5977b75ab49286749095);
    class_66222c6c60b651feadfacbed9d636dfe.def("coeff_ref", method_pointer_b64bb9ae821a5457b0eef6a46a51f268, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_66222c6c60b651feadfacbed9d636dfe.def("coeff_ref", autowig::method_decorator_b64bb9ae821a5457b0eef6a46a51f268);
    class_66222c6c60b651feadfacbed9d636dfe.def("__getitem__", method_pointer_6b75d163467154bb95665f945d4f9a53, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_66222c6c60b651feadfacbed9d636dfe.def("__getitem__", autowig::method_decorator_6b75d163467154bb95665f945d4f9a53);
    class_66222c6c60b651feadfacbed9d636dfe.def("__call__", method_pointer_0603b12004a55a5d8a0d8951ad57b155, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_66222c6c60b651feadfacbed9d636dfe.def("__call__", autowig::method_decorator_0603b12004a55a5d8a0d8951ad57b155);
    class_66222c6c60b651feadfacbed9d636dfe.def("x", method_pointer_47313d2dcc1c532baaec180cde997b20, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_66222c6c60b651feadfacbed9d636dfe.def("x", autowig::method_decorator_47313d2dcc1c532baaec180cde997b20);
    class_66222c6c60b651feadfacbed9d636dfe.def("y", method_pointer_fe471a12a85a5d5298639a674f67862d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_66222c6c60b651feadfacbed9d636dfe.def("y", autowig::method_decorator_fe471a12a85a5d5298639a674f67862d);
    class_66222c6c60b651feadfacbed9d636dfe.def("z", method_pointer_0feaed342a5e521ab7fc94b3f27d7277, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_66222c6c60b651feadfacbed9d636dfe.def("z", autowig::method_decorator_0feaed342a5e521ab7fc94b3f27d7277);
    class_66222c6c60b651feadfacbed9d636dfe.def("w", method_pointer_2c58cd3ea0a75b62b8d2c7b3c2852b43, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_66222c6c60b651feadfacbed9d636dfe.def("w", autowig::method_decorator_2c58cd3ea0a75b62b8d2c7b3c2852b43);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 0 > > >();
    }

}