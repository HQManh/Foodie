// rea decompile_all
// name: AnhPD.FoodOrder.OrderModel$$GetOpenOrderIndices
// address: 0x4205fc8
// body: available
// range: 0x4205fc8-0x420610b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42060f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_OrderModel__GetOpenOrderIndices(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  
  if ((DAT_09516cbb & 1) == 0) {
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_091b3510);
    FUN_03f5c2a4(&DAT_091b3518);
    FUN_03f5c2a4(&DAT_0917c520);
    DAT_09516cbb = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_0917c520);
  FUN_05796918(lVar2,DAT_091adc70);
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    iVar6 = 0;
    do {
      if (*(int *)(lVar3 + 0x18) <= iVar6) {
        return lVar2;
      }
      lVar3 = FUN_057e0998(lVar3,iVar6,DAT_091b3518);
      if (lVar3 == 0) break;
      uVar4 = AnhPD_FoodOrder_OrderModel_OrderSlot__get_IsOwed(lVar3,0);
      lVar3 = DAT_091adc88;
      if ((uVar4 & 1) != 0) {
        if (lVar2 == 0) break;
        lVar5 = *(long *)(lVar2 + 0x10);
        *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
        if (lVar5 == 0) break;
        uVar1 = *(uint *)(lVar2 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar2 + 0x18) = uVar1 + 1;
          *(int *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = iVar6;
        }
        else {
          FUN_057971a8(lVar2,iVar6,*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70)
                      );
        }
      }
      lVar3 = *(long *)(param_1 + 0x10);
      iVar6 = iVar6 + 1;
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

