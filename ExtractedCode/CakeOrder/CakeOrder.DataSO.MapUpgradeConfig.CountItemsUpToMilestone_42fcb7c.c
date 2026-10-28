// rea decompile_all
// name: CakeOrder.DataSO.MapUpgradeConfig$$CountItemsUpToMilestone
// address: 0x42fcb7c
// body: available
// range: 0x42fcb7c-0x42fcd8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42fcd84 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42fcd88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int CakeOrder_DataSO_MapUpgradeConfig__CountItemsUpToMilestone(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  if ((DAT_0951752a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a86c8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951752a = 1;
  }
  uVar1 = CakeOrder_DataSO_MapUpgradeConfig__get_HasTopology(param_1);
  if ((uVar1 & 1) != 0) {
    if ((*(long *)(param_1 + 0x48) == 0) ||
       (lVar10 = *(long *)(*(long *)(param_1 + 0x48) + 0x20), lVar10 == 0)) {
LAB_042fcd88:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
      iVar6 = 0;
      uVar1 = 0;
      uVar2 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
      do {
        if (uVar2 <= uVar1) {
LAB_042fcd84:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar9 = *(long *)(lVar10 + uVar1 * 8 + 0x20);
        if (lVar9 != 0) {
          uVar7 = *(undefined8 *)(lVar9 + 0x10);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = UnityEngine_Object__op_Inequality(uVar7,0,0);
          if ((uVar2 & 1) != 0) {
            if (param_2 != 0) {
              if (*(long *)(lVar9 + 0x10) == 0) goto LAB_042fcd88;
              uVar2 = FUN_053ebc3c(param_2,*(undefined8 *)(*(long *)(lVar9 + 0x10) + 0x18),
                                   DAT_091a86c8);
              if ((uVar2 & 1) == 0) goto LAB_042fcc74;
            }
            iVar6 = iVar6 + 1;
          }
LAB_042fcc74:
          if (((uVar1 != *(int *)(lVar10 + 0x18) - 1) &&
              (lVar9 = *(long *)(lVar9 + 0x18), lVar9 != 0)) && (0 < (int)*(ulong *)(lVar9 + 0x18)))
          {
            uVar2 = 0;
            uVar3 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
            do {
              if (uVar3 <= uVar2) goto LAB_042fcd84;
              lVar5 = *(long *)(lVar9 + uVar2 * 8 + 0x20);
              if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x10), lVar5 != 0)) {
                if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
                  uVar3 = 0;
                  uVar4 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
                  do {
                    if (uVar4 <= uVar3) goto LAB_042fcd84;
                    lVar8 = *(long *)(lVar5 + 0x20 + uVar3 * 8);
                    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    uVar4 = UnityEngine_Object__op_Inequality(lVar8,0,0);
                    if ((uVar4 & 1) != 0) {
                      if (param_2 != 0) {
                        if (lVar8 == 0) goto LAB_042fcd88;
                        uVar4 = FUN_053ebc3c(param_2,*(undefined8 *)(lVar8 + 0x18),DAT_091a86c8);
                        if ((uVar4 & 1) == 0) goto LAB_042fcd24;
                      }
                      iVar6 = iVar6 + 1;
                    }
LAB_042fcd24:
                    uVar4 = (ulong)*(uint *)(lVar5 + 0x18);
                    uVar3 = uVar3 + 1;
                  } while ((long)uVar3 < (long)(int)*(uint *)(lVar5 + 0x18));
                }
                uVar3 = (ulong)*(uint *)(lVar9 + 0x18);
              }
              uVar2 = uVar2 + 1;
            } while ((long)uVar2 < (long)(int)uVar3);
          }
        }
        uVar1 = uVar1 + 1;
        uVar2 = (ulong)*(uint *)(lVar10 + 0x18);
        if ((long)(int)*(uint *)(lVar10 + 0x18) <= (long)uVar1) {
          return iVar6;
        }
      } while( true );
    }
  }
  return 0;
}

