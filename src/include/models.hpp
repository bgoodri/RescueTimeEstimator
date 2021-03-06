
#ifndef MODELS_HPP
#define MODELS_HPP
#define STAN__SERVICES__COMMAND_HPP
#include <rstan/rstaninc.hpp>
// Code generated by Stan version 2.14

#include <stan/model/model_header.hpp>

namespace model_model_namespace {

using std::istream;
using std::string;
using std::stringstream;
using std::vector;
using stan::io::dump;
using stan::math::lgamma;
using stan::model::prob_grad;
using namespace stan::math;

typedef Eigen::Matrix<double,Eigen::Dynamic,1> vector_d;
typedef Eigen::Matrix<double,1,Eigen::Dynamic> row_vector_d;
typedef Eigen::Matrix<double,Eigen::Dynamic,Eigen::Dynamic> matrix_d;

static int current_statement_begin__;

class model_model : public prob_grad {
private:
    int N;
    vector<double> very_distracting;
    vector<double> distracting;
    vector<double> neutral;
    vector<double> productive;
public:
    model_model(stan::io::var_context& context__,
        std::ostream* pstream__ = 0)
        : prob_grad(0) {
        typedef boost::ecuyer1988 rng_t;
        rng_t base_rng(0);  // 0 seed default
        ctor_body(context__, base_rng, pstream__);
    }

    template <class RNG>
    model_model(stan::io::var_context& context__,
        RNG& base_rng__,
        std::ostream* pstream__ = 0)
        : prob_grad(0) {
        ctor_body(context__, base_rng__, pstream__);
    }

    template <class RNG>
    void ctor_body(stan::io::var_context& context__,
                   RNG& base_rng__,
                   std::ostream* pstream__) {
        current_statement_begin__ = -1;

        static const char* function__ = "model_model_namespace::model_model";
        (void) function__; // dummy call to supress warning
        size_t pos__;
        (void) pos__; // dummy call to supress warning
        std::vector<int> vals_i__;
        std::vector<double> vals_r__;
        double DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // suppress unused var warning

        // initialize member variables
        context__.validate_dims("data initialization", "N", "int", context__.to_vec());
        N = int(0);
        vals_i__ = context__.vals_i("N");
        pos__ = 0;
        N = vals_i__[pos__++];
        context__.validate_dims("data initialization", "very_distracting", "double", context__.to_vec(N));
        validate_non_negative_index("very_distracting", "N", N);
        very_distracting = std::vector<double>(N,double(0));
        vals_r__ = context__.vals_r("very_distracting");
        pos__ = 0;
        size_t very_distracting_limit_0__ = N;
        for (size_t i_0__ = 0; i_0__ < very_distracting_limit_0__; ++i_0__) {
            very_distracting[i_0__] = vals_r__[pos__++];
        }
        context__.validate_dims("data initialization", "distracting", "double", context__.to_vec(N));
        validate_non_negative_index("distracting", "N", N);
        distracting = std::vector<double>(N,double(0));
        vals_r__ = context__.vals_r("distracting");
        pos__ = 0;
        size_t distracting_limit_0__ = N;
        for (size_t i_0__ = 0; i_0__ < distracting_limit_0__; ++i_0__) {
            distracting[i_0__] = vals_r__[pos__++];
        }
        context__.validate_dims("data initialization", "neutral", "double", context__.to_vec(N));
        validate_non_negative_index("neutral", "N", N);
        neutral = std::vector<double>(N,double(0));
        vals_r__ = context__.vals_r("neutral");
        pos__ = 0;
        size_t neutral_limit_0__ = N;
        for (size_t i_0__ = 0; i_0__ < neutral_limit_0__; ++i_0__) {
            neutral[i_0__] = vals_r__[pos__++];
        }
        context__.validate_dims("data initialization", "productive", "double", context__.to_vec(N));
        validate_non_negative_index("productive", "N", N);
        productive = std::vector<double>(N,double(0));
        vals_r__ = context__.vals_r("productive");
        pos__ = 0;
        size_t productive_limit_0__ = N;
        for (size_t i_0__ = 0; i_0__ < productive_limit_0__; ++i_0__) {
            productive[i_0__] = vals_r__[pos__++];
        }

        // validate, data variables
        check_greater_or_equal(function__,"N",N,1);
        // initialize data variables

        try {
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e,current_statement_begin__);
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }

