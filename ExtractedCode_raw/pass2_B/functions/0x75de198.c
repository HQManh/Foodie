// rea decompile_all
// name: System.Array.SorterObjectArray$$InsertionSort
// address: 0x75de198
// body: available
// range: 0x75de198-0x75de457 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75de444 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75de448 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75de454 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Array_SorterObjectArray__InsertionSort(long *param_1,int param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  
  if ((DAT_09521eb9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185800);
    DAT_09521eb9 = 1;
  }
  if (param_2 < param_3) {
    uVar9 = (long)param_2;
    do {
      plVar12 = (long *)*param_1;
      if (plVar12 == (long *)0x0) {
LAB_075de448:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar2 = uVar9 + 1;
      if (*(uint *)(plVar12 + 3) <= (uint)uVar2) {
LAB_075de444:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar6 = param_1[1];
      lVar11 = plVar12[uVar9 + 5];
      if (lVar6 == 0) {
        lVar6 = 0;
      }
      else {
        if (*(uint *)(lVar6 + 0x18) <= (uint)uVar2) goto LAB_075de444;
        lVar6 = *(long *)(lVar6 + uVar2 * 8 + 0x20);
      }
      uVar16 = uVar9 & 0xffffffff;
      if ((long)param_2 <= (long)uVar9) {
        do {
          lVar8 = *param_1;
          if (lVar8 == 0) goto LAB_075de448;
          uVar15 = (uint)uVar16;
          if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_075de444;
          plVar12 = (long *)param_1[2];
          if (plVar12 == (long *)0x0) goto LAB_075de448;
          lVar14 = (long)(int)uVar15;
          lVar7 = *plVar12;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          uVar13 = *(undefined8 *)(lVar8 + lVar14 * 8 + 0x20);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_09185800) {
                puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_075de2c4;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar12,DAT_09185800,0);
LAB_075de2c4:
          iVar3 = (*(code *)*puVar4)(plVar12,lVar11,uVar13,puVar4[1]);
          uVar9 = uVar16;
          if (-1 < iVar3) break;
          plVar12 = (long *)*param_1;
          if (plVar12 == (long *)0x0) goto LAB_075de448;
          uVar5 = *(uint *)(plVar12 + 3);
          if (uVar5 <= uVar15) goto LAB_075de444;
          lVar8 = plVar12[lVar14 + 4];
          if (lVar8 != 0) {
            lVar7 = thunk_FUN_03f99350(lVar8,*(undefined8 *)(*plVar12 + 0x40));
            if (lVar7 == 0) goto LAB_075de44c;
            uVar5 = *(uint *)(plVar12 + 3);
          }
          uVar1 = uVar15 + 1;
          if (uVar5 <= uVar1) goto LAB_075de444;
          plVar12[(long)(int)uVar1 + 4] = lVar8;
          thunk_FUN_03f5d7b8(plVar12 + (long)(int)uVar1 + 4,lVar8);
          plVar12 = (long *)param_1[1];
          if (plVar12 != (long *)0x0) {
            uVar5 = *(uint *)(plVar12 + 3);
            if (uVar5 <= uVar15) goto LAB_075de444;
            lVar8 = plVar12[lVar14 + 4];
            if (lVar8 != 0) {
              lVar7 = thunk_FUN_03f99350(lVar8,*(undefined8 *)(*plVar12 + 0x40));
              if (lVar7 == 0) goto LAB_075de44c;
              uVar5 = *(uint *)(plVar12 + 3);
            }
            if (uVar5 <= uVar1) goto LAB_075de444;
            plVar12[(long)(int)uVar1 + 4] = lVar8;
            thunk_FUN_03f5d7b8(plVar12 + (long)(int)uVar1 + 4,lVar8);
          }
          uVar16 = (ulong)(uVar15 - 1);
          uVar9 = uVar16;
        } while (param_2 <= (int)(uVar15 - 1));
        plVar12 = (long *)*param_1;
        if (plVar12 == (long *)0x0) goto LAB_075de448;
      }
      if ((lVar11 != 0) &&
         (lVar8 = thunk_FUN_03f99350(lVar11,*(undefined8 *)(*plVar12 + 0x40)), lVar8 == 0)) {
LAB_075de44c:
        uVar13 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar13,0);
      }
      uVar15 = (int)uVar9 + 1;
      if (*(uint *)(plVar12 + 3) <= uVar15) goto LAB_075de444;
      plVar12[(long)(int)uVar15 + 4] = lVar11;
      thunk_FUN_03f5d7b8(plVar12 + (long)(int)uVar15 + 4,lVar11);
      plVar12 = (long *)param_1[1];
      if (plVar12 != (long *)0x0) {
        if ((lVar6 != 0) &&
           (lVar11 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar12 + 0x40)), lVar11 == 0))
        goto LAB_075de44c;
        if (*(uint *)(plVar12 + 3) <= uVar15) goto LAB_075de444;
        plVar12[(long)(int)uVar15 + 4] = lVar6;
        thunk_FUN_03f5d7b8(plVar12 + (long)(int)uVar15 + 4,lVar6);
      }
      uVar9 = uVar2;
    } while (uVar2 != (long)param_3);
  }
  return;
}

