// rea decompile_all
// name: CookingGraph.CookingRuntimeSettings$$ValidateLayer
// address: 0x447adf0
// body: available
// range: 0x447adf0-0x447bbc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x447b864 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x447b9f4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x447ba3c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x447ba84 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x447bacc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x447bad0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x447bb18 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x447bb1c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x447bb20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x447bb24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x447bb28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x447bb2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void CookingGraph_CookingRuntimeSettings__ValidateLayer(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  bool bVar8;
  long *plVar9;
  undefined8 local_128;
  undefined8 *puStack_120;
  long local_118;
  undefined8 local_110;
  undefined8 *puStack_108;
  long local_100;
  undefined8 local_f0;
  undefined8 *puStack_e8;
  long local_e0;
  undefined8 local_d0;
  undefined8 *puStack_c8;
  long local_c0;
  undefined8 local_b0;
  undefined8 *puStack_a8;
  long local_a0;
  undefined8 local_90;
  undefined8 *puStack_88;
  long local_80;
  uint local_74;
  undefined8 local_70;
  long local_68;
  
  if ((DAT_095180b0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091caeb0);
    FUN_03f5c2a4(&DAT_091cb568);
    FUN_03f5c2a4(&DAT_091a3fb0);
    FUN_03f5c2a4(&DAT_091a48f8);
    FUN_03f5c2a4(&DAT_091a2648);
    FUN_03f5c2a4(&DAT_091a3350);
    FUN_03f5c2a4(&DAT_091a2a20);
    FUN_03f5c2a4(&DAT_091a2a28);
    FUN_03f5c2a4(&DAT_091a4900);
    FUN_03f5c2a4(&DAT_091a3358);
    FUN_03f5c2a4(&DAT_091a2650);
    FUN_03f5c2a4(&DAT_091a3fb8);
    FUN_03f5c2a4(&DAT_091a3fc0);
    FUN_03f5c2a4(&DAT_091a3360);
    FUN_03f5c2a4(&DAT_091a4908);
    FUN_03f5c2a4(&DAT_091a2658);
    FUN_03f5c2a4(&DAT_091a2a30);
    FUN_03f5c2a4(&DAT_09178e58);
    FUN_03f5c2a4(&DAT_091a8698);
    FUN_03f5c2a4(&DAT_09179ee0);
    FUN_03f5c2a4(&DAT_091b0fc8);
    FUN_03f5c2a4(&DAT_091abbe8);
    FUN_03f5c2a4(&DAT_091ac5a0);
    FUN_03f5c2a4(&DAT_091ada10);
    FUN_03f5c2a4(&DAT_091abc48);
    FUN_03f5c2a4(&DAT_091ad9e0);
    FUN_03f5c2a4(&DAT_091af690);
    FUN_03f5c2a4(&DAT_091b1000);
    FUN_03f5c2a4(&DAT_091ac5d8);
    FUN_03f5c2a4(&DAT_091b0fd8);
    FUN_03f5c2a4(&DAT_091ac5b0);
    FUN_03f5c2a4(&DAT_091abbf8);
    FUN_03f5c2a4(&DAT_091ada20);
    FUN_03f5c2a4(&DAT_091af288);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09180338);
    FUN_03f5c2a4(&DAT_091e8010);
    FUN_03f5c2a4(&DAT_0918f738);
    FUN_03f5c2a4(&DAT_092240f8);
    FUN_03f5c2a4(&DAT_09221668);
    FUN_03f5c2a4(&DAT_09221178);
    FUN_03f5c2a4(&DAT_092196e0);
    FUN_03f5c2a4(&DAT_092196f0);
    FUN_03f5c2a4(&DAT_0921a798);
    FUN_03f5c2a4(&DAT_09224108);
    FUN_03f5c2a4(&DAT_091f9f58);
    FUN_03f5c2a4(&DAT_0921f508);
    FUN_03f5c2a4(&DAT_09221660);
    FUN_03f5c2a4(&DAT_0921f518);
    DAT_095180b0 = 1;
  }
  local_70 = 0;
  local_74 = 0;
  local_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_80 = 0;
  local_b0 = 0;
  puStack_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  local_d0 = 0;
  puStack_c8 = (undefined8 *)0x0;
  local_c0 = 0;
  local_f0 = 0;
  puStack_e8 = (undefined8 *)0x0;
  local_e0 = 0;
  local_110 = 0;
  puStack_108 = (undefined8 *)0x0;
  local_100 = 0;
  local_68 = param_2;
  thunk_FUN_03f5d7b8(&local_68,param_2);
  lVar3 = FUN_03f5c394(DAT_09180338,2);
  if ((local_68 != 0) && (lVar3 != 0)) {
    if (*(int *)(lVar3 + 0x18) == 0) {
LAB_0447bb1c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(local_68 + 0x28);
    thunk_FUN_03f5d7b8();
    if (local_68 != 0) {
      if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) == 0) goto LAB_0447bb1c;
      *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(local_68 + 0x30);
      thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x28));
      uVar6 = *(undefined8 *)(lVar3 + 0x18);
      local_74 = 0;
      if (0 < (int)uVar6) {
        do {
          if ((uint)uVar6 <= local_74) goto LAB_0447bb1c;
          lVar7 = *(long *)(lVar3 + (long)(int)local_74 * 8 + 0x20);
          if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
            CookingGraph_CookingRuntimeSettings__RequireSpeed
                      (*(undefined4 *)(lVar7 + 0x14),DAT_09221178);
            uVar6 = *(undefined8 *)(lVar3 + 0x18);
          }
          local_74 = local_74 + 1;
        } while ((int)local_74 < (int)uVar6);
      }
      if (local_68 != 0) {
        if ((((*(long *)(local_68 + 0x38) == 0) || (*(long *)(local_68 + 0x40) == 0)) ||
            (*(long *)(local_68 + 0x48) == 0)) ||
           ((*(long *)(local_68 + 0x50) == 0 || (*(long *)(local_68 + 0x58) == 0)))) {
          thunk_FUN_03fc39d4(&DAT_09181548);
          uVar6 = thunk_FUN_03f9944c();
          uVar5 = thunk_FUN_03fc39d4(&DAT_09209fb8);
          System_ArgumentException___ctor(uVar6,uVar5,0);
          uVar5 = thunk_FUN_03fc39d4(&DAT_091c6918);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar6,uVar5);
        }
        uVar6 = thunk_FUN_03f9944c(DAT_09179ee0);
        FUN_053eb530(uVar6,DAT_091a8698);
        local_70 = uVar6;
        thunk_FUN_03f5d7b8(&local_70,uVar6);
        if ((local_68 != 0) && (*(long *)(local_68 + 0x38) != 0)) {
          FUN_057e185c(&local_128,*(long *)(local_68 + 0x38),DAT_091abc48);
          local_80 = local_118;
          puStack_88 = puStack_120;
          local_90 = local_128;
          local_128 = 0;
          puStack_120 = &local_90;
          while (uVar4 = FUN_071bd28c(&local_90,DAT_091a2650), lVar3 = local_80, (uVar4 & 1) != 0) {
            if (local_80 == 0) {
              thunk_FUN_03fc39d4(&DAT_09181548);
              uVar6 = thunk_FUN_03f9944c();
              uVar5 = thunk_FUN_03fc39d4(&DAT_09209108);
              System_ArgumentException___ctor(uVar6,uVar5,0);
              uVar5 = thunk_FUN_03fc39d4(&DAT_091c6918);
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar6,uVar5);
            }
            if (*(char *)(local_80 + 0x10) != '\0') {
              uVar6 = *(undefined8 *)(local_80 + 0x18);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar4 = UnityEngine_Object__op_Inequality(uVar6,0,0);
              if ((uVar4 & 1) == 0) {
                if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar2 = 0;
              }
              else {
                if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar2 = FUN_057e1004(*(long *)(param_1 + 0x50),*(undefined8 *)(lVar3 + 0x18),
                                     DAT_091abbe8);
              }
              if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              local_74 = FUN_057e1a08(*(long *)(param_1 + 0x50),*(undefined8 *)(lVar3 + 0x18),
                                      DAT_091abbf8);
              uVar6 = System_Int32__ToString(&local_74,0);
              uVar6 = System_String__Concat(DAT_092196f0,uVar6,0);
              CookingGraph_CookingRuntimeSettings__<ValidateLayer>g__Require_27_0
                        (uVar2 & 1,uVar6,&local_70);
              CookingGraph_Execution_CookingExecution__RequireTime
                        ((double)*(float *)(lVar3 + 0x20),DAT_092196e0,0);
            }
          }
          FUN_071bd288(&local_90,DAT_091a2648);
          if ((local_68 != 0) && (*(long *)(local_68 + 0x40) != 0)) {
            FUN_057e185c(&local_128,*(long *)(local_68 + 0x40),DAT_091ad9e0);
            local_a0 = local_118;
            puStack_a8 = puStack_120;
            local_b0 = local_128;
            local_128 = 0;
            puStack_120 = &local_b0;
            while (uVar4 = FUN_071bd28c(&local_b0,DAT_091a3358), lVar3 = local_a0, (uVar4 & 1) != 0)
            {
              if (local_a0 == 0) {
                thunk_FUN_03fc39d4(&DAT_09181548);
                uVar6 = thunk_FUN_03f9944c();
                uVar5 = thunk_FUN_03fc39d4(&DAT_09209140);
                System_ArgumentException___ctor(uVar6,uVar5,0);
                uVar5 = thunk_FUN_03fc39d4(&DAT_091c6918);
                    /* WARNING: Subroutine does not return */
                FUN_03f5c414(uVar6,uVar5);
              }
              if (*(char *)(local_a0 + 0x10) != '\0') {
                uVar6 = *(undefined8 *)(local_a0 + 0x18);
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar4 = UnityEngine_Object__op_Inequality(uVar6,0,0);
                if ((uVar4 & 1) == 0) {
LAB_0447b43c:
                  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
LAB_0447b440:
                  uVar2 = 0;
                }
                else {
                  uVar6 = *(undefined8 *)(lVar3 + 0x20);
                  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar4 = UnityEngine_Object__op_Inequality(uVar6,0,0);
                  if ((uVar4 & 1) == 0) goto LAB_0447b43c;
                  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  uVar4 = FUN_057e1004(*(long *)(param_1 + 0x38),*(undefined8 *)(lVar3 + 0x18),
                                       DAT_091ada10);
                  if ((uVar4 & 1) == 0) goto LAB_0447b440;
                  if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  uVar2 = FUN_057e1004(*(long *)(param_1 + 0x50),*(undefined8 *)(lVar3 + 0x20),
                                       DAT_091abbe8);
                }
                if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                local_74 = FUN_057e1a08(*(long *)(param_1 + 0x38),*(undefined8 *)(lVar3 + 0x18),
                                        DAT_091ada20);
                uVar6 = System_Int32__ToString(&local_74,0);
                if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                local_74 = FUN_057e1a08(*(long *)(param_1 + 0x50),*(undefined8 *)(lVar3 + 0x20),
                                        DAT_091abbf8);
                uVar5 = System_Int32__ToString(&local_74,0);
                uVar6 = System_String__Concat(DAT_0921f518,uVar6,DAT_091f9f58,uVar5,0);
                CookingGraph_CookingRuntimeSettings__<ValidateLayer>g__Require_27_0
                          (uVar2 & 1,uVar6,&local_70);
                CookingGraph_Execution_CookingExecution__RequireTime
                          ((double)*(float *)(lVar3 + 0x28),DAT_0921f508,0);
              }
            }
            FUN_071bd288(&local_b0,DAT_091a3350);
            if ((local_68 != 0) && (*(long *)(local_68 + 0x48) != 0)) {
              FUN_057e185c(&local_128,*(long *)(local_68 + 0x48),DAT_091b1000);
              local_c0 = local_118;
              puStack_c8 = puStack_120;
              local_d0 = local_128;
              local_128 = 0;
              puStack_120 = &local_d0;
              while (uVar4 = FUN_071bd28c(&local_d0,DAT_091a4900), lVar3 = local_c0,
                    (uVar4 & 1) != 0) {
                if (local_c0 == 0) {
                  thunk_FUN_03fc39d4(&DAT_09181548);
                  uVar6 = thunk_FUN_03f9944c();
                  uVar5 = thunk_FUN_03fc39d4(&DAT_09209160);
                  System_ArgumentException___ctor(uVar6,uVar5,0);
                  uVar5 = thunk_FUN_03fc39d4(&DAT_091c6918);
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c414(uVar6,uVar5);
                }
                if (*(char *)(local_c0 + 0x10) != '\0') {
                  uVar6 = *(undefined8 *)(local_c0 + 0x18);
                  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar4 = UnityEngine_Object__op_Inequality(uVar6,0,0);
                  if ((uVar4 & 1) == 0) {
                    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    uVar2 = 0;
                  }
                  else {
                    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    uVar2 = FUN_057e1004(*(long *)(param_1 + 0x40),*(undefined8 *)(lVar3 + 0x18),
                                         DAT_091b0fc8);
                  }
                  if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  local_74 = FUN_057e1a08(*(long *)(param_1 + 0x40),*(undefined8 *)(lVar3 + 0x18),
                                          DAT_091b0fd8);
                  uVar6 = System_Int32__ToString(&local_74,0);
                  uVar6 = System_String__Concat(DAT_09224108,uVar6,0);
                  CookingGraph_CookingRuntimeSettings__<ValidateLayer>g__Require_27_0
                            (uVar2 & 1,uVar6,&local_70);
                  CookingGraph_Execution_CookingExecution__RequireTime
                            ((double)*(float *)(lVar3 + 0x20),DAT_092240f8,0);
                }
              }
              FUN_071bd288(&local_d0,DAT_091a48f8);
              if ((local_68 != 0) && (*(long *)(local_68 + 0x50) != 0)) {
                FUN_057e185c(&local_128,*(long *)(local_68 + 0x50),DAT_091af690);
                local_e0 = local_118;
                puStack_e8 = puStack_120;
                local_f0 = local_128;
                local_128 = 0;
                puStack_120 = &local_f0;
                while (uVar4 = FUN_071bd28c(&local_f0,DAT_091a3fb8), (uVar4 & 1) != 0) {
                  lVar3 = thunk_FUN_03f9944c(DAT_0918f738);
                  System_Object___ctor(lVar3,0);
                  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  plVar9 = (long *)(lVar3 + 0x10);
                  *plVar9 = local_e0;
                  thunk_FUN_03f5d7b8(plVar9);
                  if (*plVar9 == 0) {
                    thunk_FUN_03fc39d4(&DAT_09181548);
                    uVar6 = thunk_FUN_03f9944c();
                    uVar5 = thunk_FUN_03fc39d4(&DAT_09209158);
                    System_ArgumentException___ctor(uVar6,uVar5,0);
                    uVar5 = thunk_FUN_03fc39d4(&DAT_091c6918);
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c414(uVar6,uVar5);
                  }
                  if (*(char *)(*plVar9 + 0x10) != '\0') {
                    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    uVar5 = *(undefined8 *)(param_1 + 0x80);
                    uVar6 = thunk_FUN_03f9944c(DAT_09178e58);
                    FUN_05322d94(uVar6,lVar3,DAT_091e8010,0);
                    uVar6 = FUN_04b0cafc(uVar5,uVar6,DAT_091cb568);
                    lVar3 = FUN_04b049e4(uVar6,DAT_091caeb0);
                    uVar6 = DAT_09221668;
                    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    iVar1 = *(int *)(lVar3 + 0x18);
                    if (iVar1 == 1) {
                      if (*(long *)(param_1 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      local_74 = FUN_057e1a08(*(long *)(param_1 + 0x80),
                                              *(undefined8 *)(lVar3 + 0x20),DAT_091af288);
                    }
                    else {
                      local_74 = 0xffffffff;
                    }
                    uVar5 = System_Int32__ToString(&local_74,0);
                    uVar6 = System_String__Concat(uVar6,uVar5,0);
                    CookingGraph_CookingRuntimeSettings__<ValidateLayer>g__Require_27_0
                              (iVar1 == 1,uVar6,&local_70);
                    lVar3 = *plVar9;
                    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    lVar7 = *(long *)(lVar3 + 0x30);
                    if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
                      CookingGraph_Execution_CookingExecution__RequireTime
                                ((double)*(float *)(lVar7 + 0x14),DAT_09221660,0);
                      lVar3 = *plVar9;
                      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                    }
                    lVar3 = *(long *)(lVar3 + 0x40);
                    if (((lVar3 != 0) && (*(char *)(lVar3 + 0x10) != '\0')) &&
                       (*(int *)(lVar3 + 0x14) < 1)) {
                      thunk_FUN_03fc39d4(&DAT_09181548);
                      uVar6 = thunk_FUN_03f9944c();
                      uVar5 = thunk_FUN_03fc39d4(&DAT_0920b6b8);
                      System_ArgumentException___ctor(uVar6,uVar5,0);
                      uVar5 = thunk_FUN_03fc39d4(&DAT_091c6918);
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c414(uVar6,uVar5);
                    }
                  }
                }
                FUN_071bd288(&local_f0,DAT_091a3fb0);
                if ((local_68 != 0) && (*(long *)(local_68 + 0x58) != 0)) {
                  FUN_057e185c(&local_128,*(long *)(local_68 + 0x58),DAT_091ac5d8);
                  local_100 = local_118;
                  puStack_108 = puStack_120;
                  local_110 = local_128;
                  local_128 = 0;
                  puStack_120 = &local_110;
                  do {
                    do {
                      uVar4 = FUN_071bd28c(&local_110,DAT_091a2a28);
                      lVar3 = local_100;
                      if ((uVar4 & 1) == 0) {
                        FUN_071bd288(&local_110,DAT_091a2a20);
                        return;
                      }
                      if (local_100 == 0) {
                        thunk_FUN_03fc39d4(&DAT_09181548);
                        uVar6 = thunk_FUN_03f9944c();
                        uVar5 = thunk_FUN_03fc39d4(&DAT_09209120);
                        System_ArgumentException___ctor(uVar6,uVar5,0);
                        uVar5 = thunk_FUN_03fc39d4(&DAT_091c6918);
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c414(uVar6,uVar5);
                      }
                    } while (*(char *)(local_100 + 0x10) == '\0');
                    uVar6 = *(undefined8 *)(local_100 + 0x18);
                    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    uVar4 = UnityEngine_Object__op_Inequality(uVar6,0,0);
                    if ((uVar4 & 1) == 0) {
                      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
LAB_0447b930:
                      bVar8 = false;
                    }
                    else {
                      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      uVar4 = FUN_057e1004(*(long *)(param_1 + 0x58),*(undefined8 *)(lVar3 + 0x18),
                                           DAT_091ac5a0);
                      if ((uVar4 & 1) == 0) goto LAB_0447b930;
                      bVar8 = 0 < *(int *)(lVar3 + 0x20);
                    }
                    if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    local_74 = FUN_057e1a08(*(long *)(param_1 + 0x58),*(undefined8 *)(lVar3 + 0x18),
                                            DAT_091ac5b0);
                    uVar6 = System_Int32__ToString(&local_74,0);
                    uVar6 = System_String__Concat(DAT_0921a798,uVar6,0);
                    CookingGraph_CookingRuntimeSettings__<ValidateLayer>g__Require_27_0
                              (bVar8,uVar6,&local_70);
                  } while( true );
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

