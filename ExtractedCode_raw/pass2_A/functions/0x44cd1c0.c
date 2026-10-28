// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingCustomerAssets$$ReleaseAll
// address: 0x44cd1c0
// body: available
// range: 0x44cd1c0-0x44cd393 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44cd390 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingCustomerAssets__ReleaseAll(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if ((DAT_095182bc & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bf690);
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_091977b8);
    FUN_03f5c2a4(&DAT_0919ef60);
    FUN_03f5c2a4(&DAT_0919ef78);
    FUN_03f5c2a4(&DAT_091a64f8);
    FUN_03f5c2a4(&DAT_091a6500);
    FUN_03f5c2a4(&DAT_091a6508);
    FUN_03f5c2a4(&DAT_091be9c0);
    DAT_095182bc = 1;
  }
  local_80 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar4 = FUN_06f6b92c(*(long *)(param_1 + 0x10),DAT_0919ef78), lVar4 != 0)) {
    FUN_0653bc44(&local_a0,lVar4,DAT_091be9c0);
    while (uVar5 = FUN_0726aaec(&local_a0,DAT_091a6500), (uVar5 & 1) != 0) {
      uStack_b8 = uStack_88;
      local_c0 = local_90;
      local_b0 = local_80;
      uVar5 = FUN_0640f598(&local_c0,DAT_091977b8);
      uVar3 = local_b0;
      uVar2 = uStack_b8;
      uVar1 = local_c0;
      if ((uVar5 & 1) != 0) {
        if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uStack_68 = uVar2;
        local_70 = uVar1;
        local_60 = uVar3;
        FUN_04b71ee0(&local_70,DAT_091bf690);
      }
    }
    FUN_0726aae8(&local_a0,DAT_091a64f8);
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_06f6bd94(*(long *)(param_1 + 0x10),DAT_0919ef60);
      *(undefined8 *)(param_1 + 0x20) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x20),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

