// rea decompile_all
// name: CakeOrder.DataSO.CakeOrderDatabaseSO$$GetCharacterSOById
// address: 0x4269b1c
// body: available
// range: 0x4269b1c-0x4269bb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4269b7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4269bb0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CakeOrder_DataSO_CakeOrderDatabaseSO__GetCharacterSOById(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  lVar2 = *(long *)(param_1 + 0x68);
  if (lVar2 != 0) {
    lVar3 = 4;
    do {
      uVar4 = (int)lVar3 - 4;
      if ((int)*(uint *)(lVar2 + 0x18) <= (int)uVar4) {
        return 0;
      }
      if (*(uint *)(lVar2 + 0x18) <= uVar4) {
LAB_04269bb0:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar2 = *(long *)(lVar2 + lVar3 * 8);
      if (lVar2 == 0) break;
      uVar1 = System_String__op_Equality(*(undefined8 *)(lVar2 + 0x18),param_2,0);
      if ((uVar1 & 1) != 0) {
        lVar2 = *(long *)(param_1 + 0x68);
        if (lVar2 != 0) {
          if (uVar4 < *(uint *)(lVar2 + 0x18)) {
            return *(undefined8 *)(lVar2 + lVar3 * 8);
          }
          goto LAB_04269bb0;
        }
        break;
      }
      lVar2 = *(long *)(param_1 + 0x68);
      lVar3 = lVar3 + 1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

