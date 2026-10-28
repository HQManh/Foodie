// rea decompile_all
// name: CakeOrder.InGame.CookingBotAutoRetry$$OnLevelEnded
// address: 0x438a394
// body: available
// range: 0x438a394-0x438abc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x438a5a0 to 0x438abc8 CakeOrder.InGame.CookingBotAutoRetry$$AdvanceToNextLevel (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x438abc0 to 0x43896d4 CakeOrder.InGame.CookingBotAutoRetry$$Stop (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x438abc4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_CookingBotAutoRetry__OnLevelEnded(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_28;
  undefined1 local_24 [4];
  
  if ((DAT_095179e5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182cc0);
    FUN_03f5c2a4(&DAT_09182cf0);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09184b70);
    FUN_03f5c2a4(&DAT_091877f8);
    FUN_03f5c2a4(&DAT_091b4970);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_092207e0);
    FUN_03f5c2a4(&DAT_091fc930);
    FUN_03f5c2a4(&DAT_0921a7a0);
    FUN_03f5c2a4(&DAT_0921cc40);
    FUN_03f5c2a4(&DAT_0921e6c0);
    FUN_03f5c2a4(&DAT_0921e6e0);
    FUN_03f5c2a4(&DAT_092208a0);
    FUN_03f5c2a4(&DAT_091fa720);
    FUN_03f5c2a4(&DAT_091f63f8);
    FUN_03f5c2a4(&DAT_0921b280);
    FUN_03f5c2a4(&DAT_0921e0b0);
    FUN_03f5c2a4(&DAT_091f5700);
    FUN_03f5c2a4(&DAT_09221f78);
    DAT_095179e5 = 1;
  }
  local_24[0] = 0;
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
  if (param_1 == 0) {
    return;
  }
  if (*(char *)(*(long *)(DAT_09182cc0 + 0xb8) + 9) == '\0') {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 - 2U < 2) {
    if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09517a97 == '\0') {
      FUN_03f5c2a4(&DAT_09182cc0);
      DAT_09517a97 = '\x01';
    }
    if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182cc0);
    }
    uVar2 = DAT_0921e6e0;
    if (*(char *)(*(long *)(DAT_09182cc0 + 0xb8) + 0x90) != '\0') {
      if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09182cc0);
      }
      CakeOrder_InGame_CookingBotAutoRetry__AdvanceToNextLevel();
      return;
    }
  }
  else {
    if (iVar1 == 1) {
      if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_0951660a == '\0') {
        FUN_03f5c2a4(&DAT_09182cc0);
        DAT_0951660a = '\x01';
      }
      if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar6 = *(long *)(*(long *)(DAT_09182cc0 + 0xb8) + 0x10);
      if (lVar6 == 0) goto LAB_0438abc4;
      if (*(char *)(lVar6 + 0x40) != '\0') {
        if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (DAT_09516606 == '\0') {
          FUN_03f5c2a4(&DAT_09182cc0);
          DAT_09516606 = '\x01';
        }
        if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(*(long *)(DAT_09182cc0 + 0xb8) + 0xc));
        uVar2 = FUN_03f5c42c(DAT_09535420,&local_68);
        uVar2 = System_String__Format(DAT_0921b280,uVar2,0);
        goto LAB_0438a6e0;
      }
      if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_09516606 == '\0') {
        FUN_03f5c2a4(&DAT_09182cc0);
        DAT_09516606 = '\x01';
      }
      if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(int *)(*(long *)(DAT_09182cc0 + 0xb8) + 0xc) < 0x32) {
        uVar2 = FUN_039af8ec(DAT_091b4970);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar3 = UnityEngine_Object__op_Inequality(uVar2,0,0);
        if ((uVar3 & 1) != 0) {
          lVar6 = FUN_039af8ec(DAT_091b4970);
          if (lVar6 == 0) goto LAB_0438abc4;
          uVar3 = CakeOrder_HeartSystem_HeartSystemController__IsEnoughHeartToPlayLevel(lVar6,0);
          if ((uVar3 & 1) == 0) {
            if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            CakeOrder_InGame_CookingBotAutoRetry__Stop(DAT_092207e0);
            return;
          }
        }
        if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar1 = FUN_04177cac(0);
        FUN_0439f1dc(iVar1 + 1,0);
        lVar6 = FUN_03f5c394(DAT_091805f8,7);
        local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(param_1 + 0x14));
        uVar2 = FUN_03f5c42c(DAT_091877f8,&local_68);
        local_28 = FUN_04177cac(0);
        uVar4 = FUN_03f5c42c(DAT_09535420,&local_28);
        uVar2 = System_String__Format(DAT_091fa720,uVar2,uVar4,0);
        if (lVar6 != 0) {
          FUN_039af17c(lVar6,0,uVar2);
          lVar5 = FUN_04177dec(0);
          if (lVar5 != 0) {
            local_34 = *(undefined4 *)(lVar5 + 0x14);
            uVar2 = FUN_03f5c42c(DAT_09535420,&local_34);
            lVar5 = FUN_04177dec(0);
            if (lVar5 != 0) {
              local_38 = *(undefined4 *)(lVar5 + 0x18);
              uVar4 = FUN_03f5c42c(DAT_09535450,&local_38);
              uVar2 = System_String__Format(DAT_0921e0b0,uVar2,uVar4,0);
              FUN_039af17c(lVar6,1,uVar2);
              lVar5 = FUN_04177dec(0);
              if (lVar5 != 0) {
                local_3c = *(undefined4 *)(lVar5 + 0x1c);
                uVar2 = FUN_03f5c42c(DAT_09535450,&local_3c);
                lVar5 = FUN_04177dec(0);
                if (lVar5 != 0) {
                  local_40 = *(undefined4 *)(lVar5 + 0x20);
                  uVar4 = FUN_03f5c42c(DAT_09535450,&local_40);
                  uVar2 = System_String__Format(DAT_0921a7a0,uVar2,uVar4,0);
                  FUN_039af17c(lVar6,2,uVar2);
                  lVar5 = FUN_04177dec(0);
                  if (lVar5 != 0) {
                    local_44 = *(undefined4 *)(lVar5 + 0x24);
                    uVar2 = FUN_03f5c42c(DAT_09535450,&local_44);
                    lVar5 = FUN_04177dec(0);
                    if (lVar5 != 0) {
                      local_48 = *(undefined4 *)(lVar5 + 0x28);
                      uVar4 = FUN_03f5c42c(DAT_09535450,&local_48);
                      uVar2 = System_String__Format(DAT_09221f78,uVar2,uVar4,0);
                      FUN_039af17c(lVar6,3,uVar2);
                      lVar5 = FUN_04177dec(0);
                      if (lVar5 != 0) {
                        local_4c = *(undefined4 *)(lVar5 + 0x30);
                        uVar2 = FUN_03f5c42c(DAT_09535450,&local_4c);
                        uVar2 = System_String__Format(DAT_092208a0,uVar2,0);
                        FUN_039af17c(lVar6,4,uVar2);
                        lVar5 = FUN_04177dec(0);
                        if (lVar5 != 0) {
                          uVar2 = DAT_091fc930;
                          if (*(char *)(lVar5 + 0x38) != '\0') {
                            if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
                              FUN_03f5c424();
                            }
                            lVar5 = FUN_04177dec(0);
                            if (lVar5 == 0) goto LAB_0438abc4;
                            local_58 = *(undefined4 *)(lVar5 + 0x3c);
                            local_68 = DAT_09182cf0;
                            uStack_60 = 0xffffffffffffffff;
                            uVar2 = System_Enum__ToString(&local_68,0);
                          }
                          FUN_039af17c(lVar6,5,uVar2);
                          if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
                            FUN_03f5c424();
                          }
                          lVar5 = FUN_04177dec(0);
                          if (lVar5 != 0) {
                            uVar2 = DAT_091f5700;
                            if (*(int *)(lVar5 + 0x3c) == 7) {
                              if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
                                FUN_03f5c424();
                              }
                              lVar5 = FUN_04177dec(0);
                              if (lVar5 == 0) goto LAB_0438abc4;
                              local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(lVar5 + 0x50));
                              uVar2 = FUN_03f5c42c(DAT_09535420,&local_68);
                              uVar2 = System_String__Format(DAT_091f63f8,uVar2,0);
                            }
                            FUN_039af17c(lVar6,6,uVar2);
                            uVar2 = System_String__Concat(lVar6,0);
                            if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                              FUN_03f5c424(DAT_091835d0);
                            }
                            UnityEngine_Debug__Log(uVar2,0);
                            if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
                              FUN_03f5c424();
                            }
                            local_24[0] = CakeOrder_InGame_CookingBotAutoRetry__RetryAfterDelay();
                            Cysharp_Threading_Tasks_UniTaskVoid__Forget(local_24,0);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LAB_0438abc4:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_68 = CONCAT44(local_68._4_4_,0x32);
      uVar2 = FUN_03f5c42c(DAT_09535420,&local_68);
      puVar7 = &DAT_0921cc40;
    }
    else {
      local_68._4_4_ = (undefined4)((ulong)local_68 >> 0x20);
      local_68 = CONCAT44(local_68._4_4_,iVar1);
      uVar2 = FUN_03f5c42c(DAT_09184b70,&local_68);
      puVar7 = &DAT_0921e6c0;
    }
    uVar2 = System_String__Format(*puVar7,uVar2,0);
  }
  if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09182cc0);
  }
LAB_0438a6e0:
  CakeOrder_InGame_CookingBotAutoRetry__Stop(uVar2);
  return;
}

