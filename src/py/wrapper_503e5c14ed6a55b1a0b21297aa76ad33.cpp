#include "_ieigen.h"


namespace autowig
{
    void method_decorator_832bba1444ab5301942e1594d2dd1c0a(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >  & param_out)     { instance.base() = param_out; }
    void method_decorator_002cc4678b6756d0a9cff638d5e93517(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_682f55b40acf55c988dab5f1b42d5439(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, const int  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
// TODO     void method_decorator_395965b37efc5210b166658612422af0(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, int  const & param_in_1, class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  & param_out)     { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_f1de4a952ed85dde8010010578ff057d(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, long int  param_in_1, int  const & param_in_2, class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  & param_out)     { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
// TODO // TODO     void method_decorator_4c40b8d821cf5e1fa91d62ace57c9e54(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  & param_out)     { instance.setZero(param_in_0) = param_out; }
    void method_decorator_c62344b7186a59afa2e5b7d9c4575057(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  & param_out)     { instance.setZero(param_in_0, param_in_1) = param_out; }
// TODO // TODO     void method_decorator_3b2d835404785b6a99a6d44e1b2a5dbe(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  & param_out)     { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_c24c4061ede657bdbce3fed330bd1368(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  & param_out)     { instance.setOnes(param_in_0, param_in_1) = param_out; }
// TODO     void method_decorator_95fdb34e2e1c5256a5326f99f02e39d7(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  & param_out)     { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_ee56631ce3be572998a7ffc9b6543682(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  & param_out)     { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_503e5c14ed6a55b1a0b21297aa76ad33()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_832bba1444ab5301942e1594d2dd1c0a)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_642a7450eb9a5bc09ae8f07547e7ca7e)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_bd4e64e1c2d658039b48296685377242)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_047177418f115e848a9febf1972ee5a9)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::cols;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_28ac8514cd25590f8b0fca96ef021500)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::coeff;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_a0d1635fc60a51ffa8b940eeaf3f3333)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::coeff;
    int  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_002cc4678b6756d0a9cff638d5e93517)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::coeffRef;
    int  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_682f55b40acf55c988dab5f1b42d5439)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::coeffRef;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_2c4f618ea4605cc4a70dd905a6ed1c23)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::coeffRef;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_0b86ea81b7bf5590a65d9eca4fa7ffee)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::coeffRef;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_f8b9d6e81a375421a92f643d6055cbfc)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_1a2b6330a24257aca7db00f182a35e9c)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_bc40f955c4305c2bad89326b9226963e)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::resize;
// TODO     class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_395965b37efc5210b166658612422af0)(long int , int  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::setConstant;
    class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_f1de4a952ed85dde8010010578ff057d)(long int , long int , int  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::setConstant;
// TODO     class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_4c40b8d821cf5e1fa91d62ace57c9e54)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::setZero;
    class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_c62344b7186a59afa2e5b7d9c4575057)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::setZero;
// TODO     class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_3b2d835404785b6a99a6d44e1b2a5dbe)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::setOnes;
    class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_c24c4061ede657bdbce3fed330bd1368)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::setOnes;
