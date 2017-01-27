#include "_ieigen.h"


namespace autowig
{
    void method_decorator_ab3d2b799e20575d92d5791c02dc4d23(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 2 > > & instance, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 2 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_c0ff4df9172f5421b412db7d3550928d(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 2 > > & instance, double  const & param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 2 >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_10de5a14e3235504b53062226971c0f0(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 2 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 2 >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_6333b7445c8f594e91ea9ba70addcecf()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 2 >  & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_ab3d2b799e20575d92d5791c02dc4d23)() = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 2 > >::derived;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 2 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_d350a9cfa89d54e584d718696c752c4e)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 2 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_6df70bf06a9559a88bb2bf0b8bc2d864)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 2 > >::matrixU;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_6ab0da330eda5c4aa9e27026ed11c94f)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 2 > >::matrixV;
    class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_d1e5da5d0ea455d0948adb78f23f5602)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 2 > >::singularValues;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_926bf6da91b2566cb54fabb5eed13492)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 2 > >::nonzeroSingularValues;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_8fa046039b0b56d793c3d882246181b3)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 2 > >::rank;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 2 >  & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_c0ff4df9172f5421b412db7d3550928d)(double  const &) = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 2 > >::setThreshold;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 2 >  & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_10de5a14e3235504b53062226971c0f0)(enum ::Eigen::Default_t ) = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 2 > >::setThreshold;
    double  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_3af223aa17f65c04b7c252a16ff4171c)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 2 > >::threshold;
    bool  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_8b86e972fe7653e4b6833fbfe08d72c0)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 2 > >::computeU;
    bool  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_2841076648605771b44edf4e7183684a)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 2 > >::computeV;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_53243e3afc1f5edb8af4117dfb1a0cd5)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 2 > >::rows;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_f4566162dad75f9aa26bda47d852fb22)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 2 > >::cols;
    boost::python::class_< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 2 > >, autowig::HeldType< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 2 > > > > class_6333b7445c8f594e91ea9ba70addcecf("_SVDBase_6333b7445c8f594e91ea9ba70addcecf", "", boost::python::no_init);
    class_6333b7445c8f594e91ea9ba70addcecf.def(boost::python::init< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 2 > >  const & >(""));
    class_6333b7445c8f594e91ea9ba70addcecf.def("derived", method_pointer_ab3d2b799e20575d92d5791c02dc4d23, boost::python::return_internal_reference<>(), "");
    class_6333b7445c8f594e91ea9ba70addcecf.def("derived", autowig::method_decorator_ab3d2b799e20575d92d5791c02dc4d23);
    class_6333b7445c8f594e91ea9ba70addcecf.def("derived", method_pointer_d350a9cfa89d54e584d718696c752c4e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6333b7445c8f594e91ea9ba70addcecf.def("matrix_u", method_pointer_6df70bf06a9559a88bb2bf0b8bc2d864, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6333b7445c8f594e91ea9ba70addcecf.def("matrix_v", method_pointer_6ab0da330eda5c4aa9e27026ed11c94f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6333b7445c8f594e91ea9ba70addcecf.def("singular_values", method_pointer_d1e5da5d0ea455d0948adb78f23f5602, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6333b7445c8f594e91ea9ba70addcecf.def("nonzero_singular_values", method_pointer_926bf6da91b2566cb54fabb5eed13492, "");
    class_6333b7445c8f594e91ea9ba70addcecf.def("rank", method_pointer_8fa046039b0b56d793c3d882246181b3, "");
    class_6333b7445c8f594e91ea9ba70addcecf.def("set_threshold", method_pointer_c0ff4df9172f5421b412db7d3550928d, boost::python::return_internal_reference<>(), "");
    class_6333b7445c8f594e91ea9ba70addcecf.def("set_threshold", autowig::method_decorator_c0ff4df9172f5421b412db7d3550928d);
    class_6333b7445c8f594e91ea9ba70addcecf.def("set_threshold", method_pointer_10de5a14e3235504b53062226971c0f0, boost::python::return_internal_reference<>(), "");
    class_6333b7445c8f594e91ea9ba70addcecf.def("set_threshold", autowig::method_decorator_10de5a14e3235504b53062226971c0f0);
    class_6333b7445c8f594e91ea9ba70addcecf.def("threshold", method_pointer_3af223aa17f65c04b7c252a16ff4171c, "");
    class_6333b7445c8f594e91ea9ba70addcecf.def("compute_u", method_pointer_8b86e972fe7653e4b6833fbfe08d72c0, "");
    class_6333b7445c8f594e91ea9ba70addcecf.def("compute_v", method_pointer_2841076648605771b44edf4e7183684a, "");
    class_6333b7445c8f594e91ea9ba70addcecf.def("rows", method_pointer_53243e3afc1f5edb8af4117dfb1a0cd5, "");
    class_6333b7445c8f594e91ea9ba70addcecf.def("cols", method_pointer_f4566162dad75f9aa26bda47d852fb22, "");

}