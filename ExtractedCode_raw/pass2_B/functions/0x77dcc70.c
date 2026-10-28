// rea decompile_all
// name: _GAME.BaseGame.TimerManager$$AddCallbackTick
// address: 0x77dcc70
// body: available
// range: 0x77dcc70-0x77dceb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77dceb4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _GAME_BaseGame_TimerManager__AddCallbackTick(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  
  if ((DAT_0952302f & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d468);
    FUN_03f5c2a4(&DAT_0919da98);
    FUN_03f5c2a4(&DAT_0919d460);
    FUN_03f5c2a4(&DAT_0919dab0);
    FUN_03f5c2a4(&DAT_091763a8);
    FUN_03f5c2a4(&DAT_091764d8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918be20);
    DAT_0952302f = 1;
  }
  if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  _GAME_BaseGame_TimerManager__HookTick();
  if (param_1 != 0) {
    (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28));
  }
  if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (*(long *)(*(long *)(DAT_0918be20 + 0xb8) + 0x10) == 0) {
    uVar2 = thunk_FUN_03f9944c(DAT_091763a8);
    FUN_06eef750(uVar2,DAT_0919d460);
    if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar3 = (undefined8 *)(*(long *)(DAT_0918be20 + 0xb8) + 0x10);
    *puVar3 = uVar2;
    thunk_FUN_03f5d7b8(puVar3,uVar2);
  }
  if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (*(long *)(*(long *)(DAT_0918be20 + 0xb8) + 0x18) == 0) {
    uVar2 = thunk_FUN_03f9944c(DAT_091764d8);
    FUN_06eef750(uVar2,DAT_0919da98);
    if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar3 = (undefined8 *)(*(long *)(DAT_0918be20 + 0xb8) + 0x18);
    *puVar3 = uVar2;
    thunk_FUN_03f5d7b8(puVar3,uVar2);
  }
  if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar5 = *(long *)(DAT_0918be20 + 0xb8);
  iVar1 = *(int *)(lVar5 + 8);
  *(int *)(lVar5 + 8) = iVar1 + 1;
  if (*(long *)(lVar5 + 0x10) != 0) {
    FUN_06ef050c(*(long *)(lVar5 + 0x10),iVar1,param_1,DAT_0919d468);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Inequality(param_2,0,0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar5 = *(long *)(*(long *)(DAT_0918be20 + 0xb8) + 0x18);
      if (lVar5 == 0) goto LAB_077dceb4;
      FUN_06ef04f8(lVar5,iVar1,param_2,DAT_0919dab0);
    }
    return iVar1;
  }
LAB_077dceb4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

