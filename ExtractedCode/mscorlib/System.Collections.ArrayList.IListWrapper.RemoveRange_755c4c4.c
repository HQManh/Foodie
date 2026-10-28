// rea decompile_all
// name: System.Collections.ArrayList.IListWrapper$$RemoveRange
// address: 0x755c4c4
// body: available
// range: 0x755c4c4-0x755c6db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x755c624 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x755c690 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x755c6d8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Collections_ArrayList_IListWrapper__RemoveRange(long param_1,uint param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  
  if ((DAT_09521992 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091857d8);
    FUN_03f5c2a4(&DAT_09185f80);
    DAT_09521992 = 1;
  }
  if ((int)(param_3 | param_2) < 0) {
    puVar4 = &DAT_09219b28;
    if ((int)param_2 < 0) {
      puVar4 = &DAT_0921d350;
    }
    uVar6 = thunk_FUN_03fc39d4(puVar4);
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar7 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_09208d80);
    System_ArgumentOutOfRangeException___ctor(uVar7,uVar6,uVar5,0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091e5a48);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar7,uVar6);
  }
  plVar11 = *(long **)(param_1 + 0x28);
  if (plVar11 != (long *)0x0) {
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_091857d8) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_0755c570;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar11,DAT_091857d8,1);
LAB_0755c570:
    iVar3 = (*(code *)*puVar4)(plVar11,puVar4[1]);
    if ((int)(iVar3 - param_2) < (int)param_3) {
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar6 = thunk_FUN_03f9944c();
      uVar7 = thunk_FUN_03fc39d4(&DAT_09209710);
      System_ArgumentException___ctor(uVar6,uVar7,0);
      uVar7 = thunk_FUN_03fc39d4(&DAT_091e5a48);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar6,uVar7);
    }
    if (0 < (int)param_3) {
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      do {
        plVar11 = *(long **)(param_1 + 0x28);
        if (plVar11 == (long *)0x0) goto LAB_0755c624;
        lVar8 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_09185f80) {
              puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 10) * 0x10 + 0x138);
              goto LAB_0755c5fc;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09185f80,10);
LAB_0755c5fc:
        (*(code *)*puVar4)(plVar11,param_2,puVar4[1]);
        uVar2 = param_3 - 1;
        bVar1 = 0 < (int)param_3;
        param_3 = uVar2;
      } while (uVar2 != 0 && bVar1);
    }
    return;
  }
LAB_0755c624:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

