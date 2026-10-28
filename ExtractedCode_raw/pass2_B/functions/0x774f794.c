// rea decompile_all
// name: _GAME.GameUI.DropItemController$$DropCloneItemToBag
// address: 0x774f794
// body: available
// range: 0x774f794-0x774f9af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x774f9a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x774f9ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_GameUI_DropItemController__DropCloneItemToBag(undefined4 param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_88;
  undefined8 *puStack_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  
  if ((DAT_09522b94 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a40d0);
    FUN_03f5c2a4(&DAT_091a40d8);
    FUN_03f5c2a4(&DAT_091a40e0);
    FUN_03f5c2a4(&DAT_091acd50);
    FUN_03f5c2a4(&DAT_091afa88);
    FUN_03f5c2a4(&DAT_091acd48);
    FUN_03f5c2a4(&DAT_091afa98);
    FUN_03f5c2a4(&DAT_0917c1f0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09522b94 = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x18);
    lVar4 = thunk_FUN_03f9944c(DAT_0917c1f0);
    FUN_057e0478(lVar4,uVar1,DAT_091acd48);
    FUN_057e185c(&local_88,param_2,DAT_091afa88);
    local_60 = local_78;
    uStack_68 = puStack_80;
    local_70 = local_88;
    local_88 = 0;
    puStack_80 = &local_70;
    while (uVar5 = FUN_071bd28c(&local_70,DAT_091a40d8), lVar3 = local_60, (uVar5 & 1) != 0) {
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = UnityEngine_Object__op_Inequality(lVar3,0,0);
      if ((uVar5 & 1) == 0) {
        uVar6 = 0;
      }
      else {
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar6 = UnityEngine_Component__get_gameObject(lVar3,0);
      }
      lVar3 = DAT_091acd50;
      if (lVar4 == 0) {
LAB_0774f9a8:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar7 = *(long *)(lVar4 + 0x10);
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_0774f9a8;
      uVar2 = *(uint *)(lVar4 + 0x18);
      if (uVar2 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = uVar6;
        thunk_FUN_03f5d7b8();
      }
      else {
        FUN_057e0c68(lVar4,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_071bd288(&local_70,DAT_091a40d0);
    _GAME_GameUI_DropItemController__DropCloneItemToBag(param_1,lVar4);
  }
  return;
}

