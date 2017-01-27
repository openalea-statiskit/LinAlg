#include "_ieigen.h"


namespace autowig
{
    void method_decorator_9f031cc7b1095c50ac5dc5c24afb5d86(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 > > & instance, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_031631e311f95a1ea433c369af73db38(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 > > & instance, double  const & param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_15f2726012cf5e5d9ce9409c7dd0c350(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_78d1bd3ffdd05cac95134026601b619b()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 >  & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_9f031cc7b1095c50ac5dc5c24afb5d86)() = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 > >::derived;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_ba220009fe9e5edfa2c974a3dfb0f11b)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 > >::derived;
    class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_6bbaa29982065a2d9386a11fc4a4c9da)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 > >::matrixU;
    class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_9f472489f5735a739eed09f581d8bc4f)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 > >::matrixV;
    class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_c8f2e1450c7b563b89f04d22dd0d8006)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 > >::singularValues;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_b7f8fd79a6675b2085530f397b64eb94)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 > >::nonzeroSingularValues;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_2c3829eea2355a3fad6a9332b18c4d5d)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 > >::rank;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 >  & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_031631e311f95a1ea433c369af73db38)(double  const &) = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 > >::setThreshold;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 >  & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_15f2726012cf5e5d9ce9409c7dd0c350)(enum ::Eigen::Default_t ) = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 > >::setThreshold;
    double  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_4c221ee7ad375672af89869c7f299b29)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 > >::threshold;
    bool  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_d72b05e60858560a95275debc13128f5)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 > >::computeU;
    bool  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_7b91b25c140358f6a5f21595472d31c2)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 > >::computeV;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_b31caa2308735572bf265c43a9762966)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 > >::rows;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_08d2794ac23552a5a4e3a1f64b344e89)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 > >::cols;
    boost::python::class_< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 > >, autowig::HeldType< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 > > > > class_78d1bd3ffdd05cac95134026601b619b("_SVDBase_78d1bd3ffdd05cac95134026601b619b", "", boost::python::no_init);
    class_78d1bd3ffdd05cac95134026601b619b.def(boost::python::init< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 > >  const & >(""));
    class_78d1bd3ffdd05cac95134026601b619b.def("derived", method_pointer_9f031cc7b1095c50ac5dc5c24afb5d86, boost::python::return_internal_reference<>(), "");
    class_78d1bd3ffdd05cac95134026601b619b.def("derived", autowig::method_decorator_9f031cc7b1095c50ac5dc5c24afb5d86);
    class_78d1bd3ffdd05cac95134026601b619b.def("derived", method_pointer_ba220009fe9e5edfa2c974a3dfb0f11b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_78d1bd3ffdd05cac95134026601b619b.def("matrix_u", method_pointer_6bbaa29982065a2d9386a11fc4a4c9da, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_78d1bd3ffdd05cac95134026601b619b.def("matrix_v", method_pointer_9f472489f5735a739eed09f581d8bc4f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_78d1bd3ffdd05cac95134026601b619b.def("singular_values", method_pointer_c8f2e1450c7b563b89f04d22dd0d8006, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_78d1bd3ffdd05cac95134026601b619b.def("nonzero_singular_values", method_pointer_b7f8fd79a6675b2085530f397b64eb94, "");
    class_78d1bd3ffdd05cac95134026601b619b.def("rank", method_pointer_2c3829eea2355a3fad6a9332b18c4d5d, "");
    class_78d1bd3ffdd05cac95134026601b619b.def("set_threshold", method_pointer_031631e311f95a1ea433c369af73db38, boost::python::return_internal_reference<>(), "");
    class_78d1bd3ffdd05cac95134026601b619b.def("set_threshold", autowig::method_decorator_031631e311f95a1ea433c369af73db38);
    class_78d1bd3ffdd05cac95134026601b619b.def("set_threshold", method_pointer_15f2726012cf5e5d9ce9409c7dd0c350, boost::python::return_internal_reference<>(), "");
    class_78d1bd3ffdd05cac95134026601b619b.def("set_threshold", autowig::method_decorator_15f2726012cf5e5d9ce9409c7dd0c350);
    class_78d1bd3ffdd05cac95134026601b619b.def("threshold", method_pointer_4c221ee7ad375672af89869c7f299b29, "");
    class_78d1bd3ffdd05cac95134026601b619b.def("compute_u", method_pointer_d72b05e60858560a95275debc13128f5, "");
    class_78d1bd3ffdd05cac95134026601b619b.def("compute_v", method_pointer_7b91b25c140358f6a5f21595472d31c2, "");
    class_78d1bd3ffdd05cac95134026601b619b.def("rows", method_pointer_b31caa2308735572bf265c43a9762966, "");
    class_78d1bd3ffdd05cac95134026601b619b.def("cols", method_pointer_08d2794ac23552a5a4e3a1f64b344e89, "");

}