// rea decompile_all
// name: CakeOrder.DataSO.BuildingUpgradeTopologySO.<EnumerateDecorationPartsUpToGroup>d__15$$MoveNext
// address: 0x4268960
// body: available
// range: 0x4268960-0x4268b3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4268b38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4268b3c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CakeOrder_DataSO_BuildingUpgradeTopologySO_<EnumerateDecorationPartsUpToGroup>d__15__MoveNext
          (long param_1)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((DAT_09516fc9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516fc9 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    goto LAB_04268a78;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar5 == 0) {
LAB_04268b38:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if ((*(long *)(lVar5 + 0x20) != 0) && (*(int *)(*(long *)(lVar5 + 0x20) + 0x18) != 0)) {
      uVar2 = 0;
      *(undefined4 *)(param_1 + 0x38) = 0;
      while ((int)uVar2 <= *(int *)(param_1 + 0x30)) {
        if ((lVar5 == 0) || (lVar3 = *(long *)(lVar5 + 0x20), lVar3 == 0)) goto LAB_04268b38;
        if ((int)*(uint *)(lVar3 + 0x18) <= (int)uVar2) {
          return 0;
        }
        if (*(uint *)(lVar3 + 0x18) <= uVar2) {
LAB_04268b3c:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar3 = *(long *)(lVar3 + (long)(int)uVar2 * 8 + 0x20);
        if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x18), lVar3 != 0)) {
          *(long *)(param_1 + 0x40) = lVar3;
          thunk_FUN_03f5d7b8((long *)(param_1 + 0x40));
          uVar2 = 0;
          *(undefined4 *)(param_1 + 0x48) = 0;
          while( true ) {
            lVar3 = *(long *)(param_1 + 0x40);
            if (lVar3 == 0) goto LAB_04268b38;
            if ((int)*(uint *)(lVar3 + 0x18) <= (int)uVar2) break;
            if (*(uint *)(lVar3 + 0x18) <= uVar2) goto LAB_04268b3c;
            lVar3 = *(long *)(lVar3 + (long)(int)uVar2 * 8 + 0x20);
            if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x10), lVar3 != 0)) {
              *(long *)(param_1 + 0x50) = lVar3;
              thunk_FUN_03f5d7b8((long *)(param_1 + 0x50));
              uVar2 = 0;
              *(undefined4 *)(param_1 + 0x58) = 0;
              while( true ) {
                lVar3 = *(long *)(param_1 + 0x50);
                if (lVar3 == 0) goto LAB_04268b38;
                if ((int)*(uint *)(lVar3 + 0x18) <= (int)uVar2) break;
                if (*(uint *)(lVar3 + 0x18) <= uVar2) goto LAB_04268b3c;
                uVar4 = *(undefined8 *)(lVar3 + (long)(int)uVar2 * 8 + 0x20);
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar1 = UnityEngine_Object__op_Inequality(uVar4,0,0);
                if ((uVar1 & 1) != 0) {
                  *(undefined8 *)(param_1 + 0x18) = uVar4;
                  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar4);
                  *(undefined4 *)(param_1 + 0x10) = 1;
                  return 1;
                }
LAB_04268a78:
                uVar2 = *(int *)(param_1 + 0x58) + 1;
                *(uint *)(param_1 + 0x58) = uVar2;
              }
              *(undefined8 *)(param_1 + 0x50) = 0;
              thunk_FUN_03f5d7b8((long *)(param_1 + 0x50),0);
              uVar2 = *(uint *)(param_1 + 0x48);
            }
            uVar2 = uVar2 + 1;
            *(uint *)(param_1 + 0x48) = uVar2;
          }
          *(undefined8 *)(param_1 + 0x40) = 0;
          thunk_FUN_03f5d7b8((long *)(param_1 + 0x40),0);
          uVar2 = *(uint *)(param_1 + 0x38);
        }
        uVar2 = uVar2 + 1;
        *(uint *)(param_1 + 0x38) = uVar2;
      }
    }
  }
  return 0;
}

