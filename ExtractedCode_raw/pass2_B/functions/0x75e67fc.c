// rea decompile_all
// name: System.DefaultBinder$$CreateParamOrder
// address: 0x75e67fc
// body: available
// range: 0x75e67fc-0x75e6a4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75e6a48 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e6a4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_DefaultBinder__CreateParamOrder(long param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 *puVar11;
  uint uVar12;
  int *piVar13;
  long lVar14;
  bool bVar15;
  ulong uVar16;
  long lVar17;
  
  if ((DAT_09521eec & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc40);
    DAT_09521eec = 1;
  }
  if (param_2 != 0) {
    lVar4 = FUN_03f5c394(DAT_0917fc40,*(undefined4 *)(param_2 + 0x18));
    uVar9 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
    if (0 < (int)*(ulong *)(param_2 + 0x18)) {
      if (param_1 == 0) goto LAB_075e6a4c;
      uVar10 = (ulong)*(uint *)(param_1 + 0x18);
      puVar11 = (undefined4 *)(param_1 + 0x20);
      uVar16 = uVar9;
      do {
        if (uVar10 == 0) goto LAB_075e6a48;
        uVar16 = uVar16 - 1;
        uVar10 = uVar10 - 1;
        *puVar11 = 0xffffffff;
        puVar11 = puVar11 + 1;
      } while (uVar16 != 0);
    }
    if (param_3 != 0) {
      bVar15 = *(int *)(param_3 + 0x18) < 1;
      if (0 < *(int *)(param_3 + 0x18)) {
        uVar16 = 0;
        do {
          iVar7 = (int)uVar9;
          if (iVar7 < 1) {
            lVar17 = 0;
          }
          else {
            lVar17 = 0;
            do {
              if ((*(uint *)(param_3 + 0x18) <= uVar16) || ((uint)uVar9 <= (uint)lVar17))
              goto LAB_075e6a48;
              plVar5 = *(long **)(param_2 + 0x20 + lVar17 * 8);
              if (plVar5 == (long *)0x0) goto LAB_075e6a4c;
              lVar14 = *(long *)(param_3 + uVar16 * 8 + 0x20);
              uVar6 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
              if (lVar14 == 0) goto LAB_075e6a4c;
              uVar9 = System_String__Equals(lVar14,uVar6,0);
              if ((uVar9 & 1) != 0) {
                if (param_1 == 0) goto LAB_075e6a4c;
                if (*(uint *)(param_1 + 0x18) <= (uint)lVar17) goto LAB_075e6a48;
                *(int *)(param_1 + 0x20 + lVar17 * 4) = (int)uVar16;
                if (lVar4 == 0) goto LAB_075e6a4c;
                if (*(uint *)(lVar4 + 0x18) <= uVar16) goto LAB_075e6a48;
                uVar9 = *(ulong *)(param_2 + 0x18);
                iVar7 = (int)uVar9;
                *(undefined1 *)(lVar4 + uVar16 + 0x20) = 1;
                uVar9 = uVar9 & 0xffffffff;
                goto LAB_075e6968;
              }
              uVar9 = *(ulong *)(param_2 + 0x18);
              lVar17 = lVar17 + 1;
              iVar7 = (int)uVar9;
            } while ((int)lVar17 < iVar7);
            uVar9 = uVar9 & 0xffffffff;
          }
LAB_075e6968:
          if ((int)lVar17 == iVar7) {
            return bVar15;
          }
          uVar16 = uVar16 + 1;
          bVar15 = (long)*(int *)(param_3 + 0x18) <= (long)uVar16;
        } while ((long)uVar16 < (long)*(int *)(param_3 + 0x18));
      }
      uVar8 = (uint)uVar9;
      if (0 < (int)uVar8) {
        if (param_1 == 0) goto LAB_075e6a4c;
        uVar2 = *(uint *)(param_1 + 0x18);
        uVar16 = 0;
        uVar12 = 0;
        do {
          if (uVar16 == uVar2) {
LAB_075e6a48:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          piVar13 = (int *)(param_1 + uVar16 * 4 + 0x20);
          uVar3 = uVar12;
          if ((*piVar13 == -1) && ((int)uVar12 < (int)uVar8)) {
            if (lVar4 == 0) goto LAB_075e6a4c;
            lVar17 = 0;
            uVar1 = uVar12;
            if (uVar12 <= *(uint *)(lVar4 + 0x18)) {
              uVar1 = *(uint *)(lVar4 + 0x18);
            }
            do {
              if ((uVar12 - uVar1) + (int)lVar17 == 0) goto LAB_075e6a48;
              if (*(char *)(lVar4 + 0x20 + (long)(int)uVar12 + lVar17) == '\0') {
                iVar7 = uVar12 + (int)lVar17;
                *piVar13 = iVar7;
                uVar3 = iVar7 + 1;
                break;
              }
              lVar17 = lVar17 + 1;
              uVar3 = uVar8;
            } while ((uVar12 - uVar8) + (int)lVar17 != 0);
          }
          uVar12 = uVar3;
          uVar16 = uVar16 + 1;
        } while (uVar16 != uVar9);
      }
      return bVar15;
    }
  }
LAB_075e6a4c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

