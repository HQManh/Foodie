// rea decompile_all
// name: CakeOrder.InGame.CookingBotAutoRetry$$AdvanceToNextLevel
// address: 0x438abc8
// body: available
// range: 0x438abc8-0x438b033 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x438ada0 to 0x43896d4 CakeOrder.InGame.CookingBotAutoRetry$$Stop (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x438b030 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_CookingBotAutoRetry__AdvanceToNextLevel(void)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined1 local_34 [4];
  
  if ((DAT_095179e6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182cc0);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091b4970);
    FUN_03f5c2a4(&DAT_091b4c48);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_092207e0);
    FUN_03f5c2a4(&DAT_091fa750);
    FUN_03f5c2a4(&DAT_09223e18);
    FUN_03f5c2a4(&DAT_091f5a98);
    FUN_03f5c2a4(&DAT_092258a0);
    FUN_03f5c2a4(&DAT_0921e6e8);
    DAT_095179e6 = 1;
  }
  local_34[0] = 0;
  if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_09517a95 == '\0') {
    FUN_03f5c2a4(&DAT_09182cc0);
    DAT_09517a95 = '\x01';
  }
  if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar1 = *(int *)(*(long *)(DAT_09182cc0 + 0xb8) + 0x94);
  if (DAT_09517a96 == '\0') {
    FUN_03f5c2a4(&DAT_09182cc0);
    DAT_09517a96 = '\x01';
  }
  if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = *(long *)(DAT_091b4c48 + 0x20);
  *(int *)(*(long *)(DAT_09182cc0 + 0xb8) + 0x94) = iVar1 + 1;
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  lVar2 = **(long **)(lVar2 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar3 = UnityEngine_Object__op_Equality(lVar2,0,0);
  if ((uVar3 & 1) != 0) {
    uVar4 = DAT_09223e18;
    if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
      FUN_03f5c424();
      uVar4 = DAT_09223e18;
    }
LAB_0438ad90:
    CakeOrder_InGame_CookingBotAutoRetry__Stop(uVar4);
    return;
  }
  if (lVar2 == 0) {
LAB_0438b030:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar3 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar2 + 0x48),0);
  if ((uVar3 & 1) == 0) {
    lVar5 = *(long *)(DAT_091b4970 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    uVar4 = **(undefined8 **)(lVar5 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if ((uVar3 & 1) != 0) {
      lVar5 = *(long *)(DAT_091b4970 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c();
      }
      if (**(long **)(lVar5 + 0xb8) == 0) goto LAB_0438b030;
      uVar3 = CakeOrder_HeartSystem_HeartSystemController__IsEnoughHeartToPlayLevel
                        (**(long **)(lVar5 + 0xb8),0);
      if ((uVar3 & 1) == 0) {
        uVar4 = DAT_092207e0;
        if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
          FUN_03f5c424();
          uVar4 = DAT_092207e0;
        }
        goto LAB_0438ad90;
      }
    }
    uVar7 = *(undefined8 *)(lVar2 + 0x48);
    local_3c = *(int *)(lVar2 + 0x50) + 1;
    uVar4 = FUN_03f5c42c(DAT_09535420,&local_3c);
    if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182cc0);
    }
    if (DAT_09517a95 == '\0') {
      FUN_03f5c2a4(&DAT_09182cc0);
      DAT_09517a95 = '\x01';
    }
    if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_40 = *(undefined4 *)(*(long *)(DAT_09182cc0 + 0xb8) + 0x94);
    uVar6 = FUN_03f5c42c(DAT_09535420,&local_40);
    uVar4 = System_String__Format(DAT_0921e6e8,uVar4,uVar6,0);
    uVar4 = System_String__Concat(DAT_091fa750,uVar7,DAT_091f5a98,uVar4,0);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091835d0);
    }
    UnityEngine_Debug__Log(uVar4,0);
    local_34[0] = CakeOrder_InGame_CookingBotAutoRetry__AdvanceAfterDelay();
    Cysharp_Threading_Tasks_UniTaskVoid__Forget(local_34,0);
  }
  else {
    if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09517a95 == '\0') {
      FUN_03f5c2a4(&DAT_09182cc0);
      DAT_09517a95 = '\x01';
    }
    if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_38 = *(undefined4 *)(*(long *)(DAT_09182cc0 + 0xb8) + 0x94);
    uVar4 = FUN_03f5c42c(DAT_09535420,&local_38);
    System_String__Format(DAT_092258a0,uVar4,0);
    CakeOrder_InGame_CookingBotAutoRetry__Stop();
  }
  return;
}

