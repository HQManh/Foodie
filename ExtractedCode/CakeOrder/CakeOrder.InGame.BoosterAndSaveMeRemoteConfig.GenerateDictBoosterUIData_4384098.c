// rea decompile_all
// name: CakeOrder.InGame.BoosterAndSaveMeRemoteConfig$$GenerateDictBoosterUIData
// address: 0x4384098
// body: available
// range: 0x4384098-0x43842af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x438425c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43842ac to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_InGame_BoosterAndSaveMeRemoteConfig__GenerateDictBoosterUIData
               (long param_1,int param_2,int param_3)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  
  if ((DAT_09517980 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091956e8);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091a0670);
    FUN_03f5c2a4(&DAT_091a0668);
    FUN_03f5c2a4(&DAT_09176da0);
    FUN_03f5c2a4(&DAT_091fce00);
    DAT_09517980 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09176da0);
  FUN_06fd76bc(lVar1,DAT_091a0668);
  lVar3 = *(long *)(param_1 + 0x28);
  if ((lVar3 == 0) || (*(long *)(param_1 + 0x30) == 0)) {
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogWarning(DAT_091fce00,0);
    return lVar1;
  }
  uVar6 = 0;
  do {
    if ((int)*(uint *)(lVar3 + 0x18) <= (int)uVar6) {
      return lVar1;
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar6) {
LAB_043842ac:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    lVar5 = *(long *)(param_1 + 0x30);
    if ((lVar5 == 0) || ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar6)) break;
    if (*(uint *)(lVar5 + 0x18) <= uVar6) goto LAB_043842ac;
    lVar8 = (long)(int)uVar6;
    lVar5 = *(long *)(lVar5 + lVar8 * 8 + 0x20);
    if (lVar5 == 0) break;
    if (*(char *)(lVar5 + 0x18) != '\0') {
      lVar7 = *(long *)(lVar3 + lVar8 * 8 + 0x20);
      lVar3 = thunk_FUN_03f9944c(DAT_091956e8);
      CakeOrder_InGame_UIInLevelCakeOrder_BoosterUIData___ctor(lVar3,0);
      if ((lVar7 == 0) || (lVar3 == 0)) break;
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar7 + 0x18);
      thunk_FUN_03f5d7b8();
      *(long *)(lVar3 + 0x18) = lVar5;
      thunk_FUN_03f5d7b8((long *)(lVar3 + 0x18),lVar5);
      if (param_2 < 1) {
        bVar4 = *(int *)(lVar5 + 0x1c) <= param_3 + 1;
      }
      else {
        bVar4 = true;
      }
      lVar5 = *(long *)(param_1 + 0x20);
      *(bool *)(lVar3 + 0x20) = bVar4;
      if (lVar5 == 0) break;
      if ((int)uVar6 < (int)*(uint *)(lVar5 + 0x18)) {
        if (*(uint *)(lVar5 + 0x18) <= uVar6) goto LAB_043842ac;
        uVar2 = *(undefined4 *)(lVar5 + lVar8 * 4 + 0x20);
      }
      else {
        uVar2 = 0;
      }
      *(undefined4 *)(lVar3 + 0x24) = uVar2;
      if (lVar1 == 0) break;
      FUN_06fd8454(lVar1,*(undefined8 *)(lVar7 + 0x18),lVar3,DAT_091a0670);
      lVar3 = *(long *)(param_1 + 0x28);
    }
    uVar6 = uVar6 + 1;
  } while (lVar3 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

