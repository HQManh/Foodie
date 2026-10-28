// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingMoneyPresenter$$SpawnCoin
// address: 0x44dc5dc
// body: available
// range: 0x44dc5dc-0x44dc79f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44dc798 to 0x42abee8 CakeOrder.InGame.UIMoneyEffect$$Play (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44dc79c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingMoneyPresenter__SpawnCoin
               (undefined4 param_1,undefined4 param_2,long param_3,int param_4,undefined4 param_5)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  if ((DAT_09518333 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091e7f90);
    FUN_03f5c2a4(&DAT_0918f6a8);
    DAT_09518333 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_0918f6a8);
  System_Object___ctor(lVar1,0);
  if (lVar1 == 0) {
LAB_044dc79c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(long *)(lVar1 + 0x10) = param_3;
  thunk_FUN_03f5d7b8((long *)(lVar1 + 0x10),param_3);
  *(undefined4 *)(lVar1 + 0x18) = param_5;
  if (0 < param_4) {
    uVar2 = CakeOrder_InGame_UIInLevelCakeOrder__get_InstanceUIInLevel(0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar2,0,0);
    lVar4 = 0;
    if ((uVar3 & 1) != 0) {
      lVar4 = CakeOrder_InGame_UIInLevelCakeOrder__get_InstanceUIInLevel(0);
      if (lVar4 == 0) goto LAB_044dc79c;
      lVar4 = *(long *)(lVar4 + 0x218);
    }
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Equality(lVar4,0,0);
    uVar2 = DAT_09180e78;
    if ((uVar3 & 1) == 0) {
      *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + param_4;
      uVar2 = thunk_FUN_03f9944c(uVar2);
      System_Action___ctor(uVar2,lVar1,DAT_091e7f90,0);
      if (lVar4 != 0) {
        CakeOrder_InGame_UIMoneyEffect__Play(param_1,param_2,0,lVar4,param_4,uVar2,0);
        return;
      }
      goto LAB_044dc79c;
    }
    do {
      lVar4 = *(long *)(param_3 + 0x10);
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x18))
                  (*(undefined8 *)(lVar4 + 0x40),*(undefined4 *)(lVar1 + 0x18),
                   *(undefined8 *)(lVar4 + 0x28));
      }
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

