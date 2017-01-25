#include "_ieigen.h"


namespace autowig
{
    void method_decorator_2eadeced038751579613b7c1434192f1(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  & param_out)
    { instance.derived() = param_out; }
    void method_decorator_c563e9aeb41b5496b8032687ac33b8d4(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > > const & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  & param_out)
    { instance.const_cast_derived() = param_out; }
}


void wrapper_61faf3fcf5ab57fc98779b5f247602db()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_2eadeced038751579613b7c1434192f1)() = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_cafd634a0daa57c986707e62d77019e7)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_c563e9aeb41b5496b8032687ac33b8d4)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::const_cast_derived;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_21be0b04d92657198e07f3c92df7dc17)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_05319d8c2ecf519eb4d10c455b13718b)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_6ff04836d4aa5e09a86654779e516b49)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_931b2029110f5d3bb53acce272c17e64)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > > > > class_61faf3fcf5ab57fc98779b5f247602db("_EigenBase_61faf3fcf5ab57fc98779b5f247602db", "", boost::python::no_init);
    class_61faf3fcf5ab57fc98779b5f247602db.def("derived", method_pointer_2eadeced038751579613b7c1434192f1, boost::python::return_internal_reference<>(), "");
    class_61faf3fcf5ab57fc98779b5f247602db.def("derived", autowig::method_decorator_2eadeced038751579613b7c1434192f1);
    class_61faf3fcf5ab57fc98779b5f247602db.def("derived", method_pointer_cafd634a0daa57c986707e62d77019e7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_61faf3fcf5ab57fc98779b5f247602db.def("const_cast_derived", method_pointer_c563e9aeb41b5496b8032687ac33b8d4, boost::python::return_internal_reference<>(), "");
    class_61faf3fcf5ab57fc98779b5f247602db.def("const_cast_derived", autowig::method_decorator_c563e9aeb41b5496b8032687ac33b8d4);
    class_61faf3fcf5ab57fc98779b5f247602db.def("const_derived", method_pointer_21be0b04d92657198e07f3c92df7dc17, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_61faf3fcf5ab57fc98779b5f247602db.def("rows", method_pointer_05319d8c2ecf519eb4d10c455b13718b, "");
    class_61faf3fcf5ab57fc98779b5f247602db.def("cols", method_pointer_6ff04836d4aa5e09a86654779e516b49, "");
    class_61faf3fcf5ab57fc98779b5f247602db.def("size", method_pointer_931b2029110f5d3bb53acce272c17e64, "");

}