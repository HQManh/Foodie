// rea decompile_all
// name: MessagePack.Resolvers.TypelessContractlessStandardResolver$$.cctor
// address: 0x73ad52c
// body: available
// range: 0x73ad52c-0x73adc93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73adc7c to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73adc80 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73adc8c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73adc90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Resolvers_TypelessContractlessStandardResolver___cctor(void)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((DAT_09520bc2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181838);
    FUN_03f5c2a4(&DAT_09182098);
    FUN_03f5c2a4(&DAT_09183e08);
    FUN_03f5c2a4(&DAT_09183e38);
    FUN_03f5c2a4(&DAT_09183e50);
    FUN_03f5c2a4(&DAT_09183e58);
    FUN_03f5c2a4(&DAT_09183e78);
    FUN_03f5c2a4(&DAT_09183eb0);
    FUN_03f5c2a4(&DAT_09184890);
    FUN_03f5c2a4(&DAT_091800b0);
    FUN_03f5c2a4(&DAT_09188190);
    FUN_03f5c2a4(&DAT_09188618);
    FUN_03f5c2a4(&DAT_0918c2f8);
    FUN_03f5c2a4(&DAT_0918c308);
    FUN_03f5c2a4(&DAT_09197038);
    FUN_03f5c2a4(&DAT_09174390);
    DAT_09520bc2 = 1;
  }
  if (*(int *)(DAT_09183e08 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(char **)(DAT_09183e08 + 0xb8) == '\0') {
    plVar1 = (long *)FUN_03f5c394(DAT_091800b0,10);
    if (*(int *)(DAT_09188618 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188618);
    }
    if (plVar1 != (long *)0x0) {
      lVar7 = **(long **)(DAT_09188618 + 0xb8);
      if ((lVar7 == 0) ||
         (lVar2 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar1 + 0x40)), lVar2 != 0)) {
        if ((int)plVar1[3] != 0) {
          plVar1[4] = lVar7;
          thunk_FUN_03f5d7b8(plVar1 + 4,lVar7);
          if (*(int *)(DAT_09184890 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar7 = **(long **)(DAT_09184890 + 0xb8);
          if ((lVar7 != 0) &&
             (lVar2 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
          goto LAB_073adc84;
          if ((*(uint *)(plVar1 + 3) & 0xfffffffe) != 0) {
            plVar1[5] = lVar7;
            thunk_FUN_03f5d7b8(plVar1 + 5,lVar7);
            if (*(int *)(DAT_09182098 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar7 = **(long **)(DAT_09182098 + 0xb8);
            if ((lVar7 != 0) &&
               (lVar2 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
            goto LAB_073adc84;
            if (2 < *(uint *)(plVar1 + 3)) {
              plVar1[6] = lVar7;
              thunk_FUN_03f5d7b8(plVar1 + 6,lVar7);
              if (*(int *)(DAT_09181838 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar7 = **(long **)(DAT_09181838 + 0xb8);
              if ((lVar7 != 0) &&
                 (lVar2 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
              goto LAB_073adc84;
              if ((*(uint *)(plVar1 + 3) & 0xfffffffc) != 0) {
                plVar1[7] = lVar7;
                thunk_FUN_03f5d7b8(plVar1 + 7,lVar7);
                if (*(int *)(DAT_09183e50 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                lVar7 = **(long **)(DAT_09183e50 + 0xb8);
                if ((lVar7 != 0) &&
                   (lVar2 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
                goto LAB_073adc84;
                if (4 < *(uint *)(plVar1 + 3)) {
                  plVar1[8] = lVar7;
                  thunk_FUN_03f5d7b8(plVar1 + 8,lVar7);
                  if (*(int *)(DAT_09183e58 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  lVar7 = **(long **)(DAT_09183e58 + 0xb8);
                  if ((lVar7 != 0) &&
                     (lVar2 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0)
                     ) goto LAB_073adc84;
                  if (5 < *(uint *)(plVar1 + 3)) {
                    plVar1[9] = lVar7;
                    thunk_FUN_03f5d7b8(plVar1 + 9,lVar7);
                    if (*(int *)(DAT_09183eb0 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    lVar7 = **(long **)(DAT_09183eb0 + 0xb8);
                    if ((lVar7 != 0) &&
                       (lVar2 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar1 + 0x40)),
                       lVar2 == 0)) goto LAB_073adc84;
                    if (6 < *(uint *)(plVar1 + 3)) {
                      plVar1[10] = lVar7;
                      thunk_FUN_03f5d7b8(plVar1 + 10,lVar7);
                      if (*(int *)(DAT_09183e78 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      lVar7 = **(long **)(DAT_09183e78 + 0xb8);
                      if ((lVar7 != 0) &&
                         (lVar2 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar1 + 0x40)),
                         lVar2 == 0)) goto LAB_073adc84;
                      if ((*(uint *)(plVar1 + 3) & 0xfffffff8) != 0) {
                        plVar1[0xb] = lVar7;
                        thunk_FUN_03f5d7b8(plVar1 + 0xb,lVar7);
                        if (*(int *)(DAT_09183e38 + 0xe4) == 0) {
                          FUN_03f5c424();
                        }
                        lVar7 = **(long **)(DAT_09183e38 + 0xb8);
                        if ((lVar7 != 0) &&
                           (lVar2 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar1 + 0x40)),
                           lVar2 == 0)) goto LAB_073adc84;
                        if (8 < *(uint *)(plVar1 + 3)) {
                          plVar1[0xc] = lVar7;
                          thunk_FUN_03f5d7b8(plVar1 + 0xc,lVar7);
                          if (*(int *)(DAT_0918c308 + 0xe4) == 0) {
                            FUN_03f5c424();
                          }
                          lVar7 = **(long **)(DAT_0918c308 + 0xb8);
                          if ((lVar7 != 0) &&
                             (lVar2 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar1 + 0x40)),
                             lVar2 == 0)) goto LAB_073adc84;
                          if (9 < *(uint *)(plVar1 + 3)) {
                            plVar3 = plVar1 + 0xd;
                            *plVar3 = lVar7;
                            goto LAB_073adbc0;
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
        goto LAB_073adc80;
      }
      goto LAB_073adc84;
    }
  }
  else {
    plVar1 = (long *)FUN_03f5c394(DAT_091800b0,6);
    if (*(int *)(DAT_09188618 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188618);
    }
    if (plVar1 != (long *)0x0) {
      lVar7 = **(long **)(DAT_09188618 + 0xb8);
      if ((lVar7 != 0) &&
         (lVar2 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0)) {
LAB_073adc84:
        uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar4,0);
      }
      if ((int)plVar1[3] != 0) {
        plVar1[4] = lVar7;
        thunk_FUN_03f5d7b8(plVar1 + 4,lVar7);
        if (*(int *)(DAT_09184890 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar7 = **(long **)(DAT_09184890 + 0xb8);
        if ((lVar7 != 0) &&
           (lVar2 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
        goto LAB_073adc84;
        if ((*(uint *)(plVar1 + 3) & 0xfffffffe) != 0) {
          plVar1[5] = lVar7;
          thunk_FUN_03f5d7b8(plVar1 + 5,lVar7);
          if (*(int *)(DAT_09182098 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar7 = **(long **)(DAT_09182098 + 0xb8);
          if ((lVar7 != 0) &&
             (lVar2 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
          goto LAB_073adc84;
          if (2 < *(uint *)(plVar1 + 3)) {
            plVar1[6] = lVar7;
            thunk_FUN_03f5d7b8(plVar1 + 6,lVar7);
            if (*(int *)(DAT_09181838 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar7 = **(long **)(DAT_09181838 + 0xb8);
            if ((lVar7 != 0) &&
               (lVar2 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
            goto LAB_073adc84;
            if ((*(uint *)(plVar1 + 3) & 0xfffffffc) != 0) {
              plVar1[7] = lVar7;
              thunk_FUN_03f5d7b8(plVar1 + 7,lVar7);
              if (*(int *)(DAT_09183e38 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar7 = **(long **)(DAT_09183e38 + 0xb8);
              if ((lVar7 != 0) &&
                 (lVar2 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
              goto LAB_073adc84;
              if (4 < *(uint *)(plVar1 + 3)) {
                plVar1[8] = lVar7;
                thunk_FUN_03f5d7b8(plVar1 + 8,lVar7);
                if (*(int *)(DAT_0918c308 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                lVar7 = **(long **)(DAT_0918c308 + 0xb8);
                if ((lVar7 != 0) &&
                   (lVar2 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
                goto LAB_073adc84;
                if (5 < *(uint *)(plVar1 + 3)) {
                  plVar3 = plVar1 + 9;
                  *plVar3 = lVar7;
LAB_073adbc0:
                  thunk_FUN_03f5d7b8(plVar3,lVar7);
                  uVar4 = thunk_FUN_03f9944c(DAT_09174390);
                  FUN_06bc0cb8(uVar4,plVar1,DAT_09197038);
                  puVar5 = (undefined8 *)(*(long *)(DAT_0918c2f8 + 0xb8) + 0x10);
                  *puVar5 = uVar4;
                  thunk_FUN_03f5d7b8(puVar5,uVar4);
                  uVar4 = thunk_FUN_03f9944c(DAT_0918c2f8);
                  MessagePack_Resolvers_TypelessContractlessStandardResolver___ctor();
                  **(undefined8 **)(DAT_0918c2f8 + 0xb8) = uVar4;
                  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_0918c2f8 + 0xb8),uVar4);
                  uVar6 = **(undefined8 **)(DAT_0918c2f8 + 0xb8);
                  uVar4 = thunk_FUN_03f9944c(DAT_09188190);
                  MessagePack_MessagePackSerializerOptions___ctor(uVar4,uVar6,0);
                  puVar5 = (undefined8 *)(*(long *)(DAT_0918c2f8 + 0xb8) + 8);
                  *puVar5 = uVar4;
                  thunk_FUN_03f5d7b8(puVar5,uVar4);
                  return;
                }
              }
            }
          }
        }
      }
LAB_073adc80:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

