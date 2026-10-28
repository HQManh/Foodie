// rea decompile_all
// name: CakeOrder.InGame.UIInLevelCakeOrder.<>c__DisplayClass93_0$$<ShowTutorial>g__OnDone|11
// address: 0x42a50e8
// body: available
// range: 0x42a50e8-0x42a50eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIInLevelCakeOrder_<>c__DisplayClass93_0__<ShowTutorial>g__OnDone_11
               (long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  long *plStack_50;
  
  if ((DAT_09517251 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174a48);
    FUN_03f5c2a4(&DAT_091a3110);
    FUN_03f5c2a4(&DAT_091a3118);
    FUN_03f5c2a4(&DAT_091a3120);
    FUN_03f5c2a4(&DAT_09186500);
    FUN_03f5c2a4(&DAT_091ad638);
    FUN_03f5c2a4(&DAT_091ad640);
    FUN_03f5c2a4(&DAT_091f16e0);
    DAT_09517251 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  uStack_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  plStack_50 = (long *)0x0;
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) < 1) {
      CakeOrder_InGame_UIInLevelCakeOrder_<>c__DisplayClass93_0__<ShowTutorial>g__ShowAlert_5
                (param_1);
      return;
    }
    FUN_057e185c(&uStack_78,lVar2,DAT_091ad638);
    plStack_50 = plStack_68;
    puStack_58 = puStack_70;
    uStack_60 = uStack_78;
    uStack_78 = 0;
    puStack_70 = &uStack_60;
    while (uVar3 = FUN_071bd28c(&uStack_60,DAT_091a3118), plVar1 = plStack_50, (uVar3 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0xc0);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar2 = *(long *)(lVar2 + 0x38);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (plStack_50 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *plStack_50;
      uVar8 = *(undefined8 *)(lVar2 + 0x10);
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_09186500) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_042a4fa8;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plStack_50,DAT_09186500,0);
LAB_042a4fa8:
      uVar5 = (*(code *)*puVar4)(plVar1,puVar4[1]);
      CakeOrder_InGame_UIInLevelCakeOrder__SetDoneIntroNewItem(uVar5,uVar8,uVar5);
    }
    FUN_071bd288(&uStack_60,DAT_091a3110);
    if (*(char *)(param_1 + 0x30) == '\0') {
      lVar2 = *(long *)(param_1 + 0x18);
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      uVar8 = thunk_FUN_03f9944c(DAT_09174a48);
      FUN_070a8c30(uVar8,param_1,DAT_091f16e0,0);
      if (lVar2 == 0) goto LAB_042a5080;
      uVar8 = CakeOrder_BaseUI_SceneMainUI__ShowPopupInfoNewItem(lVar2,uVar5,0,uVar8,0);
      Utilities_AsyncExtension__RunWithLogException(uVar8,0);
    }
    else {
      CakeOrder_InGame_UIInLevelCakeOrder_<>c__DisplayClass93_0__<ShowTutorial>g__ShowAlert_5
                (param_1);
    }
    return;
  }
LAB_042a5080:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

