// rea decompile_all
// name: CakeOrder.CakeOrderCloudSaveController.<>c__DisplayClass20_0.<<LoadCloudDataIntoLocal>g__ApplyCloudData|0>d$$MoveNext
// address: 0x425bc44
// body: available
// range: 0x425bc44-0x425bf33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x425bef8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x425bf30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CakeOrder_CakeOrderCloudSaveController_<>c__DisplayClass20_0_<<LoadCloudDataIntoLocal>g__ApplyCloudData_0>d__MoveNext
          (long param_1)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  long lVar7;
  
  if ((DAT_09516f56 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182c60);
    FUN_03f5c2a4(&DAT_091b9d58);
    FUN_03f5c2a4(&DAT_091b9dc8);
    FUN_03f5c2a4(&DAT_091b9d88);
    FUN_03f5c2a4(&DAT_091b9e00);
    FUN_03f5c2a4(&DAT_091b9e08);
    FUN_03f5c2a4(&DAT_091b9d90);
    DAT_09516f56 = 1;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  lVar7 = *(long *)(param_1 + 0x20);
  uVar3 = 0;
  if ((int)uVar1 < 3) {
    if (uVar1 < 2) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if ((lVar7 != 0) && (*(long *)(lVar7 + 0x10) != 0)) {
        lVar4 = *(long *)(*(long *)(lVar7 + 0x10) + 0x40);
        uVar3 = 0;
        if (lVar4 != 0) {
          uVar3 = FUN_06076f78(lVar4,DAT_091b9e00);
          if ((uVar3 & 1) != 0) {
LAB_0425bd24:
            *(undefined8 *)(param_1 + 0x18) = 0;
            thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
            *(undefined4 *)(param_1 + 0x10) = 1;
            return 1;
          }
          if (*(long *)(lVar7 + 0x10) != 0) {
            lVar4 = *(long *)(*(long *)(lVar7 + 0x10) + 0x48);
            uVar3 = 0;
            if (lVar4 != 0) {
              uVar3 = FUN_06076f78(lVar4,DAT_091b9d88);
              lVar4 = DAT_09182c60;
              if ((uVar3 & 1) != 0) goto LAB_0425bd24;
              if (*(long *)(lVar7 + 0x10) == 0) goto LAB_0425bf30;
              plVar5 = *(long **)(*(long *)(lVar7 + 0x10) + 0x38);
              if (plVar5 == (long *)0x0) {
                *(undefined8 *)(param_1 + 0x28) = 0;
              }
              else {
                bVar2 = *(byte *)(DAT_09182c60 + 0x130);
                if ((*(byte *)(*plVar5 + 0x130) < bVar2) ||
                   (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar2 * 8 + -8) != DAT_09182c60)) {
LAB_0425bef0:
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c8d0(plVar5,lVar4);
                }
                *(long **)(param_1 + 0x28) = plVar5;
                if ((*(byte *)(*plVar5 + 0x130) < bVar2) ||
                   (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar2 * 8 + -8) != lVar4))
                goto LAB_0425bef0;
              }
              thunk_FUN_03f5d7b8();
              *(undefined8 *)(param_1 + 0x18) = 0;
              thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
              uVar6 = 2;
              goto LAB_0425bf1c;
            }
          }
        }
      }
    }
    else {
      if (uVar1 != 2) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (((lVar7 != 0) && (*(long *)(lVar7 + 0x10) != 0)) && (*(long *)(param_1 + 0x28) != 0)) {
        lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + 0x40);
        uVar3 = 0;
        if (lVar7 != 0) {
          FUN_0607727c(lVar7,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18),0,DAT_091b9dc8);
          *(undefined8 *)(param_1 + 0x18) = 0;
          thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
          uVar6 = 3;
LAB_0425bf1c:
          *(undefined4 *)(param_1 + 0x10) = uVar6;
          return 1;
        }
      }
    }
  }
  else if (uVar1 - 4 < 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar7 != 0) && (*(long *)(lVar7 + 0x10) != 0)) {
      lVar4 = *(long *)(*(long *)(lVar7 + 0x10) + 0x40);
      uVar3 = 0;
      if (lVar4 != 0) {
        uVar3 = FUN_06076f48(lVar4,DAT_091b9e08);
        if ((uVar3 & 1) != 0) {
          if (*(long *)(lVar7 + 0x10) == 0) goto LAB_0425bf30;
          lVar4 = *(long *)(*(long *)(lVar7 + 0x10) + 0x48);
          uVar3 = 0;
          if (lVar4 == 0) goto LAB_0425bf30;
          uVar3 = FUN_06076f48(lVar4,DAT_091b9d90);
          if ((uVar3 & 1) != 0) {
            *(undefined1 *)(lVar7 + 0x18) = 1;
            return 0;
          }
        }
        *(undefined8 *)(param_1 + 0x18) = 0;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
        uVar6 = 5;
        goto LAB_0425bf1c;
      }
    }
  }
  else {
    if (uVar1 != 3) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (((lVar7 != 0) && (*(long *)(lVar7 + 0x10) != 0)) && (*(long *)(param_1 + 0x28) != 0)) {
      lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + 0x48);
      uVar3 = 0;
      if (lVar7 != 0) {
        FUN_0607727c(lVar7,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20),0,DAT_091b9d58);
        *(undefined8 *)(param_1 + 0x18) = 0;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
        uVar6 = 4;
        goto LAB_0425bf1c;
      }
    }
  }
LAB_0425bf30:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550(uVar3);
}