        // validate transformed data

        // set parameter ranges
        num_params_r__ = 0U;
        param_ranges_i__.clear();
        ++num_params_r__;
        ++num_params_r__;
        ++num_params_r__;
        ++num_params_r__;
        ++num_params_r__;
        ++num_params_r__;
    }

    ~model_model() { }


    void transform_inits(const stan::io::var_context& context__,
                         std::vector<int>& params_i__,
                         std::vector<double>& params_r__,
                         std::ostream* pstream__) const {
        stan::io::writer<double> writer__(params_r__,params_i__);
        size_t pos__;
        (void) pos__; // dummy call to supress warning
        std::vector<double> vals_r__;
        std::vector<int> vals_i__;

        if (!(context__.contains_r("phi_a")))
            throw std::runtime_error("variable phi_a missing");
        vals_r__ = context__.vals_r("phi_a");
        pos__ = 0U;
        context__.validate_dims("initialization", "phi_a", "double", context__.to_vec());
        // generate_declaration phi_a
        double phi_a(0);
        phi_a = vals_r__[pos__++];
        try {
            writer__.scalar_unconstrain(phi_a);
        } catch (const std::exception& e) { 
            throw std::runtime_error(std::string("Error transforming variable phi_a: ") + e.what());
        }

        if (!(context__.contains_r("phi_b")))
            throw std::runtime_error("variable phi_b missing");
        vals_r__ = context__.vals_r("phi_b");
        pos__ = 0U;
        context__.validate_dims("initialization", "phi_b", "double", context__.to_vec());
        // generate_declaration phi_b
        double phi_b(0);
        phi_b = vals_r__[pos__++];
        try {
            writer__.scalar_unconstrain(phi_b);
        } catch (const std::exception& e) { 
            throw std::runtime_error(std::string("Error transforming variable phi_b: ") + e.what());
        }

        if (!(context__.contains_r("phi_c")))
            throw std::runtime_error("variable phi_c missing");
        vals_r__ = context__.vals_r("phi_c");
        pos__ = 0U;
        context__.validate_dims("initialization", "phi_c", "double", context__.to_vec());
        // generate_declaration phi_c
        double phi_c(0);
        phi_c = vals_r__[pos__++];
        try {
            writer__.scalar_unconstrain(phi_c);
        } catch (const std::exception& e) { 
            throw std::runtime_error(std::string("Error transforming variable phi_c: ") + e.what());
        }

        if (!(context__.contains_r("phi_d")))
            throw std::runtime_error("variable phi_d missing");
        vals_r__ = context__.vals_r("phi_d");
        pos__ = 0U;
        context__.validate_dims("initialization", "phi_d", "double", context__.to_vec());
        // generate_declaration phi_d
        double phi_d(0);
        phi_d = vals_r__[pos__++];
        try {
            writer__.scalar_unconstrain(phi_d);
        } catch (const std::exception& e) { 
            throw std::runtime_error(std::string("Error transforming variable phi_d: ") + e.what());
        }

        if (!(context__.contains_r("phi_e")))
            throw std::runtime_error("variable phi_e missing");
        vals_r__ = context__.vals_r("phi_e");
        pos__ = 0U;
        context__.validate_dims("initialization", "phi_e", "double", context__.to_vec());
        // generate_declaration phi_e
        double phi_e(0);
        phi_e = vals_r__[pos__++];
        try {
            writer__.scalar_unconstrain(phi_e);
        } catch (const std::exception& e) { 
            throw std::runtime_error(std::string("Error transforming variable phi_e: ") + e.what());
        }

        if (!(context__.contains_r("sigma")))
            throw std::runtime_error("variable sigma missing");
        vals_r__ = context__.vals_r("sigma");
        pos__ = 0U;
        context__.validate_dims("initialization", "sigma", "double", context__.to_vec());
        // generate_declaration sigma
        double sigma(0);
        sigma = vals_r__[pos__++];
        try {
            writer__.scalar_lub_unconstrain(0,1,sigma);
        } catch (const std::exception& e) { 
            throw std::runtime_error(std::string("Error transforming variable sigma: ") + e.what());
        }

        params_r__ = writer__.data_r();
        params_i__ = writer__.data_i();
    }

