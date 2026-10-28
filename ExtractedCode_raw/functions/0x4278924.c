// rea decompile_all
// name: CakeOrder.SaveProfile.CakeItemCurrencyDataAccess$$ChangeItemAmount
// address: 0x4278924
// body: available
// range: 0x4278924-0x4278af7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4278af4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__ChangeItemAmount
               (long param_1,undefined8 param_2,uint param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint local_38;
  uint local_34;
  
  if ((DAT_09517078 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919f990);
    FUN_03f5c2a4(&DAT_0919f9c8);
    FUN_03f5c2a4(&DAT_0919f9f0);
    FUN_03f5c2a4(&DAT_091b9dc0);
    FUN_03f5c2a4(&DAT_0920ccf8);
    DAT_09517078 = 1;
  }
  local_34 = 0;
  if (param_3 != 0) {
    if ((*(long *)(param_1 + 0x28) == 0) ||
       (lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x18), lVar1 == 0)) {
LAB_04278af4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = FUN_06fcbf70(lVar1,param_2,&local_34,DAT_0919f9c8);
    if ((uVar2 & 1) == 0) {
      local_34 = 0;
      if ((*(long *)(param_1 + 0x28) == 0) ||
         (lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x18), lVar1 == 0)) goto LAB_04278af4;
      param_3 = param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU);
      FUN_06fca448(lVar1,param_2,param_3,DAT_0919f990);
    }
    else {
      if ((*(long *)(param_1 + 0x28) == 0) ||
         (lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x18), lVar1 == 0)) goto LAB_04278af4;
      param_3 = local_34 + param_3 & ((int)(local_34 + param_3) >> 0x1f ^ 0xffffffffU);
      FUN_06fca434(lVar1,param_2,param_3,DAT_0919f9f0);
    }
    if (local_34 != param_3) {
      lVar1 = *(long *)(param_1 + 0x20);
      local_38 = param_3;
      uVar3 = FUN_03f5c42c(DAT_09535420,&local_38);
      uVar3 = System_String__Format(DAT_0920ccf8,param_2,uVar3,0);
      if (lVar1 == 0) goto LAB_04278af4;
      FUN_06077998(lVar1,uVar3,DAT_091b9dc0);
      lVar1 = *(long *)(param_1 + 0x30);
      if (lVar1 != 0) {
        (**(code **)(lVar1 + 0x18))
                  (*(undefined8 *)(lVar1 + 0x40),param_2,local_34,param_3,
                   *(undefined8 *)(lVar1 + 0x28));
      }
      CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__TrackCurrencyChange
                (param_2,local_34,param_3,param_4,param_5);
    }
  }
  return;
}

