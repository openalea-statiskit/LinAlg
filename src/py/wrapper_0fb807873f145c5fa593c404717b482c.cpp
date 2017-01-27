#include "_ieigen.h"


namespace autowig
{
    void method_decorator_e9eeb9191f5f5ba38b0750ef078b98ea(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > > & instance, int  const & param_in_0, class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  & param_out)     { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_6e483e067a7358b586f566497afe4634(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, int  const & param_in_1, int  const & param_in_2, class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_04f00647e70f5156b6ca1d32c78bb6b4(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > > & instance, int  const & param_in_0, int  const & param_in_1, class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_007ce1524b95592194e3715f19975ed8(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > > & instance, class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  & param_out)     { instance.setZero() = param_out; }
    void method_decorator_2bdc7d072d7450e7809e90580e61188b(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > > & instance, class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  & param_out)     { instance.setOnes() = param_out; }
    void method_decorator_dd45212d5ba158a9b50abfe70211a3ca(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > > & instance, class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  & param_out)     { instance.setRandom() = param_out; }
    void method_decorator_c5ceeb13f64b5bd6a523c29a6ce376fa(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > > & instance, int  const & param_in_0, class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  & param_out)     { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_0fb807873f145c5fa593c404717b482c()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_c6d1d97b3fdd5d02b401742fcad706db)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_836e91fc20fb523e840f4d18815d5b5f)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_b2f895fd30105e638cfc2e132db147de)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_7f4fc0670bdc5446bcfdc7ab88471156)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_a1c3b8c2610457f4888d9c8b7f67ab0e)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_0b269dc50a4f529ca7b182b8d8be1ecd)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_f270175350ab52d8806fae1f1def0369)(int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::fill;
    class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_e9eeb9191f5f5ba38b0750ef078b98ea)(int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::setConstant;
    class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_6e483e067a7358b586f566497afe4634)(long int , int  const &, int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::setLinSpaced;
    class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_04f00647e70f5156b6ca1d32c78bb6b4)(int  const &, int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::setLinSpaced;
    class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_007ce1524b95592194e3715f19975ed8)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::setZero;
    class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_2bdc7d072d7450e7809e90580e61188b)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::setOnes;
    class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_dd45212d5ba158a9b50abfe70211a3ca)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_76193c2248c851cbabeb55585e983abc)(int  const &, int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_6eee205668cd5e4dbe1b23a521dd7cd4)(int  const &, int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_7490f34831595774b62c8558fac11ff4)(int  const &, int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_3cad9129a06a5f7aa24108b64bf42466)(int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_0043a6a04d0e53e4afba4e9c6abf8a23)(int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_d8d9a497a9935d96a44722a3ab532123)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_cc6b33c37bb55658b911410d4fc5430c)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::allFinite;
    class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_c5ceeb13f64b5bd6a523c29a6ce376fa)(int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::operator*=;
    class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_b47f558ac99b52f58d658eba2ac51f3b)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::eval;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_2761bb8cbb1c52f3bd1069a1052118a4)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::sum;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_b4154aa97cb5572b87b77d794df9407f)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::mean;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_cc50533df7985f309e32ce690b05fdf6)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::trace;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_abaa840897da5bd182fe738a39aeb4ab)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::prod;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_775f91e71e0e5807b772527b7fca4c7a)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::minCoeff;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_69b1e4bc4b975446a258375435f08c84)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::maxCoeff;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_a74e95cb6e9f52c7bfa1c116b66eb7c2)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_607f9769aea65deb9847b1377511347e)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_393b91ac68a051d0b1663316bffb645d)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_9b17f31e891753ed8968ddc6b75b59d7)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 3 > > > class_0fb807873f145c5fa593c404717b482c("_DenseBase_0fb807873f145c5fa593c404717b482c", "", boost::python::no_init);
    class_0fb807873f145c5fa593c404717b482c.def("non_zeros", method_pointer_c6d1d97b3fdd5d02b401742fcad706db, "");
    class_0fb807873f145c5fa593c404717b482c.def("outer_size", method_pointer_836e91fc20fb523e840f4d18815d5b5f, "");
    class_0fb807873f145c5fa593c404717b482c.def("inner_size", method_pointer_b2f895fd30105e638cfc2e132db147de, "");
    class_0fb807873f145c5fa593c404717b482c.def("resize", method_pointer_7f4fc0670bdc5446bcfdc7ab88471156, "");
    class_0fb807873f145c5fa593c404717b482c.def("resize", method_pointer_a1c3b8c2610457f4888d9c8b7f67ab0e, "");
    class_0fb807873f145c5fa593c404717b482c.def("transpose_in_place", method_pointer_0b269dc50a4f529ca7b182b8d8be1ecd, "");
    class_0fb807873f145c5fa593c404717b482c.def("fill", method_pointer_f270175350ab52d8806fae1f1def0369, "");
    class_0fb807873f145c5fa593c404717b482c.def("set_constant", method_pointer_e9eeb9191f5f5ba38b0750ef078b98ea, boost::python::return_internal_reference<>(), "");
    class_0fb807873f145c5fa593c404717b482c.def("set_constant", autowig::method_decorator_e9eeb9191f5f5ba38b0750ef078b98ea);
    class_0fb807873f145c5fa593c404717b482c.def("set_lin_spaced", method_pointer_6e483e067a7358b586f566497afe4634, boost::python::return_internal_reference<>(), "");
    class_0fb807873f145c5fa593c404717b482c.def("set_lin_spaced", autowig::method_decorator_6e483e067a7358b586f566497afe4634);
    class_0fb807873f145c5fa593c404717b482c.def("set_lin_spaced", method_pointer_04f00647e70f5156b6ca1d32c78bb6b4, boost::python::return_internal_reference<>(), "");
    class_0fb807873f145c5fa593c404717b482c.def("set_lin_spaced", autowig::method_decorator_04f00647e70f5156b6ca1d32c78bb6b4);
    class_0fb807873f145c5fa593c404717b482c.def("set_zero", method_pointer_007ce1524b95592194e3715f19975ed8, boost::python::return_internal_reference<>(), "");
    class_0fb807873f145c5fa593c404717b482c.def("set_zero", autowig::method_decorator_007ce1524b95592194e3715f19975ed8);
    class_0fb807873f145c5fa593c404717b482c.def("set_ones", method_pointer_2bdc7d072d7450e7809e90580e61188b, boost::python::return_internal_reference<>(), "");
    class_0fb807873f145c5fa593c404717b482c.def("set_ones", autowig::method_decorator_2bdc7d072d7450e7809e90580e61188b);
    class_0fb807873f145c5fa593c404717b482c.def("set_random", method_pointer_dd45212d5ba158a9b50abfe70211a3ca, boost::python::return_internal_reference<>(), "");
    class_0fb807873f145c5fa593c404717b482c.def("set_random", autowig::method_decorator_dd45212d5ba158a9b50abfe70211a3ca);
    class_0fb807873f145c5fa593c404717b482c.def("is_much_smaller_than", method_pointer_76193c2248c851cbabeb55585e983abc, "");
    class_0fb807873f145c5fa593c404717b482c.def("is_approx_to_constant", method_pointer_6eee205668cd5e4dbe1b23a521dd7cd4, "");
    class_0fb807873f145c5fa593c404717b482c.def("is_constant", method_pointer_7490f34831595774b62c8558fac11ff4, "");
    class_0fb807873f145c5fa593c404717b482c.def("is_zero", method_pointer_3cad9129a06a5f7aa24108b64bf42466, "");
    class_0fb807873f145c5fa593c404717b482c.def("is_ones", method_pointer_0043a6a04d0e53e4afba4e9c6abf8a23, "");
    class_0fb807873f145c5fa593c404717b482c.def("has_na_n", method_pointer_d8d9a497a9935d96a44722a3ab532123, "");
    class_0fb807873f145c5fa593c404717b482c.def("all_finite", method_pointer_cc6b33c37bb55658b911410d4fc5430c, "");
    class_0fb807873f145c5fa593c404717b482c.def("__imul__", method_pointer_c5ceeb13f64b5bd6a523c29a6ce376fa, boost::python::return_internal_reference<>(), "");
    class_0fb807873f145c5fa593c404717b482c.def("__imul__", autowig::method_decorator_c5ceeb13f64b5bd6a523c29a6ce376fa);
    class_0fb807873f145c5fa593c404717b482c.def("eval", method_pointer_b47f558ac99b52f58d658eba2ac51f3b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0fb807873f145c5fa593c404717b482c.def("sum", method_pointer_2761bb8cbb1c52f3bd1069a1052118a4, "");
    class_0fb807873f145c5fa593c404717b482c.def("mean", method_pointer_b4154aa97cb5572b87b77d794df9407f, "");
    class_0fb807873f145c5fa593c404717b482c.def("trace", method_pointer_cc50533df7985f309e32ce690b05fdf6, "");
    class_0fb807873f145c5fa593c404717b482c.def("prod", method_pointer_abaa840897da5bd182fe738a39aeb4ab, "");
    class_0fb807873f145c5fa593c404717b482c.def("min_coeff", method_pointer_775f91e71e0e5807b772527b7fca4c7a, "");
    class_0fb807873f145c5fa593c404717b482c.def("max_coeff", method_pointer_69b1e4bc4b975446a258375435f08c84, "");
    class_0fb807873f145c5fa593c404717b482c.def("all", method_pointer_a74e95cb6e9f52c7bfa1c116b66eb7c2, "");
    class_0fb807873f145c5fa593c404717b482c.def("any", method_pointer_607f9769aea65deb9847b1377511347e, "");
    class_0fb807873f145c5fa593c404717b482c.def("count", method_pointer_393b91ac68a051d0b1663316bffb645d, "");
    class_0fb807873f145c5fa593c404717b482c.def("reverse_in_place", method_pointer_9b17f31e891753ed8968ddc6b75b59d7, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 3 > > >();
    }

}