    void transform_inits(const stan::io::var_context& context,
                         Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                         std::ostream* pstream__) const {
      std::vector<double> params_r_vec;
      std::vector<int> params_i_vec;
      transform_inits(context, params_i_vec, params_r_vec, pstream__);
      params_r.resize(params_r_vec.size());
      for (int i = 0; i < params_r.size(); ++i)
        params_r(i) = params_r_vec[i];
    }


    template <bool propto__, bool jacobian__, typename T__>
    T__ log_prob(vector<T__>& params_r__,
                 vector<int>& params_i__,
                 std::ostream* pstream__ = 0) const {

        T__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // suppress unused var warning

        T__ lp__(0.0);
        stan::math::accumulator<T__> lp_accum__;

        // model parameters
        stan::io::reader<T__> in__(params_r__,params_i__);

        T__ phi_a;
        (void) phi_a;  // dummy to suppress unused var warning
        if (jacobian__)
            phi_a = in__.scalar_constrain(lp__);
        else
            phi_a = in__.scalar_constrain();

        T__ phi_b;
        (void) phi_b;  // dummy to suppress unused var warning
        if (jacobian__)
            phi_b = in__.scalar_constrain(lp__);
        else
            phi_b = in__.scalar_constrain();

        T__ phi_c;
        (void) phi_c;  // dummy to suppress unused var warning
        if (jacobian__)
            phi_c = in__.scalar_constrain(lp__);
        else
            phi_c = in__.scalar_constrain();

        T__ phi_d;
        (void) phi_d;  // dummy to suppress unused var warning
        if (jacobian__)
            phi_d = in__.scalar_constrain(lp__);
        else
            phi_d = in__.scalar_constrain();

        T__ phi_e;
        (void) phi_e;  // dummy to suppress unused var warning
        if (jacobian__)
            phi_e = in__.scalar_constrain(lp__);
        else
            phi_e = in__.scalar_constrain();

        T__ sigma;
        (void) sigma;  // dummy to suppress unused var warning
        if (jacobian__)
            sigma = in__.scalar_lub_constrain(0,1,lp__);
        else
            sigma = in__.scalar_lub_constrain(0,1);


        // transformed parameters
        T__ mu_a;
        (void) mu_a;  // dummy to suppress unused var warning
        stan::math::initialize(mu_a, DUMMY_VAR__);
        stan::math::fill(mu_a,DUMMY_VAR__);
        T__ mu_b;
        (void) mu_b;  // dummy to suppress unused var warning
        stan::math::initialize(mu_b, DUMMY_VAR__);
        stan::math::fill(mu_b,DUMMY_VAR__);
        T__ mu_c;
        (void) mu_c;  // dummy to suppress unused var warning
        stan::math::initialize(mu_c, DUMMY_VAR__);
        stan::math::fill(mu_c,DUMMY_VAR__);
        T__ mu_d;
        (void) mu_d;  // dummy to suppress unused var warning
        stan::math::initialize(mu_d, DUMMY_VAR__);
        stan::math::fill(mu_d,DUMMY_VAR__);


        try {
            stan::math::assign(mu_a, (exp(phi_a) / ((((exp(phi_a) + exp(phi_b)) + exp(phi_c)) + exp(phi_d)) + exp(phi_e))));
            stan::math::assign(mu_b, (exp(phi_b) / ((((exp(phi_a) + exp(phi_b)) + exp(phi_c)) + exp(phi_d)) + exp(phi_e))));
            stan::math::assign(mu_c, (exp(phi_c) / ((((exp(phi_a) + exp(phi_b)) + exp(phi_c)) + exp(phi_d)) + exp(phi_e))));
            stan::math::assign(mu_d, (exp(phi_d) / ((((exp(phi_a) + exp(phi_b)) + exp(phi_c)) + exp(phi_d)) + exp(phi_e))));
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e,current_statement_begin__);
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }

