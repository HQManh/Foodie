// rea decompile_all
// name: AnhPD.FoodOrder.Autoplay.CookingBotConsoleLog$$OnCookingBotVerboseLog
// address: 0x41751f8
// body: available
// range: 0x41751f8-0x417597f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x417597c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_Autoplay_CookingBotConsoleLog__OnCookingBotVerboseLog
               (long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 local_34;
  
  if ((DAT_095165f1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182cf0);
    FUN_03f5c2a4(&DAT_09182d08);
    FUN_03f5c2a4(&DAT_09182d10);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_091f9f60);
    FUN_03f5c2a4(&DAT_091f69a8);
    FUN_03f5c2a4(&DAT_091f8db8);
    FUN_03f5c2a4(&DAT_091f6778);
    FUN_03f5c2a4(&DAT_091f6080);
    FUN_03f5c2a4(&DAT_091f63f0);
    FUN_03f5c2a4(&DAT_091f69e0);
    FUN_03f5c2a4(&DAT_091f6920);
    FUN_03f5c2a4(&DAT_091f6990);
    FUN_03f5c2a4(&DAT_091f9618);
    FUN_03f5c2a4(&DAT_091f6cc0);
    FUN_03f5c2a4(&DAT_091f6c98);
    FUN_03f5c2a4(&DAT_091f9640);
    FUN_03f5c2a4(&DAT_091f6088);
    FUN_03f5c2a4(&DAT_091fa6f0);
    FUN_03f5c2a4(&DAT_091f6c88);
    FUN_03f5c2a4(&DAT_091f6308);
    FUN_03f5c2a4(&DAT_091f6ca8);
    FUN_03f5c2a4(&DAT_091f5d60);
    FUN_03f5c2a4(&DAT_091f5cd0);
    FUN_03f5c2a4(&DAT_091f67c8);
    DAT_095165f1 = 1;
  }
  if (param_2 == 0) {
    return;
  }
  plVar1 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(plVar1,0xa0,0);
  if (plVar1 != (long *)0x0) {
    lVar2 = System_Text_StringBuilder__Append(plVar1,DAT_091fa6f0,0);
    local_34 = *(undefined4 *)(param_2 + 0x10);
    uVar3 = FUN_03f5c42c(DAT_09182d08,&local_34);
    if (lVar2 != 0) {
      System_Text_StringBuilder__Append(lVar2,uVar3,0);
      uVar4 = System_String__IsNullOrEmpty(*(undefined8 *)(param_2 + 0x18),0);
      if ((uVar4 & 1) == 0) {
        lVar2 = System_Text_StringBuilder__Append(plVar1,DAT_091f9f60,0);
        if (lVar2 == 0) goto LAB_0417597c;
        System_Text_StringBuilder__Append(lVar2,*(undefined8 *)(param_2 + 0x18),0);
      }
      if (-1 < *(int *)(param_2 + 0x38)) {
        lVar2 = System_Text_StringBuilder__Append(plVar1,DAT_091f6ca8,0);
        if (lVar2 == 0) goto LAB_0417597c;
        System_Text_StringBuilder__Append(lVar2,*(undefined4 *)(param_2 + 0x38),0);
      }
      uVar4 = System_String__IsNullOrEmpty(*(undefined8 *)(param_2 + 0x40),0);
      if ((uVar4 & 1) == 0) {
        lVar2 = System_Text_StringBuilder__Append(plVar1,DAT_091f6778,0);
        if (lVar2 == 0) goto LAB_0417597c;
        System_Text_StringBuilder__Append(lVar2,*(undefined8 *)(param_2 + 0x40),0);
      }
      if (0.0 <= *(float *)(param_2 + 0x48)) {
        lVar2 = System_Text_StringBuilder__Append(plVar1,DAT_091f69a8,0);
        uVar3 = System_Single__ToString((float *)(param_2 + 0x48),DAT_091f9640,0);
        if (lVar2 == 0) goto LAB_0417597c;
        System_Text_StringBuilder__Append(lVar2,uVar3,0);
      }
      if (*(char *)(param_2 + 0x4c) != '\0') {
        System_Text_StringBuilder__Append(plVar1,DAT_091f5d60,0);
      }
      if (-1 < *(int *)(param_2 + 0x58)) {
        lVar2 = System_Text_StringBuilder__Append(plVar1,DAT_091f6c98,0);
        if (((lVar2 == 0) ||
            (lVar2 = System_Text_StringBuilder__Append(lVar2,*(undefined4 *)(param_2 + 0x58),0),
            lVar2 == 0)) || (lVar2 = System_Text_StringBuilder__Append(lVar2,0x2f,0), lVar2 == 0))
        goto LAB_0417597c;
        System_Text_StringBuilder__Append(lVar2,*(undefined4 *)(param_2 + 0x5c),0);
      }
      if (-1 < *(int *)(param_2 + 0x88)) {
        lVar2 = System_Text_StringBuilder__Append(plVar1,DAT_091f6cc0,0);
        if (((lVar2 == 0) ||
            (lVar2 = System_Text_StringBuilder__Append(lVar2,*(undefined4 *)(param_2 + 0x88),0),
            lVar2 == 0)) ||
           (lVar2 = System_Text_StringBuilder__Append(lVar2,DAT_091f67c8,0), lVar2 == 0))
        goto LAB_0417597c;
        System_Text_StringBuilder__Append(lVar2,*(undefined4 *)(param_2 + 0x8c),0);
      }
      if (-1 < *(int *)(param_2 + 0x90)) {
        lVar2 = System_Text_StringBuilder__Append(plVar1,DAT_091f6c88,0);
        if ((lVar2 == 0) ||
           (lVar2 = System_Text_StringBuilder__Append(lVar2,*(undefined4 *)(param_2 + 0x90),0),
           lVar2 == 0)) goto LAB_0417597c;
        System_Text_StringBuilder__Append(lVar2,DAT_091f6308,0);
      }
      lVar2 = System_Text_StringBuilder__Append(plVar1,DAT_091f6c88,0);
      local_34 = *(undefined4 *)(param_2 + 0x60);
      uVar3 = FUN_03f5c42c(DAT_09182cf0,&local_34);
      if (lVar2 != 0) {
        System_Text_StringBuilder__Append(lVar2,uVar3,0);
        if (*(int *)(param_2 + 100) != *(int *)(param_2 + 0x60)) {
          lVar2 = System_Text_StringBuilder__Append(plVar1,DAT_091f5cd0,0);
          local_34 = *(undefined4 *)(param_2 + 100);
          uVar3 = FUN_03f5c42c(DAT_09182cf0,&local_34);
          if (lVar2 == 0) goto LAB_0417597c;
          System_Text_StringBuilder__Append(lVar2,uVar3,0);
          if (0 < *(int *)(param_2 + 0x7c)) {
            lVar2 = System_Text_StringBuilder__Append(plVar1,DAT_091f63f0,0);
            if (lVar2 == 0) goto LAB_0417597c;
            System_Text_StringBuilder__Append(lVar2,*(undefined4 *)(param_2 + 0x7c),0);
          }
          System_Text_StringBuilder__Append(plVar1,0x29,0);
        }
        if (*(char *)(param_2 + 0x78) == '\0') {
          if ((*(char *)(param_2 + 0x70) != '\0') &&
             (*(int *)(param_2 + 0x74) != *(int *)(param_2 + 100))) {
            lVar2 = System_Text_StringBuilder__Append(plVar1,DAT_091f6088,0);
            local_34 = *(undefined4 *)(param_2 + 0x74);
            uVar3 = FUN_03f5c42c(DAT_09182cf0,&local_34);
            if ((lVar2 == 0) ||
               (lVar2 = System_Text_StringBuilder__Append(lVar2,uVar3,0), lVar2 == 0))
            goto LAB_0417597c;
            System_Text_StringBuilder__Append(lVar2,0x5d,0);
          }
        }
        else {
          System_Text_StringBuilder__Append(plVar1,DAT_091f6080,0);
        }
        lVar2 = System_Text_StringBuilder__Append(plVar1,0x20,0);
        local_34 = *(undefined4 *)(param_2 + 0x68);
        uVar3 = FUN_03f5c42c(DAT_09182d10,&local_34);
        if (lVar2 != 0) {
          System_Text_StringBuilder__Append(lVar2,uVar3,0);
          if (*(int *)(param_2 + 0x6c) != *(int *)(param_2 + 0x68)) {
            lVar2 = System_Text_StringBuilder__Append(plVar1,DAT_091f8db8,0);
            local_34 = *(undefined4 *)(param_2 + 0x6c);
            uVar3 = FUN_03f5c42c(DAT_09182d10,&local_34);
            if (lVar2 == 0) goto LAB_0417597c;
            System_Text_StringBuilder__Append(lVar2,uVar3,0);
          }
          lVar2 = System_Text_StringBuilder__Append(plVar1,DAT_091f69e0,0);
          uVar3 = System_Single__ToString(param_2 + 0x80,DAT_091f9618,0);
          if ((lVar2 != 0) && (lVar2 = System_Text_StringBuilder__Append(lVar2,uVar3,0), lVar2 != 0)
             ) {
            lVar2 = System_Text_StringBuilder__Append(lVar2,DAT_091f63f0,0);
            uVar3 = System_Single__ToString(param_2 + 0x84,DAT_091f9618,0);
            if ((lVar2 != 0) &&
               (lVar2 = System_Text_StringBuilder__Append(lVar2,uVar3,0), lVar2 != 0)) {
              System_Text_StringBuilder__Append(lVar2,0x73,0);
              if (0 < *(int *)(param_2 + 0x50)) {
                lVar2 = System_Text_StringBuilder__Append(plVar1,DAT_091f6920,0);
                if (lVar2 == 0) goto LAB_0417597c;
                System_Text_StringBuilder__Append(lVar2,*(undefined4 *)(param_2 + 0x50),0);
              }
              if (-1 < *(long *)(param_2 + 0x20)) {
                lVar2 = System_Text_StringBuilder__Append(plVar1,DAT_091f6990,0);
                if (lVar2 == 0) goto LAB_0417597c;
                System_Text_StringBuilder__Append(lVar2,*(undefined8 *)(param_2 + 0x20),0);
              }
              if ((*(int *)(param_2 + 0x10) != 0xb) && (*(int *)(param_2 + 0x10) != 7)) {
                uVar3 = (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
                uVar5 = *(undefined8 *)(param_1 + 0x10);
                if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_091835d0);
                }
                UnityEngine_Debug__Log(uVar3,uVar5,0);
                return;
              }
              uVar3 = (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
              uVar5 = *(undefined8 *)(param_1 + 0x10);
              if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                FUN_03f5c424(DAT_091835d0);
              }
              UnityEngine_Debug__LogWarning(uVar3,uVar5,0);
              return;
            }
          }
        }
      }
    }
  }
LAB_0417597c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

