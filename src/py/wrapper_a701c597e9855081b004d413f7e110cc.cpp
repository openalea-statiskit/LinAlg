#include "_ieigen.h"


namespace autowig
{
    void method_decorator_89c26eb46c15552ab6ff3a703defc282(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 > > & instance, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_b835a7739f7b5b9ca6a13deaef54abfb(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 > > & instance, double  const & param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_92f80070c6e95f9e9d03016632b2569a(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_a701c597e9855081b004d413f7e110cc()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 >  & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_89c26eb46c15552ab6ff3a703defc282)() = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 > >::derived;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_ca70fb693a675c57b9609c2caa8c32ea)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_b6205d5675e1597db3b4eff0cade80b2)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 > >::matrixU;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_d65b5d639dd05b68860d2d6718b1af42)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 > >::matrixV;
    class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_c9ccce81aa10574c843fb69f3c915470)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 > >::singularValues;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_06059782c54d51c9874631d753af6792)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 > >::nonzeroSingularValues;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_1a390ac20d215b92a7e783faf5e25336)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 > >::rank;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 >  & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_b835a7739f7b5b9ca6a13deaef54abfb)(double  const &) = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 > >::setThreshold;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 >  & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_92f80070c6e95f9e9d03016632b2569a)(enum ::Eigen::Default_t ) = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 > >::setThreshold;
    double  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_b81c53ec92ac50b5ab959417ca8dd9f0)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 > >::threshold;
    bool  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_09a77caa96fe52009110b8bff20abb02)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 > >::computeU;
    bool  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_9fed3c978bc9561281c351204aa7f653)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 > >::computeV;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_e4d2f9fee67c58619d43b222587a0238)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 > >::rows;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 > >::*method_pointer_d20d3aef45e35ad1bff1aa44fd64ead0)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 > >::cols;
    boost::python::class_< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 > >, autowig::HeldType< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 > > > > class_a701c597e9855081b004d413f7e110cc("_SVDBase_a701c597e9855081b004d413f7e110cc", "", boost::python::no_init);
    class_a701c597e9855081b004d413f7e110cc.def(boost::python::init< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 > >  const & >(""));
    class_a701c597e9855081b004d413f7e110cc.def("derived", method_pointer_89c26eb46c15552ab6ff3a703defc282, boost::python::return_internal_reference<>(), "");
    class_a701c597e9855081b004d413f7e110cc.def("derived", autowig::method_decorator_89c26eb46c15552ab6ff3a703defc282);
    class_a701c597e9855081b004d413f7e110cc.def("derived", method_pointer_ca70fb693a675c57b9609c2caa8c32ea, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a701c597e9855081b004d413f7e110cc.def("matrix_u", method_pointer_b6205d5675e1597db3b4eff0cade80b2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a701c597e9855081b004d413f7e110cc.def("matrix_v", method_pointer_d65b5d639dd05b68860d2d6718b1af42, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a701c597e9855081b004d413f7e110cc.def("singular_values", method_pointer_c9ccce81aa10574c843fb69f3c915470, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a701c597e9855081b004d413f7e110cc.def("nonzero_singular_values", method_pointer_06059782c54d51c9874631d753af6792, "");
    class_a701c597e9855081b004d413f7e110cc.def("rank", method_pointer_1a390ac20d215b92a7e783faf5e25336, "");
    class_a701c597e9855081b004d413f7e110cc.def("set_threshold", method_pointer_b835a7739f7b5b9ca6a13deaef54abfb, boost::python::return_internal_reference<>(), "");
    class_a701c597e9855081b004d413f7e110cc.def("set_threshold", autowig::method_decorator_b835a7739f7b5b9ca6a13deaef54abfb);
    class_a701c597e9855081b004d413f7e110cc.def("set_threshold", method_pointer_92f80070c6e95f9e9d03016632b2569a, boost::python::return_internal_reference<>(), "");
    class_a701c597e9855081b004d413f7e110cc.def("set_threshold", autowig::method_decorator_92f80070c6e95f9e9d03016632b2569a);
    class_a701c597e9855081b004d413f7e110cc.def("threshold", method_pointer_b81c53ec92ac50b5ab959417ca8dd9f0, "");
    class_a701c597e9855081b004d413f7e110cc.def("compute_u", method_pointer_09a77caa96fe52009110b8bff20abb02, "");
    class_a701c597e9855081b004d413f7e110cc.def("compute_v", method_pointer_9fed3c978bc9561281c351204aa7f653, "");
    class_a701c597e9855081b004d413f7e110cc.def("rows", method_pointer_e4d2f9fee67c58619d43b222587a0238, "");
    class_a701c597e9855081b004d413f7e110cc.def("cols", method_pointer_d20d3aef45e35ad1bff1aa44fd64ead0, "");

}