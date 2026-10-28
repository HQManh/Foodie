// rea decompile_all
// name: System.Collections.ArrayList.IListWrapper$$Sort
// address: 0x755c6dc
// body: available
// range: 0x755c6dc-0x755c993 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x755c8d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x755c8dc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x755c948 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x755c990 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Collections_ArrayList_IListWrapper__Sort
               (long *param_1,uint param_2,uint param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
  long *plVar11;
  
  if ((DAT_09521993 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091857d8);
    FUN_03f5c2a4(&DAT_09185f80);
    FUN_03f5c2a4(&DAT_09180318);
    DAT_09521993 = 1;
  }
  if ((int)(param_3 | param_2) < 0) {
    puVar2 = &DAT_09219b28;
    if ((int)param_2 < 0) {
      puVar2 = &DAT_0921d350;
    }
    uVar10 = thunk_FUN_03fc39d4(puVar2);
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar4 = thunk_FUN_03f9944c();
    uVar3 = thunk_FUN_03fc39d4(&DAT_09208d80);
    System_ArgumentOutOfRangeException___ctor(uVar4,uVar10,uVar3,0);
    uVar10 = thunk_FUN_03fc39d4(&DAT_091e5a50);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar10);
  }
  plVar11 = (long *)param_1[5];
  if (plVar11 != (long *)0x0) {
    lVar5 = *plVar11;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091857d8) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_0755c7a0;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar11,DAT_091857d8,1);
LAB_0755c7a0:
    iVar1 = (*(code *)*puVar2)(plVar11,puVar2[1]);
    if ((int)(iVar1 - param_2) < (int)param_3) {
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar10 = thunk_FUN_03f9944c();
      uVar4 = thunk_FUN_03fc39d4(&DAT_09209710);
      System_ArgumentException___ctor(uVar10,uVar4,0);
      uVar4 = thunk_FUN_03fc39d4(&DAT_091e5a50);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar10,uVar4);
    }
    lVar5 = FUN_03f5c394(DAT_09180318,param_3);
    (**(code **)(*param_1 + 0x378))
              (param_1,param_2,lVar5,0,param_3,*(undefined8 *)(*param_1 + 0x380));
    System_Array__Sort(lVar5,0,param_3,param_4,0);
    if (0 < (int)param_3) {
      if (lVar5 == 0) goto LAB_0755c8d8;
      uVar7 = 0;
      do {
        if (*(uint *)(lVar5 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar11 = (long *)param_1[5];
        if (plVar11 == (long *)0x0) goto LAB_0755c8d8;
        lVar6 = *plVar11;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        uVar10 = *(undefined8 *)(lVar5 + uVar7 * 8 + 0x20);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_09185f80) {
              puVar2 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_0755c894;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar2 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09185f80,1);
LAB_0755c894:
        (*(code *)*puVar2)(plVar11,(int)uVar7 + param_2,uVar10,puVar2[1]);
        uVar7 = uVar7 + 1;
      } while (uVar7 != param_3);
    }
    *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
    return;
  }
LAB_0755c8d8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

