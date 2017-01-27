#include "_ieigen.h"


namespace autowig
{
    void method_decorator_7ecab480f4c1553d8b64631d65d9a3f3(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 > > & instance, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_292fc1b2a4fa5b028cb89f0ff23e9229(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 > > & instance, float  const & param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_bbc096da3c065bf6934b03a961aa7580(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_be21543e3b8c59d097fc73a02f22e194()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 >  & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_7ecab480f4c1553d8b64631d65d9a3f3)() = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 > >::derived;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_c48ebdd5951b5028a4301c3e605c8187)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 > >::derived;
    class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_0729e92ed1db544f94c7ccbbba458c95)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 > >::matrixU;
    class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_069f779e66385526ab60a8172ba92398)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 > >::matrixV;
    class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_b6f0c8ad156b5d7caa9081a7348e94d2)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 > >::singularValues;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_1f4327677f305f548e414ad722e3e56e)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 > >::nonzeroSingularValues;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_f6f8e2a4a12b5de5bbcce15223c045be)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 > >::rank;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 >  & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_292fc1b2a4fa5b028cb89f0ff23e9229)(float  const &) = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 > >::setThreshold;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 >  & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_bbc096da3c065bf6934b03a961aa7580)(enum ::Eigen::Default_t ) = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 > >::setThreshold;
    float  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_47c90690857c5c20a113b1e2fef5c135)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 > >::threshold;
    bool  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_32052a34312f50eabb46947ec99962ea)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 > >::computeU;
    bool  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_942c7c9f54ad5d108c9a3437ebee9f54)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 > >::computeV;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_8a3297ad1ddf53e6b575449568b1c377)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 > >::rows;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 > >::*method_pointer_13d2c5ea64705727866bd358f78bfc89)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 > >::cols;
    boost::python::class_< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 > >, autowig::HeldType< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 > > > > class_be21543e3b8c59d097fc73a02f22e194("_SVDBase_be21543e3b8c59d097fc73a02f22e194", "", boost::python::no_init);
    class_be21543e3b8c59d097fc73a02f22e194.def(boost::python::init< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 > >  const & >(""));
    class_be21543e3b8c59d097fc73a02f22e194.def("derived", method_pointer_7ecab480f4c1553d8b64631d65d9a3f3, boost::python::return_internal_reference<>(), "");
    class_be21543e3b8c59d097fc73a02f22e194.def("derived", autowig::method_decorator_7ecab480f4c1553d8b64631d65d9a3f3);
    class_be21543e3b8c59d097fc73a02f22e194.def("derived", method_pointer_c48ebdd5951b5028a4301c3e605c8187, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_be21543e3b8c59d097fc73a02f22e194.def("matrix_u", method_pointer_0729e92ed1db544f94c7ccbbba458c95, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_be21543e3b8c59d097fc73a02f22e194.def("matrix_v", method_pointer_069f779e66385526ab60a8172ba92398, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_be21543e3b8c59d097fc73a02f22e194.def("singular_values", method_pointer_b6f0c8ad156b5d7caa9081a7348e94d2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_be21543e3b8c59d097fc73a02f22e194.def("nonzero_singular_values", method_pointer_1f4327677f305f548e414ad722e3e56e, "");
    class_be21543e3b8c59d097fc73a02f22e194.def("rank", method_pointer_f6f8e2a4a12b5de5bbcce15223c045be, "");
    class_be21543e3b8c59d097fc73a02f22e194.def("set_threshold", method_pointer_292fc1b2a4fa5b028cb89f0ff23e9229, boost::python::return_internal_reference<>(), "");
    class_be21543e3b8c59d097fc73a02f22e194.def("set_threshold", autowig::method_decorator_292fc1b2a4fa5b028cb89f0ff23e9229);
    class_be21543e3b8c59d097fc73a02f22e194.def("set_threshold", method_pointer_bbc096da3c065bf6934b03a961aa7580, boost::python::return_internal_reference<>(), "");
    class_be21543e3b8c59d097fc73a02f22e194.def("set_threshold", autowig::method_decorator_bbc096da3c065bf6934b03a961aa7580);
    class_be21543e3b8c59d097fc73a02f22e194.def("threshold", method_pointer_47c90690857c5c20a113b1e2fef5c135, "");
    class_be21543e3b8c59d097fc73a02f22e194.def("compute_u", method_pointer_32052a34312f50eabb46947ec99962ea, "");
    class_be21543e3b8c59d097fc73a02f22e194.def("compute_v", method_pointer_942c7c9f54ad5d108c9a3437ebee9f54, "");
    class_be21543e3b8c59d097fc73a02f22e194.def("rows", method_pointer_8a3297ad1ddf53e6b575449568b1c377, "");
    class_be21543e3b8c59d097fc73a02f22e194.def("cols", method_pointer_13d2c5ea64705727866bd358f78bfc89, "");

}