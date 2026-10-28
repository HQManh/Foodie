// rea decompile_all
// name: CakeOrder.InGame.UIMoneyEffect$$Play
// address: 0x42abee8
// body: available
// range: 0x42abee8-0x42ac08f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42ac08c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIMoneyEffect__Play
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,int param_5,
               long param_6)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  if ((DAT_09517283 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b48d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517283 = 1;
  }
  uVar4 = *(undefined8 *)(param_4 + 0x28);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
  if ((uVar1 & 1) != 0) {
    uVar4 = *(undefined8 *)(param_4 + 0x20);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
    if ((uVar1 & 1) != 0) {
      CakeOrder_InGame_UIMoneyEffect__EnsureCanvas(param_4);
      uVar5 = CakeOrder_InGame_UIMoneyEffect__WorldToUiPosition(param_1,param_2,param_3,param_4);
      lVar2 = *(long *)(DAT_091b48d0 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      if (**(long **)(lVar2 + 0xb8) != 0) {
        CakeOrder_AudioManagerCakeOrder__PlaySfx
                  (0x3f800000,**(long **)(lVar2 + 0xb8),*(undefined8 *)(param_4 + 0x30),3,0);
        if (param_5 < 1) {
          return;
        }
        iVar3 = 0;
        do {
          CakeOrder_InGame_UIMoneyEffect__SpawnCoin
                    (uVar5,param_2,param_3,*(float *)(param_4 + 0x44) * (float)iVar3,param_4,param_6
                    );
          iVar3 = iVar3 + 1;
        } while (param_5 != iVar3);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  if (0 < param_5) {
    do {
      if (param_6 != 0) {
        (**(code **)(param_6 + 0x18))
                  (*(undefined8 *)(param_6 + 0x40),*(undefined8 *)(param_6 + 0x28));
      }
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}

