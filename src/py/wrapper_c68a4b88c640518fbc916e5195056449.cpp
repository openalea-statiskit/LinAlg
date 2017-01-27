#include "_ieigen.h"


namespace autowig
{
    void method_decorator_6a162d6d845d5830b99c3ceef939ecb7(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >  & param_out)     { instance.base() = param_out; }
    void method_decorator_57b90c09fb405ed3943310321424e8f7(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_25f64f2a46025a91a7451c88246f43cd(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
// TODO     void method_decorator_e3802d59ad8f5f1d8c88f8126b18753d(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, struct ::std::complex< double >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  & param_out)     { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_7a6d39030efc52958726084ebe64d477(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  & param_out)     { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
// TODO // TODO     void method_decorator_4c5d277c3ca0559488504fdf59d5ec5c(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  & param_out)     { instance.setZero(param_in_0) = param_out; }
    void method_decorator_99594eeec2a75a4d87c5adbaa2aceeab(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  & param_out)     { instance.setZero(param_in_0, param_in_1) = param_out; }
// TODO // TODO     void method_decorator_14e42306d382567fbaa7d1949e829848(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  & param_out)     { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_6c7eeb5729215ea58aceb69816fd7caf(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  & param_out)     { instance.setOnes(param_in_0, param_in_1) = param_out; }
// TODO     void method_decorator_0b49adfbc2905ecf98a8616d2d6a2de3(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  & param_out)     { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_4d2958eab69f5ccfa9a1c4defacb6ba6(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  & param_out)     { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_c68a4b88c640518fbc916e5195056449()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_6a162d6d845d5830b99c3ceef939ecb7)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_03a92f259cec551587cf1459e797631e)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_94439b36ffaa50fcb2529448938c04d8)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_f3df55f5e19756b4a391eb6bb92eb879)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::cols;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_6a372cc10fa555f5be88895d8ed31919)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::coeff;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_1ef5e4daf6fe5b51b61ec28d768d7c37)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::coeff;
    struct ::std::complex< double >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_57b90c09fb405ed3943310321424e8f7)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::coeffRef;
    struct ::std::complex< double >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_25f64f2a46025a91a7451c88246f43cd)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::coeffRef;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_e42bcb65f35a50bdaa1666304b71efd8)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::coeffRef;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_cfcfbc443a37504cbf71994d9c15cb80)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::coeffRef;
    struct ::std::complex< double >  const * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_9381db8ebb4255469721bc2574d9193c)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::data;
    struct ::std::complex< double >  * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_f0749ae6902e5855a9db0a3bbf06b9b8)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::data;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_ce44b83b586e550d89b4e5c38363fa25)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_b5005704dcc957ed8c581a79cde82a9b)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_a608cd32e6095a8a84b30ecc853cef71)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::resize;
