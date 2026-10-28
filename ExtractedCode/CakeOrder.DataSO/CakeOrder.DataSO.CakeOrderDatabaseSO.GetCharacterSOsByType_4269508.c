// rea decompile_all
// name: CakeOrder.DataSO.CakeOrderDatabaseSO$$GetCharacterSOsByType
// address: 0x4269508
// body: available
// range: 0x4269508-0x426968f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4269688 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x426968c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_DataSO_CakeOrderDatabaseSO__GetCharacterSOsByType(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  if ((DAT_09516fd0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ab788);
    FUN_03f5c2a4(&DAT_091ab778);
    FUN_03f5c2a4(&DAT_0917bdc8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516fd0 = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_0917bdc8);
  FUN_057e0400(lVar3,DAT_091ab778);
  lVar8 = *(long *)(param_1 + 0x68);
  if (lVar8 != 0) {
    if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
      uVar9 = 0;
      uVar5 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
      do {
        if (uVar5 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar7 = *(long *)(lVar8 + 0x20 + uVar9 * 8);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = UnityEngine_Object__op_Equality(lVar7,0,0);
        lVar2 = DAT_091ab788;
        if ((uVar5 & 1) == 0) {
          if (lVar7 == 0) goto LAB_04269688;
          if (*(int *)(lVar7 + 0x3c) == param_2) {
            if (lVar3 == 0) goto LAB_04269688;
            lVar6 = *(long *)(lVar3 + 0x10);
            *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
            if (lVar6 == 0) goto LAB_04269688;
            uVar1 = *(uint *)(lVar3 + 0x18);
            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
              plVar4 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
              *plVar4 = lVar7;
              thunk_FUN_03f5d7b8(plVar4,lVar7);
            }
            else {
              FUN_057e0c68(lVar3,lVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
        uVar5 = (ulong)*(uint *)(lVar8 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((long)uVar9 < (long)(int)*(uint *)(lVar8 + 0x18));
    }
    return lVar3;
  }
LAB_04269688:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

