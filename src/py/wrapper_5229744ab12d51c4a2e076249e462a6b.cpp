#include "_ieigen.h"


namespace autowig
{
    void method_decorator_a429bce52b1c578eab0177ae4043c33d(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_5fadbfb4f135529eb4413b35a8538043(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)     { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_2d0a9a0f3a685b71a9a8e8665dbc7428(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)     { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_190336fa3e905288b600ad15ec5292ba(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 > & instance, long int  param_in_0, const float  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
// TODO     void method_decorator_ccaa0261eeca5c2dae42cfc9196bcfe3(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 > & instance, long int  param_in_0, const float  & param_out)     { instance.operator[](param_in_0) = param_out; }
    void method_decorator_1c229d15c0cf51d9b704f19d5f4e77d7(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 > & instance, long int  param_in_0, const float  & param_out)     { instance.operator()(param_in_0) = param_out; }
// TODO // TODO     void method_decorator_8b78f0b4da925ddbb05148aba261acde(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 > & instance, const float  & param_out)     { instance.x() = param_out; }
// TODO     void method_decorator_531796d5e7275adabd8944d86f1b1e4b(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 > & instance, const float  & param_out)     { instance.y() = param_out; }
// TODO     void method_decorator_9ca12d5bc14d57039c6d4f6a4f34a962(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 > & instance, const float  & param_out)     { instance.z() = param_out; }
// TODO     void method_decorator_597cc1b1af7e55399d3658387c9b0774(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 > & instance, const float  & param_out)     { instance.w() = param_out; }
}


void wrapper_5229744ab12d51c4a2e076249e462a6b()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_a429bce52b1c578eab0177ae4043c33d)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::coeffRef;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_5fadbfb4f135529eb4413b35a8538043)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::coeffRefByOuterInner;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_2d0a9a0f3a685b71a9a8e8665dbc7428)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::operator();
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_190336fa3e905288b600ad15ec5292ba)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::coeffRef;
// TODO // TODO     float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_ccaa0261eeca5c2dae42cfc9196bcfe3)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::operator[];
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_1c229d15c0cf51d9b704f19d5f4e77d7)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::operator();
// TODO     float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_8b78f0b4da925ddbb05148aba261acde)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::x;
// TODO     float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_531796d5e7275adabd8944d86f1b1e4b)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::y;
// TODO     float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_9ca12d5bc14d57039c6d4f6a4f34a962)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::z;
// TODO     float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_597cc1b1af7e55399d3658387c9b0774)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 0 > > > class_5229744ab12d51c4a2e076249e462a6b("_DenseCoeffsBase_5229744ab12d51c4a2e076249e462a6b", "", boost::python::no_init);
    class_5229744ab12d51c4a2e076249e462a6b.def("coeff_ref", method_pointer_a429bce52b1c578eab0177ae4043c33d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5229744ab12d51c4a2e076249e462a6b.def("coeff_ref", autowig::method_decorator_a429bce52b1c578eab0177ae4043c33d);
    class_5229744ab12d51c4a2e076249e462a6b.def("coeff_ref_by_outer_inner", method_pointer_5fadbfb4f135529eb4413b35a8538043, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5229744ab12d51c4a2e076249e462a6b.def("coeff_ref_by_outer_inner", autowig::method_decorator_5fadbfb4f135529eb4413b35a8538043);
    class_5229744ab12d51c4a2e076249e462a6b.def("__call__", method_pointer_2d0a9a0f3a685b71a9a8e8665dbc7428, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5229744ab12d51c4a2e076249e462a6b.def("__call__", autowig::method_decorator_2d0a9a0f3a685b71a9a8e8665dbc7428);
    class_5229744ab12d51c4a2e076249e462a6b.def("coeff_ref", method_pointer_190336fa3e905288b600ad15ec5292ba, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5229744ab12d51c4a2e076249e462a6b.def("coeff_ref", autowig::method_decorator_190336fa3e905288b600ad15ec5292ba);
// TODO // TODO     class_5229744ab12d51c4a2e076249e462a6b.def("__getitem__", method_pointer_ccaa0261eeca5c2dae42cfc9196bcfe3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
// TODO // TODO     class_5229744ab12d51c4a2e076249e462a6b.def("__getitem__", autowig::method_decorator_ccaa0261eeca5c2dae42cfc9196bcfe3);
    class_5229744ab12d51c4a2e076249e462a6b.def("__call__", method_pointer_1c229d15c0cf51d9b704f19d5f4e77d7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5229744ab12d51c4a2e076249e462a6b.def("__call__", autowig::method_decorator_1c229d15c0cf51d9b704f19d5f4e77d7);
// TODO     class_5229744ab12d51c4a2e076249e462a6b.def("x", method_pointer_8b78f0b4da925ddbb05148aba261acde, boost::python::return_value_policy< boost::python::return_by_value >(), "");
// TODO     class_5229744ab12d51c4a2e076249e462a6b.def("x", autowig::method_decorator_8b78f0b4da925ddbb05148aba261acde);
// TODO     class_5229744ab12d51c4a2e076249e462a6b.def("y", method_pointer_531796d5e7275adabd8944d86f1b1e4b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
// TODO     class_5229744ab12d51c4a2e076249e462a6b.def("y", autowig::method_decorator_531796d5e7275adabd8944d86f1b1e4b);
// TODO     class_5229744ab12d51c4a2e076249e462a6b.def("z", method_pointer_9ca12d5bc14d57039c6d4f6a4f34a962, boost::python::return_value_policy< boost::python::return_by_value >(), "");
// TODO     class_5229744ab12d51c4a2e076249e462a6b.def("z", autowig::method_decorator_9ca12d5bc14d57039c6d4f6a4f34a962);
// TODO     class_5229744ab12d51c4a2e076249e462a6b.def("w", method_pointer_597cc1b1af7e55399d3658387c9b0774, boost::python::return_value_policy< boost::python::return_by_value >(), "");
// TODO     class_5229744ab12d51c4a2e076249e462a6b.def("w", autowig::method_decorator_597cc1b1af7e55399d3658387c9b0774);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 0 > > >();
    }

}