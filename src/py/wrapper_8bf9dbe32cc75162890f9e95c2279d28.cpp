#include "_ieigen.h"


namespace autowig
{
    void method_decorator_2073956db0a55acc996e22befc2b9178(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 > > & instance, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_ffab5c3fb398501d80f8d736c0ee1bfe(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 > > & instance, float  const & param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_5a5f163b430e59e29bb5dc89435ba955(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_8bf9dbe32cc75162890f9e95c2279d28()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 >  & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_2073956db0a55acc996e22befc2b9178)() = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 > >::derived;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_caaf37aaf1a15987afd0d70578cc8fb1)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_9a51ff39693d5340b2be9b2a3f6840f6)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 > >::matrixU;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_e0f749b5454259ff9297c0b02fc65807)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 > >::matrixV;
    class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_cfd254b950f3540e9c8abb2468eed1cb)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 > >::singularValues;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_81de222019845ba0b605b8252d70829a)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 > >::nonzeroSingularValues;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_4ccb687448ed5a92b3d8292b4448460e)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 > >::rank;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 >  & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_ffab5c3fb398501d80f8d736c0ee1bfe)(float  const &) = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 > >::setThreshold;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 >  & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_5a5f163b430e59e29bb5dc89435ba955)(enum ::Eigen::Default_t ) = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 > >::setThreshold;
    float  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_fbf73fda210a50f5ba6f28c1722a5282)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 > >::threshold;
    bool  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_5ed2de3c15cb545ea47df722006f403a)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 > >::computeU;
    bool  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_2b5fc588499f5aae954a775eefafc25e)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 > >::computeV;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_6452bcd98d3e582080b6d037d428e895)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 > >::rows;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_fda7cef673d0562eb2979ee778c8980d)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 > >::cols;
    boost::python::class_< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 > >, autowig::HeldType< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 > > > > class_8bf9dbe32cc75162890f9e95c2279d28("_SVDBase_8bf9dbe32cc75162890f9e95c2279d28", "", boost::python::no_init);
    class_8bf9dbe32cc75162890f9e95c2279d28.def(boost::python::init< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 > >  const & >(""));
    class_8bf9dbe32cc75162890f9e95c2279d28.def("derived", method_pointer_2073956db0a55acc996e22befc2b9178, boost::python::return_internal_reference<>(), "");
    class_8bf9dbe32cc75162890f9e95c2279d28.def("derived", autowig::method_decorator_2073956db0a55acc996e22befc2b9178);
    class_8bf9dbe32cc75162890f9e95c2279d28.def("derived", method_pointer_caaf37aaf1a15987afd0d70578cc8fb1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8bf9dbe32cc75162890f9e95c2279d28.def("matrix_u", method_pointer_9a51ff39693d5340b2be9b2a3f6840f6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8bf9dbe32cc75162890f9e95c2279d28.def("matrix_v", method_pointer_e0f749b5454259ff9297c0b02fc65807, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8bf9dbe32cc75162890f9e95c2279d28.def("singular_values", method_pointer_cfd254b950f3540e9c8abb2468eed1cb, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8bf9dbe32cc75162890f9e95c2279d28.def("nonzero_singular_values", method_pointer_81de222019845ba0b605b8252d70829a, "");
    class_8bf9dbe32cc75162890f9e95c2279d28.def("rank", method_pointer_4ccb687448ed5a92b3d8292b4448460e, "");
    class_8bf9dbe32cc75162890f9e95c2279d28.def("set_threshold", method_pointer_ffab5c3fb398501d80f8d736c0ee1bfe, boost::python::return_internal_reference<>(), "");
    class_8bf9dbe32cc75162890f9e95c2279d28.def("set_threshold", autowig::method_decorator_ffab5c3fb398501d80f8d736c0ee1bfe);
    class_8bf9dbe32cc75162890f9e95c2279d28.def("set_threshold", method_pointer_5a5f163b430e59e29bb5dc89435ba955, boost::python::return_internal_reference<>(), "");
    class_8bf9dbe32cc75162890f9e95c2279d28.def("set_threshold", autowig::method_decorator_5a5f163b430e59e29bb5dc89435ba955);
    class_8bf9dbe32cc75162890f9e95c2279d28.def("threshold", method_pointer_fbf73fda210a50f5ba6f28c1722a5282, "");
    class_8bf9dbe32cc75162890f9e95c2279d28.def("compute_u", method_pointer_5ed2de3c15cb545ea47df722006f403a, "");
    class_8bf9dbe32cc75162890f9e95c2279d28.def("compute_v", method_pointer_2b5fc588499f5aae954a775eefafc25e, "");
    class_8bf9dbe32cc75162890f9e95c2279d28.def("rows", method_pointer_6452bcd98d3e582080b6d037d428e895, "");
    class_8bf9dbe32cc75162890f9e95c2279d28.def("cols", method_pointer_fda7cef673d0562eb2979ee778c8980d, "");

}