        // validate transformed parameters
        if (stan::math::is_uninitialized(mu_a)) {
            std::stringstream msg__;
            msg__ << "Undefined transformed parameter: mu_a";
            throw std::runtime_error(msg__.str());
        }
        if (stan::math::is_uninitialized(mu_b)) {
            std::stringstream msg__;
            msg__ << "Undefined transformed parameter: mu_b";
            throw std::runtime_error(msg__.str());
        }
        if (stan::math::is_uninitialized(mu_c)) {
            std::stringstream msg__;
            msg__ << "Undefined transformed parameter: mu_c";
            throw std::runtime_error(msg__.str());
        }
        if (stan::math::is_uninitialized(mu_d)) {
            std::stringstream msg__;
            msg__ << "Undefined transformed parameter: mu_d";
            throw std::runtime_error(msg__.str());
        }

        const char* function__ = "validate transformed params";
        (void) function__;  // dummy to suppress unused var warning

        // model body
        try {

            lp_accum__.add(uniform_log<propto__>(sigma, 0, 1));
            lp_accum__.add(normal_log<propto__>(phi_a, 0, 1));
            lp_accum__.add(normal_log<propto__>(phi_e, 0, 1));
            lp_accum__.add(normal_log<propto__>(phi_d, 0, 1));
            lp_accum__.add(normal_log<propto__>(phi_c, 0, 1));
            lp_accum__.add(normal_log<propto__>(phi_b, 0, 1));
            lp_accum__.add(normal_log<propto__>(very_distracting, mu_a, sigma));
            lp_accum__.add(normal_log<propto__>(distracting, mu_b, sigma));
            lp_accum__.add(normal_log<propto__>(neutral, mu_c, sigma));
            lp_accum__.add(normal_log<propto__>(productive, mu_d, sigma));
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e,current_statement_begin__);
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }

        lp_accum__.add(lp__);
        return lp_accum__.sum();

    } // log_prob()

    template <bool propto, bool jacobian, typename T_>
    T_ log_prob(Eigen::Matrix<T_,Eigen::Dynamic,1>& params_r,
               std::ostream* pstream = 0) const {
      std::vector<T_> vec_params_r;
      vec_params_r.reserve(params_r.size());
      for (int i = 0; i < params_r.size(); ++i)
        vec_params_r.push_back(params_r(i));
      std::vector<int> vec_params_i;
      return log_prob<propto,jacobian,T_>(vec_params_r, vec_params_i, pstream);
    }


    void get_param_names(std::vector<std::string>& names__) const {
        names__.resize(0);
        names__.push_back("phi_a");
        names__.push_back("phi_b");
        names__.push_back("phi_c");
        names__.push_back("phi_d");
        names__.push_back("phi_e");
        names__.push_back("sigma");
        names__.push_back("mu_a");
        names__.push_back("mu_b");
        names__.push_back("mu_c");
        names__.push_back("mu_d");
    }


    void get_dims(std::vector<std::vector<size_t> >& dimss__) const {
        dimss__.resize(0);
        std::vector<size_t> dims__;
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
    }

    template <typename RNG>
    void write_array(RNG& base_rng__,
                     std::vector<double>& params_r__,
                     std::vector<int>& params_i__,
                     std::vector<double>& vars__,
                     bool include_tparams__ = true,
                     bool include_gqs__ = true,
                     std::ostream* pstream__ = 0) const {
        vars__.resize(0);
        stan::io::reader<double> in__(params_r__,params_i__);
        static const char* function__ = "model_model_namespace::write_array";
        (void) function__; // dummy call to supress warning
        // read-transform, write parameters
        double phi_a = in__.scalar_constrain();
        double phi_b = in__.scalar_constrain();
        double phi_c = in__.scalar_constrain();
        double phi_d = in__.scalar_constrain();
        double phi_e = in__.scalar_constrain();
        double sigma = in__.scalar_lub_constrain(0,1);
        vars__.push_back(phi_a);
        vars__.push_back(phi_b);
        vars__.push_back(phi_c);
        vars__.push_back(phi_d);
        vars__.push_back(phi_e);
        vars__.push_back(sigma);

        if (!include_tparams__) return;
        // declare and define transformed parameters
        double lp__ = 0.0;
        (void) lp__; // dummy call to supress warning
        stan::math::accumulator<double> lp_accum__;

        double DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // suppress unused var warning

        double mu_a(0.0);
        (void) mu_a;  // dummy to suppress unused var warning
        stan::math::initialize(mu_a, std::numeric_limits<double>::quiet_NaN());
        stan::math::fill(mu_a,DUMMY_VAR__);
        double mu_b(0.0);
        (void) mu_b;  // dummy to suppress unused var warning
        stan::math::initialize(mu_b, std::numeric_limits<double>::quiet_NaN());
        stan::math::fill(mu_b,DUMMY_VAR__);
        double mu_c(0.0);
        (void) mu_c;  // dummy to suppress unused var warning
        stan::math::initialize(mu_c, std::numeric_limits<double>::quiet_NaN());
        stan::math::fill(mu_c,DUMMY_VAR__);
        double mu_d(0.0);
        (void) mu_d;  // dummy to suppress unused var warning
        stan::math::initialize(mu_d, std::numeric_limits<double>::quiet_NaN());
        stan::math::fill(mu_d,DUMMY_VAR__);


        try {
            stan::math::assign(mu_a, (exp(phi_a) / ((((exp(phi_a) + exp(phi_b)) + exp(phi_c)) + exp(phi_d)) + exp(phi_e))));
            stan::math::assign(mu_b, (exp(phi_b) / ((((exp(phi_a) + exp(phi_b)) + exp(phi_c)) + exp(phi_d)) + exp(phi_e))));
            stan::math::assign(mu_c, (exp(phi_c) / ((((exp(phi_a) + exp(phi_b)) + exp(phi_c)) + exp(phi_d)) + exp(phi_e))));
            stan::math::assign(mu_d, (exp(phi_d) / ((((exp(phi_a) + exp(phi_b)) + exp(phi_c)) + exp(phi_d)) + exp(phi_e))));
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e,current_statement_begin__);
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }

        // validate transformed parameters

        // write transformed parameters
        vars__.push_back(mu_a);
        vars__.push_back(mu_b);
        vars__.push_back(mu_c);
        vars__.push_back(mu_d);

        if (!include_gqs__) return;
        // declare and define generated quantities


        try {
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e,current_statement_begin__);
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }

        // validate generated quantities

        // write generated quantities
    }

    template <typename RNG>
    void write_array(RNG& base_rng,
                     Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                     Eigen::Matrix<double,Eigen::Dynamic,1>& vars,
                     bool include_tparams = true,
                     bool include_gqs = true,
                     std::ostream* pstream = 0) const {
      std::vector<double> params_r_vec(params_r.size());
      for (int i = 0; i < params_r.size(); ++i)
        params_r_vec[i] = params_r(i);
      std::vector<double> vars_vec;
      std::vector<int> params_i_vec;
      write_array(base_rng,params_r_vec,params_i_vec,vars_vec,include_tparams,include_gqs,pstream);
      vars.resize(vars_vec.size());
      for (int i = 0; i < vars.size(); ++i)
        vars(i) = vars_vec[i];
    }

    static std::string model_name() {
        return "model_model";
    }


    void constrained_param_names(std::vector<std::string>& param_names__,
                                 bool include_tparams__ = true,
                                 bool include_gqs__ = true) const {
        std::stringstream param_name_stream__;
        param_name_stream__.str(std::string());
        param_name_stream__ << "phi_a";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "phi_b";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "phi_c";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "phi_d";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "phi_e";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "sigma";
        param_names__.push_back(param_name_stream__.str());

        if (!include_gqs__ && !include_tparams__) return;
        param_name_stream__.str(std::string());
        param_name_stream__ << "mu_a";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "mu_b";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "mu_c";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "mu_d";
        param_names__.push_back(param_name_stream__.str());

        if (!include_gqs__) return;
    }


    void unconstrained_param_names(std::vector<std::string>& param_names__,
                                   bool include_tparams__ = true,
                                   bool include_gqs__ = true) const {
        std::stringstream param_name_stream__;
        param_name_stream__.str(std::string());
        param_name_stream__ << "phi_a";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "phi_b";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "phi_c";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "phi_d";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "phi_e";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "sigma";
        param_names__.push_back(param_name_stream__.str());

        if (!include_gqs__ && !include_tparams__) return;
        param_name_stream__.str(std::string());
        param_name_stream__ << "mu_a";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "mu_b";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "mu_c";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "mu_d";
        param_names__.push_back(param_name_stream__.str());

        if (!include_gqs__) return;
    }

}; // model

} // namespace




#endif
