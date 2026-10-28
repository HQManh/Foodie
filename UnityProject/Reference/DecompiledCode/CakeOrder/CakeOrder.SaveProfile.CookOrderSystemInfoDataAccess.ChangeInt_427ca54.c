// rea decompile_all
// name: CakeOrder.SaveProfile.CookOrderSystemInfoDataAccess$$ChangeInt
// address: 0x427ca54
// body: available
// range: 0x427ca54-0x427cbdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x427cbd8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_SaveProfile_CookOrderSystemInfoDataAccess__ChangeInt
               (long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int local_3c;
  int local_38;
  int local_34;
  
  if ((DAT_0951709e & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919f990);
    FUN_03f5c2a4(&DAT_0919f9c8);
    FUN_03f5c2a4(&DAT_0919f9f0);
    FUN_03f5c2a4(&DAT_091b9dc0);
    FUN_03f5c2a4(&DAT_091fe798);
    DAT_0951709e = 1;
  }
  local_34 = 0;
  if ((param_3 == 0) || (*(long *)(param_1 + 0x28) == 0)) {
    return;
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x18);
  if (lVar1 != 0) {
    uVar2 = FUN_06fcbf70(lVar1,param_2,&local_34,DAT_0919f9c8);
    iVar5 = local_34;
    if ((uVar2 & 1) == 0) {
      if ((*(long *)(param_1 + 0x28) == 0) ||
         (lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x18), lVar1 == 0)) goto LAB_0427cbd8;
      FUN_06fca448(lVar1,param_2,param_3,DAT_0919f990);
      iVar5 = 0;
    }
    else {
      if ((*(long *)(param_1 + 0x28) == 0) ||
         (lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x18), lVar1 == 0)) goto LAB_0427cbd8;
      param_3 = local_34 + param_3;
      FUN_06fca434(lVar1,param_2,param_3,DAT_0919f9f0);
    }
    lVar1 = *(long *)(param_1 + 0x20);
    local_38 = iVar5;
    uVar3 = FUN_03f5c42c(DAT_09535420,&local_38);
    local_3c = param_3;
    uVar4 = FUN_03f5c42c(DAT_09535420,&local_3c);
    uVar3 = System_String__Format(DAT_091fe798,param_2,uVar3,uVar4,0);
    if (lVar1 != 0) {
      FUN_06077998(lVar1,uVar3,DAT_091b9dc0);
      return;
    }
  }
LAB_0427cbd8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

