#include "_ieigen.h"


namespace autowig
{
    void method_decorator_f7731cd65755588296885ee80e46c61a(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >  & param_out)     { instance.base() = param_out; }
    void method_decorator_631a0215c88d5b17a42351138dfc939e(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_b907a7a763c65bbcb7ef6919bb40b77b(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, const float  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_11c6e8cfe4745366bb744ff5a8460f57(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, float  const & param_in_1, class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  & param_out)     { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_ccf3fe38e2d252a8aa764d6e2415e25f(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, long int  param_in_1, float  const & param_in_2, class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  & param_out)     { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_6c0d67beb77457d2a139bd95a94b3568(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  & param_out)     { instance.setZero(param_in_0) = param_out; }
    void method_decorator_073c08dc053a5eaa820a6e3186899831(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  & param_out)     { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_9bebbc4295df5a80a1eba7c95b9e72d2(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  & param_out)     { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_382f46799a4c5357868da14134500358(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  & param_out)     { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_b50e386ef0d954fe9d448ccc6edecfbc(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  & param_out)     { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_0ba58492ac835f60870098f187969bf2(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  & param_out)     { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_e987dfc38e12503882825a057f3a1fb8()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_f7731cd65755588296885ee80e46c61a)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_ff7d1123bfeb5ffd8cf6779433fdf9bf)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_12e241cbdbb557ec8738ec9ed7645343)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_4a218445e40e55ac9479b57db2a59121)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::cols;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_889e12c16c4056d6b0f0249cbe3a23c7)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::coeff;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_59f111af17e058daafa798b862b41394)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::coeff;
    float  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_631a0215c88d5b17a42351138dfc939e)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::coeffRef;
    float  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_b907a7a763c65bbcb7ef6919bb40b77b)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::coeffRef;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_6451c17f7e3351ab996ad605179aa8de)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::coeffRef;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_63ec49ce28e156bb81cdfc3e5ebe1d01)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::coeffRef;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_96339b939bb053f6a586f08712281b67)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_e1b1566ac7855f89bb8f54ad884f199e)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_7cc3a8a4f20451afaa305ff24b8a944e)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_aac38b8bd1c454d38329a75b822279e9)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_3167f49de1a5520a9cc39b0e762c8ce3)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::conservativeResize;
    class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_11c6e8cfe4745366bb744ff5a8460f57)(long int , float  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::setConstant;
    class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_ccf3fe38e2d252a8aa764d6e2415e25f)(long int , long int , float  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::setConstant;
    class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_6c0d67beb77457d2a139bd95a94b3568)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::setZero;
    class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_073c08dc053a5eaa820a6e3186899831)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::setZero;
    class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_9bebbc4295df5a80a1eba7c95b9e72d2)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::setOnes;
    class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_382f46799a4c5357868da14134500358)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::setOnes;
    class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_b50e386ef0d954fe9d448ccc6edecfbc)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::setRandom;
    class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_0ba58492ac835f60870098f187969bf2)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::setRandom;
    void  (*method_pointer_cdf66ad1dfd65a8585c962438df7eddd)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > > >, boost::noncopyable > class_e987dfc38e12503882825a057f3a1fb8("_PlainObjectBase_e987dfc38e12503882825a057f3a1fb8", "", boost::python::no_init);
    class_e987dfc38e12503882825a057f3a1fb8.def("base", method_pointer_f7731cd65755588296885ee80e46c61a, boost::python::return_internal_reference<>(), "");
    class_e987dfc38e12503882825a057f3a1fb8.def("base", autowig::method_decorator_f7731cd65755588296885ee80e46c61a);
    class_e987dfc38e12503882825a057f3a1fb8.def("base", method_pointer_ff7d1123bfeb5ffd8cf6779433fdf9bf, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e987dfc38e12503882825a057f3a1fb8.def("rows", method_pointer_12e241cbdbb557ec8738ec9ed7645343, "");
    class_e987dfc38e12503882825a057f3a1fb8.def("cols", method_pointer_4a218445e40e55ac9479b57db2a59121, "");
    class_e987dfc38e12503882825a057f3a1fb8.def("coeff", method_pointer_889e12c16c4056d6b0f0249cbe3a23c7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e987dfc38e12503882825a057f3a1fb8.def("coeff", method_pointer_59f111af17e058daafa798b862b41394, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e987dfc38e12503882825a057f3a1fb8.def("coeff_ref", method_pointer_631a0215c88d5b17a42351138dfc939e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e987dfc38e12503882825a057f3a1fb8.def("coeff_ref", autowig::method_decorator_631a0215c88d5b17a42351138dfc939e);
    class_e987dfc38e12503882825a057f3a1fb8.def("coeff_ref", method_pointer_b907a7a763c65bbcb7ef6919bb40b77b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e987dfc38e12503882825a057f3a1fb8.def("coeff_ref", autowig::method_decorator_b907a7a763c65bbcb7ef6919bb40b77b);
    class_e987dfc38e12503882825a057f3a1fb8.def("coeff_ref", method_pointer_6451c17f7e3351ab996ad605179aa8de, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e987dfc38e12503882825a057f3a1fb8.def("coeff_ref", method_pointer_63ec49ce28e156bb81cdfc3e5ebe1d01, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e987dfc38e12503882825a057f3a1fb8.def("resize", method_pointer_96339b939bb053f6a586f08712281b67, "");
    class_e987dfc38e12503882825a057f3a1fb8.def("resize", method_pointer_e1b1566ac7855f89bb8f54ad884f199e, "");
    class_e987dfc38e12503882825a057f3a1fb8.def("resize", method_pointer_7cc3a8a4f20451afaa305ff24b8a944e, "");
    class_e987dfc38e12503882825a057f3a1fb8.def("resize", method_pointer_aac38b8bd1c454d38329a75b822279e9, "");
    class_e987dfc38e12503882825a057f3a1fb8.def("conservative_resize", method_pointer_3167f49de1a5520a9cc39b0e762c8ce3, "");
    class_e987dfc38e12503882825a057f3a1fb8.def("set_constant", method_pointer_11c6e8cfe4745366bb744ff5a8460f57, boost::python::return_internal_reference<>(), "");
    class_e987dfc38e12503882825a057f3a1fb8.def("set_constant", autowig::method_decorator_11c6e8cfe4745366bb744ff5a8460f57);
    class_e987dfc38e12503882825a057f3a1fb8.def("set_constant", method_pointer_ccf3fe38e2d252a8aa764d6e2415e25f, boost::python::return_internal_reference<>(), "");
    class_e987dfc38e12503882825a057f3a1fb8.def("set_constant", autowig::method_decorator_ccf3fe38e2d252a8aa764d6e2415e25f);
    class_e987dfc38e12503882825a057f3a1fb8.def("set_zero", method_pointer_6c0d67beb77457d2a139bd95a94b3568, boost::python::return_internal_reference<>(), "");
    class_e987dfc38e12503882825a057f3a1fb8.def("set_zero", autowig::method_decorator_6c0d67beb77457d2a139bd95a94b3568);
    class_e987dfc38e12503882825a057f3a1fb8.def("set_zero", method_pointer_073c08dc053a5eaa820a6e3186899831, boost::python::return_internal_reference<>(), "");
    class_e987dfc38e12503882825a057f3a1fb8.def("set_zero", autowig::method_decorator_073c08dc053a5eaa820a6e3186899831);
    class_e987dfc38e12503882825a057f3a1fb8.def("set_ones", method_pointer_9bebbc4295df5a80a1eba7c95b9e72d2, boost::python::return_internal_reference<>(), "");
    class_e987dfc38e12503882825a057f3a1fb8.def("set_ones", autowig::method_decorator_9bebbc4295df5a80a1eba7c95b9e72d2);
    class_e987dfc38e12503882825a057f3a1fb8.def("set_ones", method_pointer_382f46799a4c5357868da14134500358, boost::python::return_internal_reference<>(), "");
    class_e987dfc38e12503882825a057f3a1fb8.def("set_ones", autowig::method_decorator_382f46799a4c5357868da14134500358);
    class_e987dfc38e12503882825a057f3a1fb8.def("set_random", method_pointer_b50e386ef0d954fe9d448ccc6edecfbc, boost::python::return_internal_reference<>(), "");
    class_e987dfc38e12503882825a057f3a1fb8.def("set_random", autowig::method_decorator_b50e386ef0d954fe9d448ccc6edecfbc);
    class_e987dfc38e12503882825a057f3a1fb8.def("set_random", method_pointer_0ba58492ac835f60870098f187969bf2, boost::python::return_internal_reference<>(), "");
    class_e987dfc38e12503882825a057f3a1fb8.def("set_random", autowig::method_decorator_0ba58492ac835f60870098f187969bf2);
    class_e987dfc38e12503882825a057f3a1fb8.def("check_template_params", method_pointer_cdf66ad1dfd65a8585c962438df7eddd, "");
    class_e987dfc38e12503882825a057f3a1fb8.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > > > >();
    }

}