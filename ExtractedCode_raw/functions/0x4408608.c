// rea decompile_all
// name: CookingGraph.CookingGraphAsset.<>c__DisplayClass15_0$$<AuthoredMergeDurationFor>g__Visit|0
// address: 0x4408608
// body: available
// range: 0x4408608-0x4408b67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44088d4 to 0x53ec72c FUN_053ec72c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4408b50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4408b54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4408b58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4408b5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4408b64 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04408b60) */

void CookingGraph_CookingGraphAsset_<>c__DisplayClass15_0__<AuthoredMergeDurationFor>g__Visit_0
               (long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  if ((DAT_09517eba & 1) == 0) {
    FUN_03f5c2a4(&DAT_091828a0);
    FUN_03f5c2a4(&DAT_091c9d08);
    FUN_03f5c2a4(&DAT_091cb538);
    FUN_03f5c2a4(&DAT_09178d60);
    FUN_03f5c2a4(&DAT_09178db8);
    FUN_03f5c2a4(&DAT_09184f18);
    FUN_03f5c2a4(&DAT_091a8028);
    FUN_03f5c2a4(&DAT_091a8268);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a648);
    FUN_03f5c2a4(&DAT_0917ad28);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09186c00);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091e7150);
    FUN_03f5c2a4(&DAT_0918f160);
    FUN_03f5c2a4(&DAT_091e7158);
    FUN_03f5c2a4(&DAT_0918f168);
    DAT_09517eba = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Equality(param_2,0,0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = FUN_053ec72c(*(long *)(param_1 + 0x10),param_2,DAT_091a8028);
    if ((uVar1 & 1) == 0) {
      return;
    }
    if ((param_2 == (long *)0x0) || (*param_2 != DAT_09186c00)) {
      lVar2 = thunk_FUN_03f9944c(DAT_0918f160);
      System_Object___ctor(lVar2,0);
      lVar8 = DAT_09184f18;
      if (lVar2 != 0) {
        if (param_2 == (long *)0x0) {
          *(undefined8 *)(lVar2 + 0x10) = 0;
          plVar3 = (long *)0x0;
        }
        else {
          plVar3 = param_2;
          if (*param_2 != DAT_09184f18) {
            plVar3 = (long *)0x0;
          }
          *(long **)(lVar2 + 0x10) = plVar3;
          plVar3 = param_2;
          if (*param_2 != lVar8) {
            plVar3 = (long *)0x0;
          }
        }
        thunk_FUN_03f5d7b8((long *)(lVar2 + 0x10),plVar3);
        if (*(long *)(lVar2 + 0x10) == 0) {
          lVar2 = thunk_FUN_03f9944c(DAT_0918f168);
          System_Object___ctor(lVar2,0);
          lVar8 = DAT_091828a0;
          if (lVar2 != 0) {
            if (param_2 == (long *)0x0) {
              param_2 = (long *)0x0;
              *(undefined8 *)(lVar2 + 0x10) = 0;
            }
            else {
              plVar3 = param_2;
              if (*param_2 != DAT_091828a0) {
                plVar3 = (long *)0x0;
              }
              *(long **)(lVar2 + 0x10) = plVar3;
              if (*param_2 != lVar8) {
                param_2 = (long *)0x0;
              }
            }
            thunk_FUN_03f5d7b8((long *)(lVar2 + 0x10),param_2);
            if (*(long *)(lVar2 + 0x10) == 0) {
              return;
            }
            if (*(long *)(param_1 + 0x20) != 0) {
              uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa0);
              uVar7 = thunk_FUN_03f9944c(DAT_09178d60);
              FUN_05322d94(uVar7,lVar2,DAT_091e7158,0);
              lVar8 = FUN_04ae5fd0(uVar6,uVar7,DAT_091c9d08);
              if (lVar8 == 0) {
                uVar7 = 0;
              }
              else {
                uVar7 = *(undefined8 *)(lVar8 + 0x18);
              }
              CookingGraph_CookingGraphAsset_<>c__DisplayClass15_0__<AuthoredMergeDurationFor>g__Visit_0
                        (param_1,uVar7);
              return;
            }
          }
        }
        else if (*(long *)(param_1 + 0x20) != 0) {
          uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb0);
          lVar8 = *(long *)(lVar2 + 0x18);
          if (lVar8 == 0) {
            lVar8 = thunk_FUN_03f9944c(DAT_09178db8);
            FUN_05322d94(lVar8,lVar2,DAT_091e7150,0);
            *(long *)(lVar2 + 0x18) = lVar8;
            thunk_FUN_03f5d7b8((long *)(lVar2 + 0x18),lVar8);
          }
          plVar3 = (long *)FUN_04b0cafc(uVar7,lVar8,DAT_091cb538);
          if (plVar3 != (long *)0x0) {
            lVar8 = *plVar3;
            uVar1 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar1 != 0) {
              piVar5 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar5 + -2) == DAT_0917a648) {
                  puVar4 = (undefined8 *)(lVar8 + (long)*piVar5 * 0x10 + 0x138);
                  goto LAB_044088e4;
                }
                uVar1 = uVar1 - 1;
                piVar5 = piVar5 + 4;
              } while (uVar1 != 0);
            }
            puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917a648,0);
LAB_044088e4:
            plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
            do {
              if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar8 = *plVar3;
              uVar1 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar1 != 0) {
                piVar5 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar5 + -2) == DAT_09185b10) {
                    puVar4 = (undefined8 *)(lVar8 + (long)*piVar5 * 0x10 + 0x138);
                    goto LAB_04408960;
                  }
                  uVar1 = uVar1 - 1;
                  piVar5 = piVar5 + 4;
                } while (uVar1 != 0);
              }
              puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_04408960:
              uVar1 = (*(code *)*puVar4)(plVar3,puVar4[1]);
              if ((uVar1 & 1) == 0) {
                if (plVar3 == (long *)0x0) {
                  return;
                }
                lVar8 = *plVar3;
                uVar1 = (ulong)*(ushort *)(lVar8 + 0x12e);
                if (uVar1 == 0) goto LAB_04408a30;
                piVar5 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                goto LAB_04408a18;
              }
              if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar8 = *plVar3;
              uVar1 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar1 != 0) {
                piVar5 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar5 + -2) == DAT_0917ad28) {
                    puVar4 = (undefined8 *)(lVar8 + (long)*piVar5 * 0x10 + 0x138);
                    goto LAB_044089c4;
                  }
                  uVar1 = uVar1 - 1;
                  piVar5 = piVar5 + 4;
                } while (uVar1 != 0);
              }
              puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917ad28,0);
LAB_044089c4:
              lVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              CookingGraph_CookingGraphAsset_<>c__DisplayClass15_0__<AuthoredMergeDurationFor>g__Visit_0
                        (param_1,*(undefined8 *)(lVar8 + 0x18));
            } while( true );
          }
        }
      }
    }
    else if (*(long *)(param_1 + 0x18) != 0) {
      FUN_053ec72c(*(long *)(param_1 + 0x18),param_2,DAT_091a8268);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar1 = uVar1 - 1;
    piVar5 = piVar5 + 4;
    if (uVar1 == 0) break;
LAB_04408a18:
    if (*(long *)(piVar5 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar8 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_04408a4c;
    }
  }
LAB_04408a30:
  puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a58,0);
LAB_04408a4c:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}

