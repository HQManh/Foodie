// rea decompile_all
// name: System.Array.SorterObjectArray$$DownHeap
// address: 0x75de720
// body: available
// range: 0x75de720-0x75deab7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75dea80 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75deaa4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75deaa8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75deab4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Array_SorterObjectArray__DownHeap(long *param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long local_70;
  
  if ((DAT_09521eb8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185800);
    DAT_09521eb8 = 1;
  }
  plVar13 = (long *)*param_1;
  if (plVar13 == (long *)0x0) {
LAB_075deaa8:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar3 = param_4 + -1;
  uVar1 = iVar3 + param_2;
  if (uVar1 < *(uint *)(plVar13 + 3)) {
    lVar9 = param_1[1];
    lVar12 = plVar13[(long)(int)uVar1 + 4];
    if (lVar9 == 0) {
      local_70 = 0;
    }
    else {
      if (*(uint *)(lVar9 + 0x18) <= uVar1) goto LAB_075deaa4;
      local_70 = *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
    }
    iVar2 = param_3;
    if (param_3 < 0) {
      iVar2 = param_3 + 1;
    }
    if ((int)param_2 <= iVar2 >> 1) {
      do {
        uVar1 = param_2 * 2;
        lVar9 = *param_1;
        if ((int)uVar1 < param_3) {
          if (lVar9 == 0) goto LAB_075deaa8;
          uVar4 = uVar1 + param_4;
          if ((*(uint *)(lVar9 + 0x18) <= uVar4 - 1) || (*(uint *)(lVar9 + 0x18) <= uVar4))
          goto LAB_075deaa4;
          plVar13 = (long *)param_1[2];
          if (plVar13 == (long *)0x0) goto LAB_075deaa8;
          lVar10 = *plVar13;
          uVar15 = *(undefined8 *)(lVar9 + (long)(int)uVar4 * 8 + 0x20);
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
          uVar14 = *(undefined8 *)(lVar9 + (long)(int)(uVar4 - 1) * 8 + 0x20);
          if (uVar8 != 0) {
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == DAT_09185800) {
                puVar6 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_075de874;
              }
              uVar8 = uVar8 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined8 *)FUN_03f95da8(plVar13,DAT_09185800,0);
LAB_075de874:
          uVar4 = (*(code *)*puVar6)(plVar13,uVar14,uVar15,puVar6[1]);
          lVar9 = *param_1;
          uVar1 = uVar1 | uVar4 >> 0x1f;
        }
        if (lVar9 == 0) goto LAB_075deaa8;
        uVar4 = iVar3 + uVar1;
        if (*(uint *)(lVar9 + 0x18) <= uVar4) goto LAB_075deaa4;
        plVar13 = (long *)param_1[2];
        if (plVar13 == (long *)0x0) goto LAB_075deaa8;
        lVar16 = (long)(int)uVar4;
        lVar10 = *plVar13;
        uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
        uVar14 = *(undefined8 *)(lVar9 + lVar16 * 8 + 0x20);
        if (uVar8 != 0) {
          piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == DAT_09185800) {
              puVar6 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_075de90c;
            }
            uVar8 = uVar8 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_03f95da8(plVar13,DAT_09185800,0);
LAB_075de90c:
        iVar5 = (*(code *)*puVar6)(plVar13,lVar12,uVar14,puVar6[1]);
        if (-1 < iVar5) break;
        plVar13 = (long *)*param_1;
        if (plVar13 == (long *)0x0) goto LAB_075deaa8;
        uVar7 = *(uint *)(plVar13 + 3);
        if (uVar7 <= uVar4) goto LAB_075deaa4;
        lVar9 = plVar13[lVar16 + 4];
        if (lVar9 != 0) {
          lVar10 = thunk_FUN_03f99350(lVar9,*(undefined8 *)(*plVar13 + 0x40));
          if (lVar10 == 0) goto LAB_075deaac;
          uVar7 = *(uint *)(plVar13 + 3);
        }
        param_2 = iVar3 + param_2;
        if (uVar7 <= param_2) goto LAB_075deaa4;
        plVar13[(long)(int)param_2 + 4] = lVar9;
        thunk_FUN_03f5d7b8(plVar13 + (long)(int)param_2 + 4,lVar9);
        plVar13 = (long *)param_1[1];
        if (plVar13 != (long *)0x0) {
          uVar7 = *(uint *)(plVar13 + 3);
          if (uVar7 <= uVar4) goto LAB_075deaa4;
          lVar9 = plVar13[lVar16 + 4];
          if (lVar9 != 0) {
            lVar10 = thunk_FUN_03f99350(lVar9,*(undefined8 *)(*plVar13 + 0x40));
            if (lVar10 == 0) goto LAB_075deaac;
            uVar7 = *(uint *)(plVar13 + 3);
          }
          if (uVar7 <= param_2) goto LAB_075deaa4;
          plVar13[(long)(int)param_2 + 4] = lVar9;
          thunk_FUN_03f5d7b8(plVar13 + (long)(int)param_2 + 4,lVar9);
        }
        param_2 = uVar1;
      } while ((int)uVar1 <= iVar2 >> 1);
      plVar13 = (long *)*param_1;
      if (plVar13 == (long *)0x0) goto LAB_075deaa8;
    }
    if ((lVar12 != 0) &&
       (lVar9 = thunk_FUN_03f99350(lVar12,*(undefined8 *)(*plVar13 + 0x40)), lVar9 == 0)) {
LAB_075deaac:
      uVar14 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar14,0);
    }
    param_2 = iVar3 + param_2;
    if (param_2 < *(uint *)(plVar13 + 3)) {
      plVar13[(long)(int)param_2 + 4] = lVar12;
      thunk_FUN_03f5d7b8(plVar13 + (long)(int)param_2 + 4,lVar12);
      plVar13 = (long *)param_1[1];
      if (plVar13 == (long *)0x0) {
        return;
      }
      if ((local_70 != 0) &&
         (lVar9 = thunk_FUN_03f99350(local_70,*(undefined8 *)(*plVar13 + 0x40)), lVar9 == 0))
      goto LAB_075deaac;
      if (param_2 < *(uint *)(plVar13 + 3)) {
        plVar13[(long)(int)param_2 + 4] = local_70;
        thunk_FUN_03f5d7b8(plVar13 + (long)(int)param_2 + 4,local_70);
        return;
      }
    }
  }
LAB_075deaa4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

