// rea decompile_all
// name: CakeOrder.Localization.CakeLocalization.<OnSelectedLocaleChanged>d__23$$MoveNext
// address: 0x42df27c
// body: available
// range: 0x42df27c-0x42df7fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42df7f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42df7f4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42df7f8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Localization_CakeLocalization_<OnSelectedLocaleChanged>d__23__MoveNext(int *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  
  if ((DAT_0951742b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2cf0);
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_09182870);
    FUN_03f5c2a4(&DAT_09187a78);
    FUN_03f5c2a4(&DAT_091807c0);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_0951742b = 1;
  }
  local_60._8_8_ = 0;
  local_60._0_8_ = 0;
  if (*param_1 == 0) {
    local_60 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    if (*param_1 == 1) {
      local_60 = *(undefined1 (*) [16])(param_1 + 0xc);
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      *param_1 = -1;
      goto LAB_042df690;
    }
    lVar3 = FUN_03f5c394(DAT_091807c0,2);
    if (*(int *)(DAT_09187a78 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = **(undefined8 **)(DAT_09187a78 + 0xb8);
    if (*(int *)(DAT_09182278 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182278);
    }
    auVar8 = CakeOrder_Localization_CakeLocalization__PreloadAsync(uVar6);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *(undefined1 (*) [16])(lVar3 + 0x20) = auVar8;
    thunk_FUN_03f5d7b8((undefined1 (*) [16])(lVar3 + 0x20),0);
    auVar8 = CakeOrder_Localization_LocaleFonts__ApplyAsync(*(undefined8 *)(param_1 + 10));
    if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *(undefined1 (*) [16])(lVar3 + 0x30) = auVar8;
    thunk_FUN_03f5d7b8((undefined1 (*) [16])(lVar3 + 0x30),0);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_50 = Cysharp_Threading_Tasks_UniTask__WhenAll(lVar3,0);
    thunk_FUN_03f5d7b8(local_50,0);
    local_60 = local_50;
    if (DAT_095162d4 == '\0') {
      FUN_03f5c2a4(&DAT_0918c610);
      DAT_095162d4 = '\x01';
    }
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_095162d5 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d5 = '\x01';
    }
    uVar6 = local_60._0_8_;
    if ((long *)local_60._0_8_ != (long *)0x0) {
      lVar3 = *(long *)local_60._0_8_;
      uVar7 = local_60._8_8_ & 0xffff;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_091868c0) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_042df4d4;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,0);
LAB_042df4d4:
      iVar1 = (*(code *)*puVar2)(uVar6,uVar7,puVar2[1]);
      if (iVar1 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0xc) = local_60;
        thunk_FUN_03f5d7b8(param_1 + 0xc,0);
        FUN_049c7540(param_1 + 2,local_60,param_1,DAT_091c2cf0);
        return;
      }
    }
  }
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar6 = local_60._0_8_;
  if ((long *)local_60._0_8_ != (long *)0x0) {
    lVar3 = *(long *)local_60._0_8_;
    uVar7 = local_60._8_8_ & 0xffff;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_091868c0) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_042df568;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_042df568:
    (*(code *)*puVar2)(uVar6,uVar7,puVar2[1]);
  }
  uVar6 = *(undefined8 *)(param_1 + 10);
  if (*(int *)(DAT_09182870 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  auVar8 = CakeOrder_Localization_ComplexScriptText__ApplyAsync(uVar6);
  if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_50 = auVar8;
  thunk_FUN_03f5d7b8(local_50,0);
  local_60 = local_50;
  if (DAT_095162d4 == '\0') {
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_095162d4 = '\x01';
  }
  if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_095162d5 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d5 = '\x01';
  }
  uVar6 = local_60._0_8_;
  if ((long *)local_60._0_8_ != (long *)0x0) {
    lVar3 = *(long *)local_60._0_8_;
    uVar7 = local_60._8_8_ & 0xffff;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_091868c0) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_042df67c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,0);
LAB_042df67c:
    iVar1 = (*(code *)*puVar2)(uVar6,uVar7,puVar2[1]);
    if (iVar1 == 0) {
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 0xc) = local_60;
      thunk_FUN_03f5d7b8(param_1 + 0xc,0);
      FUN_049c7540(param_1 + 2,local_60,param_1,DAT_091c2cf0);
      return;
    }
  }
LAB_042df690:
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar6 = local_60._0_8_;
  if ((long *)local_60._0_8_ != (long *)0x0) {
    lVar3 = *(long *)local_60._0_8_;
    uVar7 = local_60._8_8_ & 0xffff;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_091868c0) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_042df710;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_042df710:
    (*(code *)*puVar2)(uVar6,uVar7,puVar2[1]);
  }
  if (*(int *)(DAT_09182278 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = **(long **)(DAT_09182278 + 0xb8);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
  }
  *param_1 = -2;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
  return;
}

