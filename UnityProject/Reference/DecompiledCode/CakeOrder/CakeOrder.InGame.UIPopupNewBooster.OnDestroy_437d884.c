// rea decompile_all
// name: CakeOrder.InGame.UIPopupNewBooster$$OnDestroy
// address: 0x437d884
// body: available
// range: 0x437d884-0x437daeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x437dae8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIPopupNewBooster__OnDestroy(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 *puStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if ((DAT_09517952 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_091977b8);
    FUN_03f5c2a4(&DAT_091977e8);
    FUN_03f5c2a4(&DAT_0919c360);
    FUN_03f5c2a4(&DAT_0919c378);
    FUN_03f5c2a4(&DAT_091a5c30);
    FUN_03f5c2a4(&DAT_091a5c38);
    FUN_03f5c2a4(&DAT_091a5c40);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091be8d8);
    DAT_09517952 = 1;
  }
  local_60 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  *(undefined1 *)(param_1 + 0x120) = 1;
  DG_Tweening_ShortcutExtensions__DOKill(*(undefined8 *)(param_1 + 200),0,0);
  uVar3 = *(undefined8 *)(param_1 + 0xd0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
  if ((uVar1 & 1) != 0) {
    DG_Tweening_ShortcutExtensions__DOKill(*(undefined8 *)(param_1 + 0xd0),0,0);
  }
  uVar3 = *(undefined8 *)(param_1 + 0xe8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
  if ((uVar1 & 1) != 0) {
    DG_Tweening_ShortcutExtensions__DOKill(*(undefined8 *)(param_1 + 0xe8),0,0);
  }
  if ((*(long *)(param_1 + 0x118) != 0) &&
     (lVar2 = FUN_06f6b92c(*(long *)(param_1 + 0x118),DAT_0919c378), lVar2 != 0)) {
    FUN_0653bc44(&local_80,lVar2,DAT_091be8d8);
    local_b0 = 0;
    puStack_a8 = &local_80;
    while (uVar1 = FUN_0726aaec(&local_80,DAT_091a5c38), (uVar1 & 1) != 0) {
      uStack_98 = uStack_68;
      local_a0 = local_70;
      local_90 = local_60;
      uVar1 = FUN_0640f598(&local_a0,DAT_091977b8);
      if (((uVar1 & 1) != 0) && (uVar1 = FUN_0640f4f0(&local_a0,DAT_091977e8), (uVar1 & 1) != 0)) {
        uStack_c8 = uStack_98;
        local_d0 = local_a0;
        local_c0 = local_90;
        if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uStack_e8 = uStack_c8;
        local_f0 = local_d0;
        local_e0 = local_c0;
        UnityEngine_AddressableAssets_Addressables__ReleaseInstance(&local_f0,0);
      }
    }
    FUN_0726aae8(&local_80,DAT_091a5c30);
    if (*(long *)(param_1 + 0x118) != 0) {
      FUN_06f6bd94(*(long *)(param_1 + 0x118),DAT_0919c360);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

