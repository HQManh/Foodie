// rea decompile_all
// name: CakeOrder.SaveProfile.PlayerProfileDataAccess$$SetInt
// address: 0x4285644
// body: available
// range: 0x4285644-0x428578f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x428578c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_SaveProfile_PlayerProfileDataAccess__SetInt
               (long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 local_24;
  
  if ((DAT_0951713b & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919f990);
    FUN_03f5c2a4(&DAT_0919f9a0);
    FUN_03f5c2a4(&DAT_0919f9f0);
    FUN_03f5c2a4(&DAT_091b9dc0);
    FUN_03f5c2a4(&DAT_0920ccf8);
    DAT_0951713b = 1;
  }
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x18), lVar1 != 0)) {
    uVar2 = FUN_06fca63c(lVar1,param_2,DAT_0919f9a0);
    lVar1 = *(long *)(param_1 + 0x30);
    if ((uVar2 & 1) == 0) {
      if ((lVar1 == 0) || (*(long *)(lVar1 + 0x18) == 0)) goto LAB_0428578c;
      FUN_06fca448(*(long *)(lVar1 + 0x18),param_2,param_3,DAT_0919f990);
    }
    else {
      if ((lVar1 == 0) || (*(long *)(lVar1 + 0x18) == 0)) goto LAB_0428578c;
      FUN_06fca434(*(long *)(lVar1 + 0x18),param_2,param_3,DAT_0919f9f0);
    }
    lVar1 = *(long *)(param_1 + 0x20);
    local_24 = param_3;
    uVar3 = FUN_03f5c42c(DAT_09535420,&local_24);
    uVar3 = System_String__Format(DAT_0920ccf8,param_2,uVar3,0);
    if (lVar1 != 0) {
      FUN_06077998(lVar1,uVar3,DAT_091b9dc0);
      return;
    }
  }
LAB_0428578c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

