cmd_net/xfrm/built-in.o :=  unicore32-linux-ld -EL    -r -o net/xfrm/built-in.o net/xfrm/xfrm_policy.o net/xfrm/xfrm_state.o net/xfrm/xfrm_hash.o net/xfrm/xfrm_input.o net/xfrm/xfrm_output.o net/xfrm/xfrm_algo.o net/xfrm/xfrm_sysctl.o 
