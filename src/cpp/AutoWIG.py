import autowig
import itertools

from scons_tools.site_autowig.controller.statiskit_stl import controller as stl_controller

def controller(asg):
    # import pdb
    # pdb.set_trace()
    # class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >
    # class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >
    # class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >
    # class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >
    # struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >
    # struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation >
    # class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >
    # class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation >
    # class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 3 >
    # class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 3 >
    # class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >
    # class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >
    # class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >
    # struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistributionEstimation::Estimator, struct ::statiskit::DirichletMultinomialSingularDistributionEstimation::Estimator, struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator >
    # class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >
    # class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >
    # class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >
    # struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >
    # class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >
    asg = stl_controller(asg, library=False, clean=False)
    # for dcl in asg['::Eigen::internal'].declarations(nested=True):
    #     dcl.boost_python_export = False
    for cls in ['class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >',
                'class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >',
                'class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >']:
        for mtd in asg[cls].methods(access='public'):
            if mtd.localname == 'trace':
                mtd.boost_python_export = False
    for fct in asg.functions():
        if fct.localname in ['_check_template_params', 'operator()', 'operator[]']:
            fct.boost_python_export = False
    for cls in ['Vectors', 'RowVectors', 'Matrices']:
        cls = asg['::statiskit::linalg::' + cls].qualified_type.unqualified_type
        for ctr in cls.constructors():
            if ctr.nb_parameters > 0:
                ctr.boost_python_export = False
    for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >'].functions():
        if method.prototype(desugared=False) == 'void  transposeInPlace()':
            method.boost_python_export = False
            break
    for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >'].functions():
        if method.prototype(desugared=False) == 'class ::Eigen::TriangularView< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 10 >  triangularView()':
            method.boost_python_export = False
            break
    for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >'].functions():
        if method.prototype(desugared=False) == 'class ::Eigen::TriangularView< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const, 5 > const triangularView() const':
            method.boost_python_export = False
            break
    for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >'].functions():
        if method.prototype(desugared=False) == 'class ::Eigen::TriangularView< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const, 2 > const triangularView() const':
            method.boost_python_export = False
            break
    for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >'].functions():
        if method.prototype(desugared=False) == 'void  conservativeResize(::Eigen::Index )':
            method.boost_python_export = False
            break
    for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >'].functions():
        if method.prototype(desugared=False) == '::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::RealScalar  lpNorm() const':
            method.boost_python_export = False
            break
    for method in asg['class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >'].functions():
        if method.prototype(desugared=False) == 'void  _solve_impl_transposed(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > &) const':
            method.boost_python_export = False
            break
    for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >'].functions():
        if method.prototype(desugared=False) == 'void  transposeInPlace()':
            method.boost_python_export = False
            break
    for method in asg['class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >'].functions():
        if method.prototype(desugared=False) == 'void  _solve_impl_transposed(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > &) const':
            method.boost_python_export = False
            break
    return asg

def generator(asg, module, decorator):
    autowig.generator.plugin = 'boost_python'
    nodes = [typedef.qualified_type.unqualified_type for typedef in asg['::statiskit::linalg'].typedefs()]
    nodes = list(itertools.chain(*[node.bases(inherited=True) for node in nodes])) + nodes + asg['::statiskit::linalg'].declarations()
    wrappers = autowig.generator(asg, nodes, module=module,
                                             decorator=decorator,
                                             closure=False,
                                             helder='std::shared_ptr')
    return wrappers