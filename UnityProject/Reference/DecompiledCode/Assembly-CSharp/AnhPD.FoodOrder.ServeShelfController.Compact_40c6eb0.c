// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController$$Compact
// address: 0x40c6eb0
// body: available
// range: 0x40c6eb0-0x40c6fdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40c6fc8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ServeShelfController__Compact
               (undefined1 param_1 [16],float param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  float fVar6;
  
  if ((DAT_09515f9f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091afe50);
    FUN_03f5c2a4(&DAT_091afe58);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09515f9f = 1;
  }
  lVar2 = *(long *)(param_3 + 0x90);
  if (lVar2 != 0) {
    iVar5 = 0;
    do {
      if (*(int *)(lVar2 + 0x18) <= iVar5) {
        return;
      }
      uVar3 = FUN_057e0998(lVar2,iVar5,DAT_091afe58);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar4 = UnityEngine_Object__op_Implicit(uVar3,0);
      if (((uVar4 & 1) != 0) &&
         (iVar1 = AnhPD_FoodOrder_ServeShelfController__get_LayoutSlots(param_3), iVar5 < iVar1)) {
        if (*(long *)(param_3 + 0x90) == 0) break;
        lVar2 = FUN_057e0998(*(long *)(param_3 + 0x90),iVar5,DAT_091afe58);
        fVar6 = (float)AnhPD_FoodOrder_ServeShelfController__get_Origin(param_3);
        if (lVar2 == 0) break;
        param_2 = param_2 + *(float *)(param_3 + 0x74) * 0.5;
        AnhPD_FoodOrder_ServePlate__SetSlot
                  (fVar6 + ((float)iVar5 + 0.5) * *(float *)(param_3 + 0x70),param_2,0,lVar2,0);
      }
      lVar2 = *(long *)(param_3 + 0x90);
      iVar5 = iVar5 + 1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

