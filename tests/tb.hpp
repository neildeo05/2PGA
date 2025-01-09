#include <verilated_vcd_c.h>
#include <verilated_fst_c.h>
#include <cinttypes>
#include "tbclock.h"

template<class Module> class TB {
public:
  unsigned long long cnt;
  unsigned long long max_cnt;
  uint64_t time_ps;
  Module* to;
  VerilatedFstC *trace;
  TBCLOCK cfg_clk;
  TBCLOCK clb_clk;

  TB(unsigned long long _max_cnt) {
    max_cnt = _max_cnt;
    to = new Module;
    cnt = 0;
    time_ps = 0;
    Verilated::traceEverOn(true);
    // 50 mhz configuration clock
    cfg_clk.init(20'000);
    // cfg_clk.init(4);
    // 20 mhz clock for the flip flop
    clb_clk.init(50'000);
    // clb_clk.init(32);
  }
  ~TB() {
    delete to;
  }
  virtual int should_tick() {
    return cnt != max_cnt;
  }
  virtual void start_trace (const char* fname) {
    trace = new VerilatedFstC;
    to->trace(trace, 99);
    trace->open(fname);
  }
  virtual void close_trace() {
    trace->close();
  }
  virtual void tick_old() {
    cnt++;
    to->cfg_clk = 0;
    to->eval();
    trace->dump((uint64_t)(10*cnt-2));
    to->cfg_clk = 1;
    to->eval();
    trace->dump((uint64_t)(10*cnt));
    to->cfg_clk = 0;
    to->eval();
    trace->dump((uint64_t)(10*cnt+5));
    trace->flush();
  }
  virtual void tick() {
    cnt++;
    // time to tick
    unsigned cfg_ttt = cfg_clk.time_to_tick();
    unsigned clb_ttt = clb_clk.time_to_tick();
    unsigned mintime = (cfg_ttt < clb_ttt) ? (cfg_ttt) : clb_ttt;

    to->eval();
    // trace->dump(time_ps + 1);

    to->cfg_clk = cfg_clk.advance(mintime);
    to->clb_clk = clb_clk.advance(mintime);

    time_ps += mintime;
    to->eval();

    trace->dump(time_ps + 1);

    

    // suggested to not flush for FST waveforms? Saves a lot of time to not flush per cycle
    // trace->flush();
    
  }
};
