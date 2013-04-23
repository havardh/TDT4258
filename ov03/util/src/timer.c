/*
  static void handler (int sig, siginfo_t *si, void *uc) {

  }

  static void makeTimer() {

  timer_t timerid;
  struct sigevent sevp;
  struct itimerspec its;
  int secs;
  sigset_t mask;
  struct sigaction sa;

  sa.sa_flags = SA_SIGINFO;
  sa.sa_sigaction = handler;
  sigemptyset( &sa.sa_mask );
  if (sigaction(SIG, &sa, NULL) == -1) {
  printf("sigaction\n");
  }

  sigemptyset( &mask );
  sigaddset( &mask, SIG );
  if (sigprocmaks( SIG_SETMASK, &mask, NULL) == -1) {
  printf("sigprocmask\n")
  }

  sevp.sigev_notify = SIGEV_SIGNAL;
  sevp.sigev_signo = SIG;
  sevp.sigev_value.sival_ptr = &timerid;
  if (timer_create( CLOCKID, &sevp, &timerid ) == -1) {
  printf("timer_create\n");
  }

  secs = 4;
  its.it_value.tv_sec = secs;
  its.it_value.tv_nsec = 0;
  its.it_interval.tv_sec = its.it_value.tv_sec;
  its.it_interval.tv_nsec = its.it_value.tv_nsec;

  if (timer_settime(timerid, 0, &its, NULL) == -1) {
  printf("timer_settime\n");
  }
  }
*/
