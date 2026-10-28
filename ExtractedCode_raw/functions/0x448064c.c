// rea decompile_all
// name: CookingGraph.CookingGraphIndex$$Leaves
// address: 0x448064c
// body: available
// range: 0x448064c-0x4480e97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4480e38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4480e3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4480e40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4480e44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4480e8c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4480e94 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04480e90) */

long CookingGraph_CookingGraphIndex__Leaves(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  
  if ((DAT_095180c1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091828a0);
    FUN_03f5c2a4(&DAT_091c9690);
    FUN_03f5c2a4(&DAT_091ca5f0);
    FUN_03f5c2a4(&DAT_091ca628);
    FUN_03f5c2a4(&DAT_091cb528);
    FUN_03f5c2a4(&DAT_091cb538);
    FUN_03f5c2a4(&DAT_09178dc0);
    FUN_03f5c2a4(&DAT_09178d60);
    FUN_03f5c2a4(&DAT_09178db8);
    FUN_03f5c2a4(&DAT_09178d68);
    FUN_03f5c2a4(&DAT_09184f18);
    FUN_03f5c2a4(&DAT_091a8028);
    FUN_03f5c2a4(&DAT_091a8268);
    FUN_03f5c2a4(&DAT_091a8290);
    FUN_03f5c2a4(&DAT_091a8020);
    FUN_03f5c2a4(&DAT_091a8258);
    FUN_03f5c2a4(&DAT_09179d90);
    FUN_03f5c2a4(&DAT_09179e10);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a458);
    FUN_03f5c2a4(&DAT_0917ab00);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09186c00);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091e7228);
    FUN_03f5c2a4(&DAT_091e7230);
    FUN_03f5c2a4(&DAT_091e73d0);
    FUN_03f5c2a4(&DAT_0918f230);
    FUN_03f5c2a4(&DAT_091e73d8);
    FUN_03f5c2a4(&DAT_0918f238);
    FUN_03f5c2a4(&DAT_0918f178);
    DAT_095180c1 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_0918f230);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    plVar9 = (long *)(lVar1 + 0x10);
    *plVar9 = param_2;
    thunk_FUN_03f5d7b8(plVar9,param_2);
    lVar2 = thunk_FUN_03f9944c(DAT_09179e10);
    FUN_053eb530(lVar2,DAT_091a8258);
    lVar10 = *plVar9;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Equality(lVar10,0,0);
    if ((uVar3 & 1) != 0) {
      return lVar2;
    }
    if (param_3 != 0) {
      uVar3 = FUN_053ec72c(param_3,*plVar9,DAT_091a8028);
      if ((uVar3 & 1) == 0) {
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar4 = thunk_FUN_03f9944c();
        uVar8 = thunk_FUN_03fc39d4(&DAT_091ffaf8);
        System_ArgumentException___ctor(uVar4,uVar8,0);
        uVar8 = thunk_FUN_03fc39d4(&DAT_091c6628);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar4,uVar8);
      }
      plVar11 = (long *)*plVar9;
      if (plVar11 != (long *)0x0) {
        if (*plVar11 == DAT_09186c00) {
          if (lVar2 != 0) {
            FUN_053ec72c(lVar2,plVar11,DAT_091a8268);
            return lVar2;
          }
          goto LAB_04480e44;
        }
        if (*plVar11 == DAT_091828a0) {
          lVar10 = plVar11[8];
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = UnityEngine_Object__op_Inequality(lVar10,0,0);
          if ((uVar3 & 1) != 0) {
            lVar1 = plVar11[8];
            uVar4 = thunk_FUN_03f9944c(DAT_09179d90);
            FUN_053eb620(uVar4,param_3,DAT_091a8020);
            uVar4 = CookingGraph_CookingGraphIndex__Leaves(param_1,lVar1,uVar4);
            if (lVar2 != 0) {
              FUN_053ec73c(lVar2,uVar4,DAT_091a8290);
              return lVar2;
            }
            goto LAB_04480e44;
          }
        }
      }
      lVar5 = thunk_FUN_03f9944c(DAT_0918f238);
      System_Object___ctor(lVar5,0);
      lVar10 = DAT_09184f18;
      if (lVar5 != 0) {
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) {
          plVar9 = (long *)0x0;
          *(undefined8 *)(lVar5 + 0x10) = 0;
        }
        else {
          plVar11 = plVar9;
          if (*plVar9 != DAT_09184f18) {
            plVar11 = (long *)0x0;
          }
          *(long **)(lVar5 + 0x10) = plVar11;
          if (*plVar9 != lVar10) {
            plVar9 = (long *)0x0;
          }
        }
        thunk_FUN_03f5d7b8((long *)(lVar5 + 0x10),plVar9);
        lVar10 = *(long *)(param_1 + 0x88);
        if (*(long *)(lVar5 + 0x10) == 0) {
          if (lVar10 == 0) goto LAB_04480e44;
          uVar4 = FUN_04ad43f0(*(undefined8 *)(lVar10 + 0xa0),*(undefined8 *)(lVar10 + 0xa8),
                               DAT_091c9690);
          lVar10 = *(long *)(lVar1 + 0x18);
          if (lVar10 == 0) {
            lVar10 = thunk_FUN_03f9944c(DAT_09178d60);
            FUN_05322d94(lVar10,lVar1,DAT_091e73d0,0);
            *(long *)(lVar1 + 0x18) = lVar10;
            thunk_FUN_03f5d7b8((long *)(lVar1 + 0x18),lVar10);
          }
          uVar4 = FUN_04b0cafc(uVar4,lVar10,DAT_091cb528);
          if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918f178);
          }
          puVar6 = *(undefined8 **)(DAT_0918f178 + 0xb8);
          lVar1 = puVar6[0x1e];
          if (lVar1 == 0) {
            if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
              FUN_03f5c424(DAT_0918f178);
              puVar6 = *(undefined8 **)(DAT_0918f178 + 0xb8);
            }
            uVar8 = *puVar6;
            lVar1 = thunk_FUN_03f9944c(DAT_09178d68);
            FUN_05324070(lVar1,uVar8,DAT_091e7230,0);
            plVar9 = (long *)(*(long *)(DAT_0918f178 + 0xb8) + 0xf0);
            *plVar9 = lVar1;
            thunk_FUN_03f5d7b8(plVar9,lVar1);
          }
          puVar6 = &DAT_091ca5f0;
        }
        else {
          if (lVar10 == 0) goto LAB_04480e44;
          uVar8 = *(undefined8 *)(lVar10 + 0xb0);
          uVar4 = thunk_FUN_03f9944c(DAT_09178db8);
          FUN_05322d94(uVar4,lVar5,DAT_091e73d8,0);
          uVar4 = FUN_04b0cafc(uVar8,uVar4,DAT_091cb538);
          if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918f178);
          }
          puVar6 = *(undefined8 **)(DAT_0918f178 + 0xb8);
          lVar1 = puVar6[0x1d];
          if (lVar1 == 0) {
            if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
              FUN_03f5c424(DAT_0918f178);
              puVar6 = *(undefined8 **)(DAT_0918f178 + 0xb8);
            }
            uVar8 = *puVar6;
            lVar1 = thunk_FUN_03f9944c(DAT_09178dc0);
            FUN_05324070(lVar1,uVar8,DAT_091e7228,0);
            plVar9 = (long *)(*(long *)(DAT_0918f178 + 0xb8) + 0xe8);
            *plVar9 = lVar1;
            thunk_FUN_03f5d7b8(plVar9,lVar1);
          }
          puVar6 = &DAT_091ca628;
        }
        plVar9 = (long *)FUN_04af8044(uVar4,lVar1,*puVar6);
        if (plVar9 != (long *)0x0) {
          lVar1 = *plVar9;
          uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
          if (uVar3 != 0) {
            piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_0917a458) {
                puVar6 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_04480c58;
              }
              uVar3 = uVar3 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar3 != 0);
          }
          puVar6 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917a458,0);
