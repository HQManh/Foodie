// rea decompile_all
// name: System.MulticastDelegate$$CombineImpl
// address: 0x7606620
// body: available
// range: 0x7606620-0x76068ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76068d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76068dc to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76068e8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76068ec to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_MulticastDelegate__CombineImpl(long param_1,long *param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  
  if ((DAT_09521ffb & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fe58);
    FUN_03f5c2a4(&DAT_09188528);
    DAT_09521ffb = 1;
  }
  if (param_2 == (long *)0x0) {
    return param_1;
  }
  if ((*(byte *)(*param_2 + 0x130) < *(byte *)(DAT_09188528 + 0x130)) ||
     (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09188528 + 0x130) * 8 + -8) !=
      DAT_09188528)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(param_2);
  }
  lVar3 = FUN_03f728f4(param_1);
  lVar6 = param_2[0xf];
  if (*(long *)(param_1 + 0x78) == 0) {
    if (lVar6 == 0) {
      plVar9 = (long *)FUN_03f5c394(DAT_0917fe58,2);
      if (plVar9 != (long *)0x0) {
        lVar6 = thunk_FUN_03f99350(param_1,*(undefined8 *)(*plVar9 + 0x40));
        if (lVar6 != 0) {
          if ((int)plVar9[3] != 0) {
            plVar9[4] = param_1;
            thunk_FUN_03f5d7b8(plVar9 + 4,param_1);
            lVar6 = thunk_FUN_03f99350(param_2,*(undefined8 *)(*plVar9 + 0x40));
            if (lVar6 == 0) goto LAB_076068e0;
            if ((*(uint *)(plVar9 + 3) & 0xfffffffe) != 0) {
              plVar9[5] = (long)param_2;
              thunk_FUN_03f5d7b8(plVar9 + 5,param_2);
              if (lVar3 != 0) {
                plVar7 = (long *)(lVar3 + 0x78);
                *plVar7 = (long)plVar9;
                goto LAB_076068bc;
              }
              goto LAB_076068d4;
            }
          }
LAB_076068ec:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
LAB_076068e0:
        uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar4,0);
      }
    }
    else {
      uVar4 = FUN_03f5c394(DAT_0917fe58,*(int *)(lVar6 + 0x18) + 1);
      if (lVar3 != 0) {
        puVar8 = (undefined8 *)(lVar3 + 0x78);
        *puVar8 = uVar4;
        thunk_FUN_03f5d7b8(puVar8,uVar4);
        plVar9 = (long *)*puVar8;
        if (plVar9 != (long *)0x0) {
          lVar6 = thunk_FUN_03f99350(param_1,*(undefined8 *)(*plVar9 + 0x40));
          if (lVar6 == 0) goto LAB_076068e0;
          if ((int)plVar9[3] == 0) goto LAB_076068ec;
          plVar9[4] = param_1;
          thunk_FUN_03f5d7b8(plVar9 + 4,param_1);
          lVar6 = param_2[0xf];
          if (lVar6 != 0) {
            uVar4 = *puVar8;
            uVar2 = *(undefined4 *)(lVar6 + 0x18);
            uVar5 = 1;
            goto LAB_076067b0;
          }
        }
      }
    }
  }
  else {
    iVar1 = *(int *)(*(long *)(param_1 + 0x78) + 0x18);
    if (lVar6 == 0) {
      uVar4 = FUN_03f5c394(DAT_0917fe58,iVar1 + 1);
      if (lVar3 != 0) {
        puVar8 = (undefined8 *)(lVar3 + 0x78);
        *puVar8 = uVar4;
        thunk_FUN_03f5d7b8(puVar8,uVar4);
        lVar6 = *(long *)(param_1 + 0x78);
        if (lVar6 != 0) {
          System_Array__Copy(lVar6,0,*puVar8,0,*(undefined4 *)(lVar6 + 0x18),0);
          plVar7 = (long *)*puVar8;
          if (plVar7 != (long *)0x0) {
            lVar6 = thunk_FUN_03f99350(param_2,*(undefined8 *)(*plVar7 + 0x40));
            if (lVar6 != 0) {
              if (*(uint *)(plVar7 + 3) != 0) {
                plVar7 = (long *)((long)plVar7 +
                                 ((long)(((ulong)*(uint *)(plVar7 + 3) << 0x20) + -0x100000000) >>
                                 0x1d) + 0x20);
                *plVar7 = (long)param_2;
                plVar9 = param_2;
LAB_076068bc:
                thunk_FUN_03f5d7b8(plVar7,plVar9);
                return lVar3;
              }
              goto LAB_076068ec;
            }
            goto LAB_076068e0;
          }
        }
      }
    }
    else {
      uVar4 = FUN_03f5c394(DAT_0917fe58,*(int *)(lVar6 + 0x18) + iVar1);
      if (lVar3 != 0) {
        puVar8 = (undefined8 *)(lVar3 + 0x78);
        *puVar8 = uVar4;
        thunk_FUN_03f5d7b8(puVar8,uVar4);
        lVar6 = *(long *)(param_1 + 0x78);
        if (lVar6 != 0) {
          System_Array__Copy(lVar6,0,*puVar8,0,*(undefined4 *)(lVar6 + 0x18),0);
          if ((*(long *)(param_1 + 0x78) != 0) && (lVar6 = param_2[0xf], lVar6 != 0)) {
            uVar4 = *puVar8;
            uVar5 = *(undefined4 *)(*(long *)(param_1 + 0x78) + 0x18);
            uVar2 = *(undefined4 *)(lVar6 + 0x18);
LAB_076067b0:
            System_Array__Copy(lVar6,0,uVar4,uVar5,uVar2,0);
            return lVar3;
          }
        }
      }
    }
  }
LAB_076068d4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

