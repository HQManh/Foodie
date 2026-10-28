// rea decompile_all
// name: _GAME.GameUI.DropItemController$$DropItemToTarget
// address: 0x774f364
// body: available
// range: 0x774f364-0x774f5bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x774f594 to 0x774f604 _GAME.GameUI.DropItemController$$ScheduleRequest (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x774f5b8 to 0x774f2f0 _GAME.GameUI.DropItemController$$CompleteWithoutFx (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x774f5bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_GameUI_DropItemController__DropItemToTarget
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if ((DAT_09522b93 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09179bb8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091ba678);
    FUN_03f5c2a4(&DAT_091e92c8);
    FUN_03f5c2a4(&DAT_091902b8);
    FUN_03f5c2a4(&DAT_09206240);
    DAT_09522b93 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_091902b8);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x20) = param_1;
    *(undefined4 *)(lVar1 + 0x24) = param_2;
    *(undefined4 *)(lVar1 + 0x28) = param_3;
    *(undefined4 *)(lVar1 + 0x2c) = param_4;
    *(undefined4 *)(lVar1 + 0x30) = param_5;
    *(undefined4 *)(lVar1 + 0x34) = param_6;
    lVar2 = *(long *)(DAT_091ba678 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    puVar4 = (undefined8 *)(lVar1 + 0x10);
    *puVar4 = **(undefined8 **)(lVar2 + 0xb8);
    thunk_FUN_03f5d7b8(puVar4);
    uVar5 = *puVar4;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Equality(uVar5,0,0);
    if ((((param_7 != 0) && ((uVar3 & 1) == 0)) && ((*(uint *)(lVar1 + 0x20) >> 0x17 & 0xff) < 0xff)
        ) && ((*(uint *)(lVar1 + 0x24) >> 0x17 & 0xff) < 0xff)) {
      if ((((*(uint *)(lVar1 + 0x28) >> 0x17 & 0xff) < 0xff) &&
          ((*(uint *)(lVar1 + 0x2c) >> 0x17 & 0xff) < 0xff)) &&
         ((*(uint *)(lVar1 + 0x30) >> 0x17 & 0xff) < 0xff)) {
        if ((*(uint *)(lVar1 + 0x34) >> 0x17 & 0xff) < 0xff) {
          uVar5 = _GAME_GameUI_DropItemController__CopyModel(param_7);
          *(undefined8 *)(lVar1 + 0x18) = uVar5;
          thunk_FUN_03f5d7b8();
          lVar2 = *(long *)(lVar1 + 0x10);
          uVar5 = thunk_FUN_03f9944c(DAT_09179bb8);
          FUN_0532f9ec(uVar5,lVar1,DAT_091e92c8,0);
          if (lVar2 != 0) {
            _GAME_GameUI_DropItemController__ScheduleRequest(0,lVar2,DAT_09206240,uVar5,param_8,0);
            return;
          }
          goto LAB_0774f5bc;
        }
      }
    }
    _GAME_GameUI_DropItemController__CompleteWithoutFx(param_8,DAT_09206240);
    return;
  }
LAB_0774f5bc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

