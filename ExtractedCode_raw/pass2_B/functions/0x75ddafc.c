// rea decompile_all
// name: System.Array.SorterObjectArray$$SwapIfGreaterWithItems
// address: 0x75ddafc
// body: available
// range: 0x75ddafc-0x75ddd7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75ddd48 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75ddd68 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75ddd6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75ddd78 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Array_SorterObjectArray__SwapIfGreaterWithItems(long *param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  
  if ((DAT_09521eb6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185800);
    DAT_09521eb6 = 1;
  }
  if (param_2 == param_3) {
    return;
  }
  lVar6 = *param_1;
  if (lVar6 == 0) goto LAB_075ddd6c;
  if ((param_2 < *(uint *)(lVar6 + 0x18)) && (param_3 < *(uint *)(lVar6 + 0x18))) {
    plVar9 = (long *)param_1[2];
    if (plVar9 == (long *)0x0) {
LAB_075ddd6c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar13 = (long)(int)param_2;
    lVar12 = (long)(int)param_3;
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    uVar10 = *(undefined8 *)(lVar6 + lVar13 * 8 + 0x20);
    uVar11 = *(undefined8 *)(lVar6 + lVar12 * 8 + 0x20);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_09185800) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_075ddbd8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09185800,0);
LAB_075ddbd8:
    iVar1 = (*(code *)*puVar2)(plVar9,uVar10,uVar11,puVar2[1]);
    if (iVar1 < 1) {
      return;
    }
    plVar9 = (long *)*param_1;
    if (plVar9 == (long *)0x0) goto LAB_075ddd6c;
    uVar4 = *(uint *)(plVar9 + 3);
    if ((uVar4 <= param_2) || (uVar4 <= param_3)) goto LAB_075ddd68;
    lVar5 = plVar9[lVar12 + 4];
    lVar6 = plVar9[lVar13 + 4];
    if (lVar5 != 0) {
      lVar3 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar9 + 0x40));
      if (lVar3 == 0) goto LAB_075ddd70;
      uVar4 = *(uint *)(plVar9 + 3);
    }
    if (param_2 < uVar4) {
      plVar9[lVar13 + 4] = lVar5;
      thunk_FUN_03f5d7b8(plVar9 + lVar13 + 4,lVar5);
      plVar9 = (long *)*param_1;
      if (plVar9 == (long *)0x0) goto LAB_075ddd6c;
      if ((lVar6 != 0) &&
         (lVar5 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0)) {
LAB_075ddd70:
        uVar10 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar10,0);
      }
      if (param_3 < *(uint *)(plVar9 + 3)) {
        plVar9[lVar12 + 4] = lVar6;
        thunk_FUN_03f5d7b8(plVar9 + lVar12 + 4,lVar6);
        plVar9 = (long *)param_1[1];
        if (plVar9 == (long *)0x0) {
          return;
        }
        uVar4 = *(uint *)(plVar9 + 3);
        if ((param_2 < uVar4) && (param_3 < uVar4)) {
          lVar5 = plVar9[lVar12 + 4];
          lVar6 = plVar9[lVar13 + 4];
          if (lVar5 != 0) {
            lVar3 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar9 + 0x40));
            if (lVar3 == 0) goto LAB_075ddd70;
            uVar4 = *(uint *)(plVar9 + 3);
          }
          if (param_2 < uVar4) {
            plVar9[lVar13 + 4] = lVar5;
            thunk_FUN_03f5d7b8(plVar9 + lVar13 + 4,lVar5);
            plVar9 = (long *)param_1[1];
            if (plVar9 == (long *)0x0) goto LAB_075ddd6c;
            if ((lVar6 != 0) &&
               (lVar5 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0))
            goto LAB_075ddd70;
            if (param_3 < *(uint *)(plVar9 + 3)) {
              plVar9[lVar12 + 4] = lVar6;
              thunk_FUN_03f5d7b8(plVar9 + lVar12 + 4,lVar6);
              return;
            }
          }
        }
      }
    }
  }
LAB_075ddd68:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

