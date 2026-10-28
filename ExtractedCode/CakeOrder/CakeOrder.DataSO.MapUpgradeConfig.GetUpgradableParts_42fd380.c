// rea decompile_all
// name: CakeOrder.DataSO.MapUpgradeConfig$$GetUpgradableParts
// address: 0x42fd380
// body: available
// range: 0x42fd380-0x42fd667 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42fd660 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42fd664 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CakeOrder_DataSO_MapUpgradeConfig__GetUpgradableParts(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  if ((DAT_0951752e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091a86c8);
    FUN_03f5c2a4(&DAT_091aa570);
    FUN_03f5c2a4(&DAT_0917ba08);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091f7568);
    FUN_03f5c2a4(&DAT_09213eb0);
    DAT_0951752e = 1;
  }
  uVar2 = thunk_FUN_03f9944c(DAT_0917ba08);
  FUN_05667794(uVar2,DAT_091aa570);
  uVar3 = CakeOrder_DataSO_MapUpgradeConfig__get_HasTopology(param_1);
  if ((uVar3 & 1) != 0) {
    lVar4 = CakeOrder_DataSO_MapUpgradeConfig__GetBoughtLookup(param_1);
    if ((*(long *)(param_1 + 0x48) == 0) ||
       (lVar10 = *(long *)(*(long *)(param_1 + 0x48) + 0x20), lVar10 == 0)) {
LAB_042fd664:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
      uVar3 = 0;
      uVar6 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
      do {
        if (uVar6 <= uVar3) {
LAB_042fd660:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar9 = *(long *)(lVar10 + uVar3 * 8 + 0x20);
        if (lVar9 != 0) {
          lVar11 = *(long *)(lVar9 + 0x10);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar6 = UnityEngine_Object__op_Equality(lVar11,0,0);
          if ((uVar6 & 1) == 0) {
            if ((lVar11 == 0) || (lVar4 == 0)) goto LAB_042fd664;
            uVar6 = FUN_053ebc3c(lVar4,*(undefined8 *)(lVar11 + 0x18),DAT_091a86c8);
            if ((uVar6 & 1) == 0) {
              CakeOrder_DataSO_MapUpgradeConfig__AddIfHasConfig(param_1,uVar2,lVar11);
              return uVar2;
            }
            lVar9 = *(long *)(lVar9 + 0x18);
            if ((lVar9 != 0) && (0 < (int)*(ulong *)(lVar9 + 0x18))) {
              uVar6 = 0;
              uVar7 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
              bVar1 = true;
LAB_042fd54c:
              do {
                if (uVar7 <= uVar6) goto LAB_042fd660;
                lVar11 = *(long *)(lVar9 + uVar6 * 8 + 0x20);
                if (((lVar11 != 0) && (lVar11 = *(long *)(lVar11 + 0x10), lVar11 != 0)) &&
                   (0 < (int)*(ulong *)(lVar11 + 0x18))) {
                  uVar7 = 0;
                  uVar8 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
                  do {
                    if (uVar8 <= uVar7) goto LAB_042fd660;
                    lVar12 = *(long *)(lVar11 + 0x20 + uVar7 * 8);
                    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    uVar8 = UnityEngine_Object__op_Equality(lVar12,0,0);
                    if ((uVar8 & 1) == 0) {
                      if (lVar12 == 0) goto LAB_042fd664;
                      uVar8 = FUN_053ebc3c(lVar4,*(undefined8 *)(lVar12 + 0x18),DAT_091a86c8);
                      if ((uVar8 & 1) == 0) {
                        CakeOrder_DataSO_MapUpgradeConfig__AddIfHasConfig(param_1,uVar2,lVar12);
                        uVar7 = (ulong)*(uint *)(lVar9 + 0x18);
                        uVar6 = uVar6 + 1;
                        bVar1 = false;
                        if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar6) {
                          return uVar2;
                        }
                        goto LAB_042fd54c;
                      }
                    }
                    uVar8 = (ulong)*(uint *)(lVar11 + 0x18);
                    uVar7 = uVar7 + 1;
                  } while ((long)uVar7 < (long)(int)*(uint *)(lVar11 + 0x18));
                }
                uVar7 = (ulong)*(uint *)(lVar9 + 0x18);
                uVar6 = uVar6 + 1;
              } while ((long)uVar6 < (long)(int)*(uint *)(lVar9 + 0x18));
              if (!bVar1) {
                return uVar2;
              }
            }
          }
          else {
            uVar5 = System_String__Concat
                              (DAT_09213eb0,*(undefined8 *)(param_1 + 0x40),DAT_091f7568,0);
            if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_091835d0);
            }
            UnityEngine_Debug__LogWarning(uVar5,param_1,0);
          }
        }
        uVar6 = (ulong)*(uint *)(lVar10 + 0x18);
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)(int)*(uint *)(lVar10 + 0x18));
    }
  }
  return uVar2;
}

