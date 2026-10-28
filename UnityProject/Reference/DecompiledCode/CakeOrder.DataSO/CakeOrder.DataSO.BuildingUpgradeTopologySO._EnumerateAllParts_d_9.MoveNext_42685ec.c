// rea decompile_all
// name: CakeOrder.DataSO.BuildingUpgradeTopologySO.<EnumerateAllParts>d__9$$MoveNext
// address: 0x42685ec
// body: available
// range: 0x42685ec-0x426886b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4268864 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4268868 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CakeOrder_DataSO_BuildingUpgradeTopologySO_<EnumerateAllParts>d__9__MoveNext(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  
  if ((DAT_09516fc7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516fc7 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    goto LAB_04268790;
  }
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    goto LAB_042686dc;
  }
  if (iVar1 != 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x20);
    if (lVar4 == 0) {
      return 0;
    }
    if (*(int *)(lVar4 + 0x18) == 0) {
      return 0;
    }
    *(long *)(param_1 + 0x30) = lVar4;
    thunk_FUN_03f5d7b8((long *)(param_1 + 0x30));
    uVar5 = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    while( true ) {
      plVar3 = (long *)(param_1 + 0x30);
      lVar4 = *plVar3;
      if (lVar4 == 0) break;
      if ((int)*(uint *)(lVar4 + 0x18) <= (int)uVar5) {
        *plVar3 = 0;
        thunk_FUN_03f5d7b8(plVar3,0);
        return 0;
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar5) {
LAB_04268868:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar3 = (long *)(param_1 + 0x40);
      *plVar3 = *(long *)(lVar4 + (long)(int)uVar5 * 8 + 0x20);
      thunk_FUN_03f5d7b8(plVar3);
      if (*plVar3 != 0) {
        uVar6 = *(undefined8 *)(*plVar3 + 0x10);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Inequality(uVar6,0,0);
        if ((uVar2 & 1) != 0) {
          if (*plVar3 != 0) {
            *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(*plVar3 + 0x10);
            thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18));
            *(undefined4 *)(param_1 + 0x10) = 1;
            return 1;
          }
          break;
        }
LAB_042686dc:
        if (*(long *)(param_1 + 0x40) == 0) break;
        lVar4 = *(long *)(*(long *)(param_1 + 0x40) + 0x18);
        if (lVar4 != 0) {
          *(long *)(param_1 + 0x48) = lVar4;
          thunk_FUN_03f5d7b8((long *)(param_1 + 0x48));
          uVar5 = 0;
          *(undefined4 *)(param_1 + 0x50) = 0;
          while( true ) {
            lVar4 = *(long *)(param_1 + 0x48);
            if (lVar4 == 0) goto LAB_04268864;
            if ((int)*(uint *)(lVar4 + 0x18) <= (int)uVar5) break;
            if (*(uint *)(lVar4 + 0x18) <= uVar5) goto LAB_04268868;
            lVar4 = *(long *)(lVar4 + (long)(int)uVar5 * 8 + 0x20);
            if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x10), lVar4 != 0)) {
              *(long *)(param_1 + 0x58) = lVar4;
              thunk_FUN_03f5d7b8((long *)(param_1 + 0x58));
              uVar5 = 0;
              *(undefined4 *)(param_1 + 0x60) = 0;
              while( true ) {
                lVar4 = *(long *)(param_1 + 0x58);
                if (lVar4 == 0) goto LAB_04268864;
                if ((int)*(uint *)(lVar4 + 0x18) <= (int)uVar5) break;
                if (*(uint *)(lVar4 + 0x18) <= uVar5) goto LAB_04268868;
                uVar6 = *(undefined8 *)(lVar4 + (long)(int)uVar5 * 8 + 0x20);
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar2 = UnityEngine_Object__op_Inequality(uVar6,0,0);
                if ((uVar2 & 1) != 0) {
                  *(undefined8 *)(param_1 + 0x18) = uVar6;
                  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar6);
                  *(undefined4 *)(param_1 + 0x10) = 2;
                  return 1;
                }
LAB_04268790:
                uVar5 = *(int *)(param_1 + 0x60) + 1;
                *(uint *)(param_1 + 0x60) = uVar5;
              }
              *(undefined8 *)(param_1 + 0x58) = 0;
              thunk_FUN_03f5d7b8((long *)(param_1 + 0x58),0);
              uVar5 = *(uint *)(param_1 + 0x50);
            }
            uVar5 = uVar5 + 1;
            *(uint *)(param_1 + 0x50) = uVar5;
          }
          *(undefined8 *)(param_1 + 0x48) = 0;
          thunk_FUN_03f5d7b8((long *)(param_1 + 0x48),0);
          *(undefined8 *)(param_1 + 0x40) = 0;
          thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x40),0);
        }
      }
      uVar5 = *(int *)(param_1 + 0x38) + 1;
      *(uint *)(param_1 + 0x38) = uVar5;
    }
  }
LAB_04268864:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

