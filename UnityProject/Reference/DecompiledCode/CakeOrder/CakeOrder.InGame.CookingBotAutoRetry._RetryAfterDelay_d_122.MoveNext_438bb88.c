// rea decompile_all
// name: CakeOrder.InGame.CookingBotAutoRetry.<RetryAfterDelay>d__122$$MoveNext
// address: 0x438bb88
// body: available
// range: 0x438bb88-0x438bf53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x438bf50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_CookingBotAutoRetry_<RetryAfterDelay>d__122__MoveNext(int *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  if ((DAT_095179ec & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2828);
    FUN_03f5c2a4(&DAT_09182cc0);
    FUN_03f5c2a4(&DAT_091b4c48);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_0918c610);
    FUN_03f5c2a4(&DAT_09223e18);
    DAT_095179ec = 1;
  }
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (*param_1 == 0) {
    local_50 = *(undefined1 (*) [16])(param_1 + 4);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    *param_1 = -1;
  }
  else {
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_TimeSpan__FromSeconds(0x3ff4000000000000,0);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_40 = Cysharp_Threading_Tasks_UniTask__Delay(uVar3,1,8,0,0,0);
    thunk_FUN_03f5d7b8(local_40,0);
    uVar1 = local_40._8_8_;
    uVar3 = local_40._0_8_;
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
    if ((long *)uVar3 != (long *)0x0) {
      lVar5 = *(long *)uVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_091868c0) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0438bd50;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(uVar3,DAT_091868c0,0);
LAB_0438bd50:
      iVar2 = (*(code *)*puVar4)(uVar3,uVar1 & 0xffffffff,puVar4[1]);
      if (iVar2 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 4) = local_50;
        thunk_FUN_03f5d7b8(param_1 + 4,0);
        FUN_0439f450(param_1 + 2,local_50,param_1,DAT_091c2828);
        return;
      }
    }
  }
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar3 = local_50._0_8_;
  if ((long *)local_50._0_8_ != (long *)0x0) {
    lVar5 = *(long *)local_50._0_8_;
    uVar8 = local_50._8_8_ & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091868c0) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_0438bde8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(local_50._0_8_,DAT_091868c0,2);
LAB_0438bde8:
    (*(code *)*puVar4)(uVar3,uVar8,puVar4[1]);
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
    lVar5 = *(long *)(DAT_091b4c48 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = **(long **)(lVar5 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar6 = UnityEngine_Object__op_Equality(lVar5,0,0);
    if ((uVar6 & 1) == 0) {
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      CakeOrder_InGame_LevelPlayLoadAndSetupControl__StartPlayRetry(lVar5);
    }
    else {
      if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      CakeOrder_InGame_CookingBotAutoRetry__Stop(DAT_09223e18);
    }
  }
  *param_1 = -2;
  FUN_042dada8(param_1 + 2,0);
  return;
}

