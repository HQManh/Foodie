// rea decompile_all
// name: CakeOrder.UICurrencyCounter$$Awake
// address: 0x425aad0
// body: available
// range: 0x425aad0-0x425acfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x425acf8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_UICurrencyCounter__Awake(long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  if ((DAT_09516f43 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4b48);
    FUN_03f5c2a4(&DAT_091b4b50);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918ea68);
    FUN_03f5c2a4(&DAT_091dc888);
    FUN_03f5c2a4(&DAT_091dc880);
    FUN_03f5c2a4(&DAT_0918c678);
    DAT_09516f43 = 1;
  }
  lVar3 = param_1[0xf];
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(lVar3,0);
  if ((uVar1 & 1) != 0) {
    if (param_1[0xf] == 0) goto LAB_0425acf8;
    lVar3 = *(long *)(param_1[0xf] + 0x100);
    uVar2 = thunk_FUN_03f9944c(DAT_0918c678);
    UnityEngine_Events_UnityAction___ctor(uVar2,param_1,DAT_091dc880,0);
    if (lVar3 == 0) goto LAB_0425acf8;
    UnityEngine_Events_UnityEvent__AddListener(lVar3,uVar2,0);
  }
  uVar2 = CakeOrder_UICurrencyCounter__get_CurrencySO(param_1);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar2,0);
  if ((uVar1 & 1) != 0) {
    lVar3 = param_1[0xe];
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(lVar3,0);
    if ((uVar1 & 1) != 0) {
      lVar4 = param_1[0xe];
      lVar3 = CakeOrder_UICurrencyCounter__get_CurrencySO(param_1);
      if ((lVar3 == 0) || (lVar4 == 0)) goto LAB_0425acf8;
      UnityEngine_UI_Image__set_sprite(lVar4,*(undefined8 *)(lVar3 + 0x38),0);
    }
  }
  uVar1 = FUN_05a8f088(DAT_091b4b50);
  if ((uVar1 & 1) == 0) {
    return;
  }
  lVar3 = *(long *)(DAT_091b4b48 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  lVar3 = **(long **)(lVar3 + 0xb8);
  uVar2 = thunk_FUN_03f9944c(DAT_0918ea68);
  CakeOrder_SaveProfile_CakeItemCurrencyDataAccess_OnItemChangedDelegate___ctor
            (uVar2,param_1,DAT_091dc888,0);
  if (lVar3 != 0) {
    CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__add_onItemChanged(lVar3,uVar2,0);
                    /* WARNING: Could not recover jumptable at 0x0425ace4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
    return;
  }
LAB_0425acf8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

