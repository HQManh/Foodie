// rea decompile_all
// name: System.Convert$$.cctor
// address: 0x7529b98
// body: available
// range: 0x7529b98-0x752a303 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x752a2ec to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x752a2f0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x752a2fc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x752a300 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Convert___cctor(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  if ((DAT_09521832 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fcc8);
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_091713e8);
    FUN_03f5c2a4(&DAT_09183158);
    FUN_03f5c2a4(&DAT_09171448);
    FUN_03f5c2a4(&DAT_09171520);
    FUN_03f5c2a4(&DAT_09171670);
    FUN_03f5c2a4(&DAT_091804c8);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_091f4358);
    FUN_03f5c2a4(&DAT_091f4430);
    DAT_09521832 = 1;
  }
  uVar1 = FUN_03f5c394(DAT_091804c8,0x100);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar1,DAT_091f4430,0);
  **(undefined8 **)(DAT_09182b88 + 0xb8) = uVar1;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09182b88 + 0xb8),uVar1);
  plVar2 = (long *)FUN_03f5c394(DAT_09180748,0x13);
  uVar1 = DAT_09171670;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_095354b8);
  }
  lVar3 = System_Type__GetTypeFromHandle(uVar1,0);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
LAB_0752a2f4:
    uVar1 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar1,0);
  }
  if ((int)plVar2[3] != 0) {
    plVar2[4] = lVar3;
    thunk_FUN_03f5d7b8(plVar2 + 4,lVar3);
    lVar3 = System_Type__GetTypeFromHandle(DAT_095353e8 + 0x20,0);
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
    goto LAB_0752a2f4;
    if ((*(uint *)(plVar2 + 3) & 0xfffffffe) != 0) {
      plVar2[5] = lVar3;
      thunk_FUN_03f5d7b8(plVar2 + 5,lVar3);
      lVar3 = System_Type__GetTypeFromHandle(DAT_091713e8,0);
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
      goto LAB_0752a2f4;
      if (2 < *(uint *)(plVar2 + 3)) {
        plVar2[6] = lVar3;
        thunk_FUN_03f5d7b8(plVar2 + 6,lVar3);
        lVar3 = System_Type__GetTypeFromHandle(DAT_09535400 + 0x20,0);
        if ((lVar3 != 0) &&
           (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
        goto LAB_0752a2f4;
        if ((*(uint *)(plVar2 + 3) & 0xfffffffc) != 0) {
          plVar2[7] = lVar3;
          thunk_FUN_03f5d7b8(plVar2 + 7,lVar3);
          lVar3 = System_Type__GetTypeFromHandle(DAT_09535460 + 0x20,0);
          if ((lVar3 != 0) &&
             (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
          goto LAB_0752a2f4;
          if (4 < *(uint *)(plVar2 + 3)) {
            plVar2[8] = lVar3;
            thunk_FUN_03f5d7b8(plVar2 + 8,lVar3);
            lVar3 = System_Type__GetTypeFromHandle(DAT_09535408 + 0x20,0);
            if ((lVar3 != 0) &&
               (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
            goto LAB_0752a2f4;
            if (5 < *(uint *)(plVar2 + 3)) {
              plVar2[9] = lVar3;
              thunk_FUN_03f5d7b8(plVar2 + 9,lVar3);
              lVar3 = System_Type__GetTypeFromHandle(DAT_095353f0 + 0x20,0);
              if ((lVar3 != 0) &&
                 (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
              goto LAB_0752a2f4;
              if (6 < *(uint *)(plVar2 + 3)) {
                plVar2[10] = lVar3;
                thunk_FUN_03f5d7b8(plVar2 + 10,lVar3);
                lVar3 = System_Type__GetTypeFromHandle(DAT_09535410 + 0x20,0);
                if ((lVar3 != 0) &&
                   (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
                goto LAB_0752a2f4;
                if ((*(uint *)(plVar2 + 3) & 0xfffffff8) != 0) {
                  plVar2[0xb] = lVar3;
                  thunk_FUN_03f5d7b8(plVar2 + 0xb,lVar3);
                  lVar3 = System_Type__GetTypeFromHandle(DAT_09535418 + 0x20,0);
                  if ((lVar3 != 0) &&
                     (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)
                     ) goto LAB_0752a2f4;
                  if (8 < *(uint *)(plVar2 + 3)) {
                    plVar2[0xc] = lVar3;
                    thunk_FUN_03f5d7b8(plVar2 + 0xc,lVar3);
                    lVar3 = System_Type__GetTypeFromHandle(DAT_09535420 + 0x20,0);
                    if ((lVar3 != 0) &&
                       (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar2 + 0x40)),
                       lVar4 == 0)) goto LAB_0752a2f4;
                    if (9 < *(uint *)(plVar2 + 3)) {
                      plVar2[0xd] = lVar3;
                      thunk_FUN_03f5d7b8(plVar2 + 0xd,lVar3);
                      lVar3 = System_Type__GetTypeFromHandle(DAT_09535428 + 0x20,0);
                      if ((lVar3 != 0) &&
                         (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar2 + 0x40)),
                         lVar4 == 0)) goto LAB_0752a2f4;
                      if (10 < *(uint *)(plVar2 + 3)) {
                        plVar2[0xe] = lVar3;
                        thunk_FUN_03f5d7b8(plVar2 + 0xe,lVar3);
                        lVar3 = System_Type__GetTypeFromHandle(DAT_09535440 + 0x20,0);
                        if ((lVar3 != 0) &&
                           (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar2 + 0x40)),
                           lVar4 == 0)) goto LAB_0752a2f4;
                        if (0xb < *(uint *)(plVar2 + 3)) {
                          plVar2[0xf] = lVar3;
                          thunk_FUN_03f5d7b8(plVar2 + 0xf,lVar3);
                          lVar3 = System_Type__GetTypeFromHandle(DAT_09535448 + 0x20,0);
                          if ((lVar3 != 0) &&
                             (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar2 + 0x40)),
                             lVar4 == 0)) goto LAB_0752a2f4;
                          if (0xc < *(uint *)(plVar2 + 3)) {
                            plVar2[0x10] = lVar3;
                            thunk_FUN_03f5d7b8(plVar2 + 0x10,lVar3);
                            lVar3 = System_Type__GetTypeFromHandle(DAT_09535450 + 0x20,0);
                            if ((lVar3 != 0) &&
                               (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar2 + 0x40)),
                               lVar4 == 0)) goto LAB_0752a2f4;
                            if (0xd < *(uint *)(plVar2 + 3)) {
                              plVar2[0x11] = lVar3;
                              thunk_FUN_03f5d7b8(plVar2 + 0x11,lVar3);
                              lVar3 = System_Type__GetTypeFromHandle(DAT_09535458 + 0x20,0);
                              if ((lVar3 != 0) &&
                                 (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar2 + 0x40)),
                                 lVar4 == 0)) goto LAB_0752a2f4;
                              if (0xe < *(uint *)(plVar2 + 3)) {
                                plVar2[0x12] = lVar3;
                                thunk_FUN_03f5d7b8(plVar2 + 0x12,lVar3);
                                lVar3 = System_Type__GetTypeFromHandle(DAT_09171520,0);
                                if ((lVar3 != 0) &&
                                   (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar2 + 0x40)
                                                              ), lVar4 == 0)) goto LAB_0752a2f4;
                                if ((*(uint *)(plVar2 + 3) & 0xfffffff0) != 0) {
                                  plVar2[0x13] = lVar3;
                                  thunk_FUN_03f5d7b8(plVar2 + 0x13,lVar3);
                                  lVar3 = System_Type__GetTypeFromHandle(DAT_09171448,0);
                                  if ((lVar3 != 0) &&
                                     (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)
                                                                        (*plVar2 + 0x40)),
                                     lVar4 == 0)) goto LAB_0752a2f4;
                                  if (0x10 < *(uint *)(plVar2 + 3)) {
                                    plVar2[0x14] = lVar3;
                                    thunk_FUN_03f5d7b8(plVar2 + 0x14,lVar3);
                                    lVar3 = System_Type__GetTypeFromHandle(DAT_095353e8 + 0x20,0);
                                    if ((lVar3 != 0) &&
                                       (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)
                                                                          (*plVar2 + 0x40)),
                                       lVar4 == 0)) goto LAB_0752a2f4;
                                    if (0x11 < *(uint *)(plVar2 + 3)) {
                                      plVar2[0x15] = lVar3;
                                      thunk_FUN_03f5d7b8(plVar2 + 0x15,lVar3);
                                      lVar3 = System_Type__GetTypeFromHandle(DAT_09535468 + 0x20,0);
                                      if ((lVar3 != 0) &&
                                         (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)
                                                                            (*plVar2 + 0x40)),
                                         lVar4 == 0)) goto LAB_0752a2f4;
                                      if (0x12 < *(uint *)(plVar2 + 3)) {
                                        plVar2[0x16] = lVar3;
                                        thunk_FUN_03f5d7b8(plVar2 + 0x16,lVar3);
                                        plVar5 = (long *)(*(long *)(DAT_09182b88 + 0xb8) + 8);
                                        *plVar5 = (long)plVar2;
                                        thunk_FUN_03f5d7b8(plVar5,plVar2);
                                        uVar1 = System_Type__GetTypeFromHandle
                                                          (DAT_09535470 + 0x20,0);
                                        puVar6 = (undefined8 *)
                                                 (*(long *)(DAT_09182b88 + 0xb8) + 0x10);
                                        *puVar6 = uVar1;
                                        thunk_FUN_03f5d7b8(puVar6,uVar1);
                                        uVar1 = FUN_03f5c394(DAT_0917fcc8,0x41);
                                        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                  (uVar1,DAT_091f4358,0);
                                        puVar6 = (undefined8 *)
                                                 (*(long *)(DAT_09182b88 + 0xb8) + 0x18);
                                        *puVar6 = uVar1;
                                        thunk_FUN_03f5d7b8(puVar6,uVar1);
                                        if (*(int *)(DAT_09183158 + 0xe4) == 0) {
                                          FUN_03f5c424();
                                        }
                                        *(undefined8 *)(*(long *)(DAT_09182b88 + 0xb8) + 0x20) =
                                             **(undefined8 **)(DAT_09183158 + 0xb8);
                                        thunk_FUN_03f5d7b8();
                                        return;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

