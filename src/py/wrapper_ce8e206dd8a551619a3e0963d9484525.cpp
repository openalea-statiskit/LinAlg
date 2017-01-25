#include "_ieigen.h"


namespace autowig
{
    void method_decorator_ba46ad9908e05b189d685a3e011439dc(struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > & instance, class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  & param_out)
    { instance.derived() = param_out; }
    void method_decorator_b0cd759476865752b34b30d4b843a61f(struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > const & instance, class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  & param_out)
    { instance.const_cast_derived() = param_out; }
}


void wrapper_ce8e206dd8a551619a3e0963d9484525()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  & (::Eigen::EigenBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_ba46ad9908e05b189d685a3e011439dc)() = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::derived;
    class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_ef060e95244b5ecc8939454c091d0fc5)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::derived;
    class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  & (::Eigen::EigenBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_b0cd759476865752b34b30d4b843a61f)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::const_cast_derived;
    class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_65f7c2ac12885fe2ac092ac4ceb94a05)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_7cb07ca31981548c97bbbc8b0d850643)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_417d59571710524bac0002892fe2c72a)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_8f7822fa54105b8bbc08630df8e6590c)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > > > class_ce8e206dd8a551619a3e0963d9484525("_EigenBase_ce8e206dd8a551619a3e0963d9484525", "", boost::python::no_init);
    class_ce8e206dd8a551619a3e0963d9484525.def("derived", method_pointer_ba46ad9908e05b189d685a3e011439dc, boost::python::return_internal_reference<>(), "");
    class_ce8e206dd8a551619a3e0963d9484525.def("derived", autowig::method_decorator_ba46ad9908e05b189d685a3e011439dc);
    class_ce8e206dd8a551619a3e0963d9484525.def("derived", method_pointer_ef060e95244b5ecc8939454c091d0fc5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ce8e206dd8a551619a3e0963d9484525.def("const_cast_derived", method_pointer_b0cd759476865752b34b30d4b843a61f, boost::python::return_internal_reference<>(), "");
    class_ce8e206dd8a551619a3e0963d9484525.def("const_cast_derived", autowig::method_decorator_b0cd759476865752b34b30d4b843a61f);
    class_ce8e206dd8a551619a3e0963d9484525.def("const_derived", method_pointer_65f7c2ac12885fe2ac092ac4ceb94a05, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ce8e206dd8a551619a3e0963d9484525.def("rows", method_pointer_7cb07ca31981548c97bbbc8b0d850643, "");
    class_ce8e206dd8a551619a3e0963d9484525.def("cols", method_pointer_417d59571710524bac0002892fe2c72a, "");
    class_ce8e206dd8a551619a3e0963d9484525.def("size", method_pointer_8f7822fa54105b8bbc08630df8e6590c, "");

}