// rea decompile_all
// name: CakeOrder.Home.UICakeSettingHome$$RefreshOverrideAuthorDropdown
// address: 0x433e5e4
// body: available
// range: 0x433e5e4-0x433e77b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x433e764 to 0x8425ef8 TMPro.TMP_Dropdown$$SetValueWithoutNotify (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x433e778 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UICakeSettingHome__RefreshOverrideAuthorDropdown(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((DAT_0951773d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c04c0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0917e070);
    FUN_03f5c2a4(&DAT_09189e78);
    FUN_03f5c2a4(&DAT_091f1250);
    FUN_03f5c2a4(&DAT_091954d0);
    DAT_0951773d = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_091954d0);
  CakeOrder_Home_UICakeSettingHome_<>c__DisplayClass65_0___ctor(lVar2,0);
  uVar4 = *(undefined8 *)(param_1 + 0x1d8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(uVar4,0);
  if ((uVar3 & 1) != 0) {
    if (*(int *)(DAT_09189e78 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_0951713f == '\0') {
      FUN_03f5c2a4(&DAT_09189e78);
      DAT_0951713f = '\x01';
    }
    if (*(int *)(DAT_09189e78 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(*(long *)(DAT_09189e78 + 0xb8) + 0x10);
      thunk_FUN_03f5d7b8();
      uVar5 = *(undefined8 *)(param_1 + 0x1e0);
      uVar4 = thunk_FUN_03f9944c(DAT_0917e070);
      FUN_05d78cfc(uVar4,lVar2,DAT_091f1250,0);
      uVar1 = FUN_04ee44c0(uVar5,uVar4,DAT_091c04c0);
      if (*(long *)(param_1 + 0x1d8) != 0) {
        TMPro_TMP_Dropdown__SetValueWithoutNotify
                  (*(long *)(param_1 + 0x1d8),uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU),0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  return;
}