// TODO     class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_95fdb34e2e1c5256a5326f99f02e39d7)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::setRandom;
    class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_ee56631ce3be572998a7ffc9b6543682)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::setRandom;
    void  (*method_pointer_7ccf9614a14c5283ba6a06c9343bc7da)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > > >, boost::noncopyable > class_503e5c14ed6a55b1a0b21297aa76ad33("_PlainObjectBase_503e5c14ed6a55b1a0b21297aa76ad33", "", boost::python::no_init);
    class_503e5c14ed6a55b1a0b21297aa76ad33.def("base", method_pointer_832bba1444ab5301942e1594d2dd1c0a, boost::python::return_internal_reference<>(), "");
    class_503e5c14ed6a55b1a0b21297aa76ad33.def("base", autowig::method_decorator_832bba1444ab5301942e1594d2dd1c0a);
    class_503e5c14ed6a55b1a0b21297aa76ad33.def("base", method_pointer_642a7450eb9a5bc09ae8f07547e7ca7e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_503e5c14ed6a55b1a0b21297aa76ad33.def("rows", method_pointer_bd4e64e1c2d658039b48296685377242, "");
    class_503e5c14ed6a55b1a0b21297aa76ad33.def("cols", method_pointer_047177418f115e848a9febf1972ee5a9, "");
    class_503e5c14ed6a55b1a0b21297aa76ad33.def("coeff", method_pointer_28ac8514cd25590f8b0fca96ef021500, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_503e5c14ed6a55b1a0b21297aa76ad33.def("coeff", method_pointer_a0d1635fc60a51ffa8b940eeaf3f3333, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_503e5c14ed6a55b1a0b21297aa76ad33.def("coeff_ref", method_pointer_002cc4678b6756d0a9cff638d5e93517, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_503e5c14ed6a55b1a0b21297aa76ad33.def("coeff_ref", autowig::method_decorator_002cc4678b6756d0a9cff638d5e93517);
    class_503e5c14ed6a55b1a0b21297aa76ad33.def("coeff_ref", method_pointer_682f55b40acf55c988dab5f1b42d5439, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_503e5c14ed6a55b1a0b21297aa76ad33.def("coeff_ref", autowig::method_decorator_682f55b40acf55c988dab5f1b42d5439);
    class_503e5c14ed6a55b1a0b21297aa76ad33.def("coeff_ref", method_pointer_2c4f618ea4605cc4a70dd905a6ed1c23, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_503e5c14ed6a55b1a0b21297aa76ad33.def("coeff_ref", method_pointer_0b86ea81b7bf5590a65d9eca4fa7ffee, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_503e5c14ed6a55b1a0b21297aa76ad33.def("resize", method_pointer_f8b9d6e81a375421a92f643d6055cbfc, "");
    class_503e5c14ed6a55b1a0b21297aa76ad33.def("resize", method_pointer_1a2b6330a24257aca7db00f182a35e9c, "");
    class_503e5c14ed6a55b1a0b21297aa76ad33.def("resize", method_pointer_bc40f955c4305c2bad89326b9226963e, "");
// TODO     class_503e5c14ed6a55b1a0b21297aa76ad33.def("set_constant", method_pointer_395965b37efc5210b166658612422af0, boost::python::return_internal_reference<>(), "");
// TODO // TODO     class_503e5c14ed6a55b1a0b21297aa76ad33.def("set_constant", autowig::method_decorator_395965b37efc5210b166658612422af0);
    class_503e5c14ed6a55b1a0b21297aa76ad33.def("set_constant", method_pointer_f1de4a952ed85dde8010010578ff057d, boost::python::return_internal_reference<>(), "");
    class_503e5c14ed6a55b1a0b21297aa76ad33.def("set_constant", autowig::method_decorator_f1de4a952ed85dde8010010578ff057d);
// TODO     class_503e5c14ed6a55b1a0b21297aa76ad33.def("set_zero", method_pointer_4c40b8d821cf5e1fa91d62ace57c9e54, boost::python::return_internal_reference<>(), "");
// TODO // TODO     class_503e5c14ed6a55b1a0b21297aa76ad33.def("set_zero", autowig::method_decorator_4c40b8d821cf5e1fa91d62ace57c9e54);
    class_503e5c14ed6a55b1a0b21297aa76ad33.def("set_zero", method_pointer_c62344b7186a59afa2e5b7d9c4575057, boost::python::return_internal_reference<>(), "");
    class_503e5c14ed6a55b1a0b21297aa76ad33.def("set_zero", autowig::method_decorator_c62344b7186a59afa2e5b7d9c4575057);
// TODO     class_503e5c14ed6a55b1a0b21297aa76ad33.def("set_ones", method_pointer_3b2d835404785b6a99a6d44e1b2a5dbe, boost::python::return_internal_reference<>(), "");
// TODO     class_503e5c14ed6a55b1a0b21297aa76ad33.def("set_ones", autowig::method_decorator_3b2d835404785b6a99a6d44e1b2a5dbe);
    class_503e5c14ed6a55b1a0b21297aa76ad33.def("set_ones", method_pointer_c24c4061ede657bdbce3fed330bd1368, boost::python::return_internal_reference<>(), "");
    class_503e5c14ed6a55b1a0b21297aa76ad33.def("set_ones", autowig::method_decorator_c24c4061ede657bdbce3fed330bd1368);
// TODO     class_503e5c14ed6a55b1a0b21297aa76ad33.def("set_random", method_pointer_95fdb34e2e1c5256a5326f99f02e39d7, boost::python::return_internal_reference<>(), "");
// TODO     class_503e5c14ed6a55b1a0b21297aa76ad33.def("set_random", autowig::method_decorator_95fdb34e2e1c5256a5326f99f02e39d7);
    class_503e5c14ed6a55b1a0b21297aa76ad33.def("set_random", method_pointer_ee56631ce3be572998a7ffc9b6543682, boost::python::return_internal_reference<>(), "");
    class_503e5c14ed6a55b1a0b21297aa76ad33.def("set_random", autowig::method_decorator_ee56631ce3be572998a7ffc9b6543682);
    class_503e5c14ed6a55b1a0b21297aa76ad33.def("check_template_params", method_pointer_7ccf9614a14c5283ba6a06c9343bc7da, "");
    class_503e5c14ed6a55b1a0b21297aa76ad33.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > > > >();
    }

}