// TODO     class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_e3802d59ad8f5f1d8c88f8126b18753d)(long int , struct ::std::complex< double >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_7a6d39030efc52958726084ebe64d477)(long int , long int , struct ::std::complex< double >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::setConstant;
// TODO     class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_4c5d277c3ca0559488504fdf59d5ec5c)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_99594eeec2a75a4d87c5adbaa2aceeab)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::setZero;
// TODO     class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_14e42306d382567fbaa7d1949e829848)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_6c7eeb5729215ea58aceb69816fd7caf)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::setOnes;
// TODO     class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_0b49adfbc2905ecf98a8616d2d6a2de3)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::setRandom;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_4d2958eab69f5ccfa9a1c4defacb6ba6)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::setRandom;
    void  (*method_pointer_8b37d43796c555daa315df1242729f03)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > >, boost::noncopyable > class_c68a4b88c640518fbc916e5195056449("_PlainObjectBase_c68a4b88c640518fbc916e5195056449", "", boost::python::no_init);
    class_c68a4b88c640518fbc916e5195056449.def("base", method_pointer_6a162d6d845d5830b99c3ceef939ecb7, boost::python::return_internal_reference<>(), "");
    class_c68a4b88c640518fbc916e5195056449.def("base", autowig::method_decorator_6a162d6d845d5830b99c3ceef939ecb7);
    class_c68a4b88c640518fbc916e5195056449.def("base", method_pointer_03a92f259cec551587cf1459e797631e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c68a4b88c640518fbc916e5195056449.def("rows", method_pointer_94439b36ffaa50fcb2529448938c04d8, "");
    class_c68a4b88c640518fbc916e5195056449.def("cols", method_pointer_f3df55f5e19756b4a391eb6bb92eb879, "");
    class_c68a4b88c640518fbc916e5195056449.def("coeff", method_pointer_6a372cc10fa555f5be88895d8ed31919, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c68a4b88c640518fbc916e5195056449.def("coeff", method_pointer_1ef5e4daf6fe5b51b61ec28d768d7c37, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c68a4b88c640518fbc916e5195056449.def("coeff_ref", method_pointer_57b90c09fb405ed3943310321424e8f7, boost::python::return_internal_reference<>(), "");
    class_c68a4b88c640518fbc916e5195056449.def("coeff_ref", autowig::method_decorator_57b90c09fb405ed3943310321424e8f7);
    class_c68a4b88c640518fbc916e5195056449.def("coeff_ref", method_pointer_25f64f2a46025a91a7451c88246f43cd, boost::python::return_internal_reference<>(), "");
    class_c68a4b88c640518fbc916e5195056449.def("coeff_ref", autowig::method_decorator_25f64f2a46025a91a7451c88246f43cd);
    class_c68a4b88c640518fbc916e5195056449.def("coeff_ref", method_pointer_e42bcb65f35a50bdaa1666304b71efd8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c68a4b88c640518fbc916e5195056449.def("coeff_ref", method_pointer_cfcfbc443a37504cbf71994d9c15cb80, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c68a4b88c640518fbc916e5195056449.def("data", method_pointer_9381db8ebb4255469721bc2574d9193c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_c68a4b88c640518fbc916e5195056449.def("data", method_pointer_f0749ae6902e5855a9db0a3bbf06b9b8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_c68a4b88c640518fbc916e5195056449.def("resize", method_pointer_ce44b83b586e550d89b4e5c38363fa25, "");
    class_c68a4b88c640518fbc916e5195056449.def("resize", method_pointer_b5005704dcc957ed8c581a79cde82a9b, "");
    class_c68a4b88c640518fbc916e5195056449.def("resize", method_pointer_a608cd32e6095a8a84b30ecc853cef71, "");
// TODO     class_c68a4b88c640518fbc916e5195056449.def("set_constant", method_pointer_e3802d59ad8f5f1d8c88f8126b18753d, boost::python::return_internal_reference<>(), "");
// TODO // TODO     class_c68a4b88c640518fbc916e5195056449.def("set_constant", autowig::method_decorator_e3802d59ad8f5f1d8c88f8126b18753d);
    class_c68a4b88c640518fbc916e5195056449.def("set_constant", method_pointer_7a6d39030efc52958726084ebe64d477, boost::python::return_internal_reference<>(), "");
    class_c68a4b88c640518fbc916e5195056449.def("set_constant", autowig::method_decorator_7a6d39030efc52958726084ebe64d477);
// TODO     class_c68a4b88c640518fbc916e5195056449.def("set_zero", method_pointer_4c5d277c3ca0559488504fdf59d5ec5c, boost::python::return_internal_reference<>(), "");
// TODO // TODO     class_c68a4b88c640518fbc916e5195056449.def("set_zero", autowig::method_decorator_4c5d277c3ca0559488504fdf59d5ec5c);
    class_c68a4b88c640518fbc916e5195056449.def("set_zero", method_pointer_99594eeec2a75a4d87c5adbaa2aceeab, boost::python::return_internal_reference<>(), "");
    class_c68a4b88c640518fbc916e5195056449.def("set_zero", autowig::method_decorator_99594eeec2a75a4d87c5adbaa2aceeab);
// TODO     class_c68a4b88c640518fbc916e5195056449.def("set_ones", method_pointer_14e42306d382567fbaa7d1949e829848, boost::python::return_internal_reference<>(), "");
// TODO     class_c68a4b88c640518fbc916e5195056449.def("set_ones", autowig::method_decorator_14e42306d382567fbaa7d1949e829848);
    class_c68a4b88c640518fbc916e5195056449.def("set_ones", method_pointer_6c7eeb5729215ea58aceb69816fd7caf, boost::python::return_internal_reference<>(), "");
    class_c68a4b88c640518fbc916e5195056449.def("set_ones", autowig::method_decorator_6c7eeb5729215ea58aceb69816fd7caf);
// TODO     class_c68a4b88c640518fbc916e5195056449.def("set_random", method_pointer_0b49adfbc2905ecf98a8616d2d6a2de3, boost::python::return_internal_reference<>(), "");
// TODO     class_c68a4b88c640518fbc916e5195056449.def("set_random", autowig::method_decorator_0b49adfbc2905ecf98a8616d2d6a2de3);
    class_c68a4b88c640518fbc916e5195056449.def("set_random", method_pointer_4d2958eab69f5ccfa9a1c4defacb6ba6, boost::python::return_internal_reference<>(), "");
    class_c68a4b88c640518fbc916e5195056449.def("set_random", autowig::method_decorator_4d2958eab69f5ccfa9a1c4defacb6ba6);
    class_c68a4b88c640518fbc916e5195056449.def("check_template_params", method_pointer_8b37d43796c555daa315df1242729f03, "");
    class_c68a4b88c640518fbc916e5195056449.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > > >();
    }

}