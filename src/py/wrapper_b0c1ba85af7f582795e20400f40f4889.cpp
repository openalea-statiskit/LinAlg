#include "_ieigen.h"


namespace autowig
{
    void method_decorator_9bcc557fdd1f578fa693af19fc151480(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_04948235234058398dfc2c44cfa5eb0f(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > > const & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_b0c1ba85af7f582795e20400f40f4889()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_9bcc557fdd1f578fa693af19fc151480)() = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_9ef69eb459e65a5ea10b72232b57f5b1)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_04948235234058398dfc2c44cfa5eb0f)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::const_cast_derived;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_32352051bed455e7a2e816d51e305af1)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_47bf142199015595b04d99a68fa6d15f)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_3ddbeb74ff4052e9a4e0e5ee874c5965)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_74c6f0e55c27538a93d6fd63f750ce5d)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > > > > class_b0c1ba85af7f582795e20400f40f4889("_EigenBase_b0c1ba85af7f582795e20400f40f4889", "", boost::python::no_init);
    class_b0c1ba85af7f582795e20400f40f4889.def("derived", method_pointer_9bcc557fdd1f578fa693af19fc151480, boost::python::return_internal_reference<>(), "");
    class_b0c1ba85af7f582795e20400f40f4889.def("derived", autowig::method_decorator_9bcc557fdd1f578fa693af19fc151480);
    class_b0c1ba85af7f582795e20400f40f4889.def("derived", method_pointer_9ef69eb459e65a5ea10b72232b57f5b1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b0c1ba85af7f582795e20400f40f4889.def("const_cast_derived", method_pointer_04948235234058398dfc2c44cfa5eb0f, boost::python::return_internal_reference<>(), "");
    class_b0c1ba85af7f582795e20400f40f4889.def("const_cast_derived", autowig::method_decorator_04948235234058398dfc2c44cfa5eb0f);
    class_b0c1ba85af7f582795e20400f40f4889.def("const_derived", method_pointer_32352051bed455e7a2e816d51e305af1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b0c1ba85af7f582795e20400f40f4889.def("rows", method_pointer_47bf142199015595b04d99a68fa6d15f, "");
    class_b0c1ba85af7f582795e20400f40f4889.def("cols", method_pointer_3ddbeb74ff4052e9a4e0e5ee874c5965, "");
    class_b0c1ba85af7f582795e20400f40f4889.def("size", method_pointer_74c6f0e55c27538a93d6fd63f750ce5d, "");

}