LAB_04480c58:
          plVar9 = (long *)(*(code *)*puVar6)(plVar9,puVar6[1]);
          do {
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar1 = *plVar9;
            uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
            if (uVar3 != 0) {
              piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == DAT_09185b10) {
                  puVar6 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_04480cec;
                }
                uVar3 = uVar3 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar3 != 0);
            }
            puVar6 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09185b10,0);
LAB_04480cec:
            uVar3 = (*(code *)*puVar6)(plVar9,puVar6[1]);
            if ((uVar3 & 1) == 0) {
              if (plVar9 == (long *)0x0) {
                return lVar2;
              }
              lVar1 = *plVar9;
              uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
              if (uVar3 == 0) goto LAB_04480de8;
              piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
              goto LAB_04480dd0;
            }
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar1 = *plVar9;
            uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
            if (uVar3 != 0) {
              piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == DAT_0917ab00) {
                  puVar6 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_04480d50;
                }
                uVar3 = uVar3 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar3 != 0);
            }
            puVar6 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917ab00,0);
LAB_04480d50:
            uVar4 = (*(code *)*puVar6)(plVar9,puVar6[1]);
            uVar8 = thunk_FUN_03f9944c(DAT_09179d90);
            FUN_053eb620(uVar8,param_3,DAT_091a8020);
            uVar4 = CookingGraph_CookingGraphIndex__Leaves(param_1,uVar4,uVar8);
            if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550(uVar4,uVar4);
            }
            FUN_053ec73c(lVar2,uVar4,DAT_091a8290);
          } while( true );
        }
      }
    }
  }
LAB_04480e44:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar7 = piVar7 + 4;
    if (uVar3 == 0) break;
LAB_04480dd0:
    if (*(long *)(piVar7 + -2) == DAT_09185a58) {
      puVar6 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_04480e04;
    }
  }
LAB_04480de8:
  puVar6 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09185a58,0);
LAB_04480e04:
  (*(code *)*puVar6)(plVar9,puVar6[1]);
  return lVar2;
}

