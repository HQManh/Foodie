// rea decompile_all
// name: CakeOrder.InGame.CookingBotAutoRetry.<AnswerNextFrame>d__117$$MoveNext
// address: 0x438b7a0
// body: available
// range: 0x438b7a0-0x438bab3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x438bab0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_CookingBotAutoRetry_<AnswerNextFrame>d__117__MoveNext(int *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  if ((DAT_095179eb & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2820);
    FUN_03f5c2a4(&DAT_09182cc0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_095179eb = 1;
  }
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (*param_1 == 0) {
    local_50 = *(undefined1 (*) [16])(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
  }
  else {
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_40 = Cysharp_Threading_Tasks_UniTask__NextFrame(0);
    thunk_FUN_03f5d7b8(local_40,0);
    uVar1 = local_40._8_8_;
    uVar7 = local_40._0_8_;
    local_50 = local_40;
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
    if ((long *)uVar7 != (long *)0x0) {
      lVar4 = *(long *)uVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_091868c0) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0438b908;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(uVar7,DAT_091868c0,0);
LAB_0438b908:
      iVar2 = (*(code *)*puVar3)(uVar7,uVar1 & 0xffffffff,puVar3[1]);
      if (iVar2 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 8) = local_50;
        thunk_FUN_03f5d7b8(param_1 + 8,0);
        FUN_0439f344(param_1 + 2,local_50,param_1,DAT_091c2820);
        return;
      }
    }
  }
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar7 = local_50._0_8_;
  if ((long *)local_50._0_8_ != (long *)0x0) {
    lVar4 = *(long *)local_50._0_8_;
    uVar8 = local_50._8_8_ & 0xffff;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_091868c0) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_0438b9a0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(local_50._0_8_,DAT_091868c0,2);
LAB_0438b9a0:
    (*(code *)*puVar3)(uVar7,uVar8,puVar3[1]);
  }
  if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_09516604 == '\0') {
    FUN_03f5c2a4(&DAT_09182cc0);
    DAT_09516604 = '\x01';
  }
  if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (*(char *)(*(long *)(DAT_09182cc0 + 0xb8) + 9) != '\0') {
    uVar7 = *(undefined8 *)(param_1 + 4);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Equality(uVar7,0,0);
    if ((uVar5 & 1) == 0) {
      lVar4 = *(long *)(param_1 + 6);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
    }
  }
  *param_1 = -2;
  FUN_042dada8(param_1 + 2,0);
  return;
}

