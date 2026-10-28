// rea decompile_all
// name: AnhPD.FoodOrder.PieceLedger$$Reset
// address: 0x41f599c
// body: available
// range: 0x41f599c-0x41f5ddf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41f5ddc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_PieceLedger__Reset(void)

{
  int iVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  if ((DAT_09516b9a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091814b0);
    FUN_03f5c2a4(&DAT_091824f0);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_0919ca58);
    FUN_03f5c2a4(&DAT_0919ea20);
    FUN_03f5c2a4(&DAT_0919f998);
    FUN_03f5c2a4(&DAT_091b3640);
    FUN_03f5c2a4(&DAT_091b0588);
    FUN_03f5c2a4(&DAT_0918e4f8);
    FUN_03f5c2a4(&DAT_091d59f8);
    FUN_03f5c2a4(&DAT_09189140);
    FUN_03f5c2a4(&DAT_091bb5d0);
    DAT_09516b9a = 1;
  }
  if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Application__get_isEditor(0);
  if ((uVar3 & 1) == 0) {
    if (*(int *)(DAT_091824f0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    bVar2 = CakeOrder_CheatManagerCakeOrder__get_IsShowDebug(0);
  }
  else {
    bVar2 = 1;
  }
  if (*(int *)(DAT_09189140 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = DAT_0918e4f8;
  *(byte *)(*(long *)(DAT_09189140 + 0xb8) + 0xa8) = bVar2 & 1;
  uVar4 = thunk_FUN_03f9944c(uVar4);
  UnityEngine_Application_LogCallback___ctor(uVar4,0,DAT_091d59f8,0);
  if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  UnityEngine_Application__remove_logMessageReceived(uVar4,0);
  if (*(char *)(*(long *)(DAT_09189140 + 0xb8) + 0xa8) != '\0') {
    uVar4 = thunk_FUN_03f9944c(DAT_0918e4f8);
    UnityEngine_Application_LogCallback___ctor(uVar4,0,DAT_091d59f8,0);
    if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Application__add_logMessageReceived(uVar4,0);
  }
  if (*(int *)(DAT_09189140 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar5 = *(long *)(DAT_09189140 + 0xb8);
  lVar6 = *(long *)(lVar5 + 0x68);
  if (lVar6 != 0) {
    iVar1 = *(int *)(lVar6 + 0x18);
    *(undefined4 *)(lVar6 + 0x18) = 0;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
      lVar5 = *(long *)(DAT_09189140 + 0xb8);
    }
    lVar6 = *(long *)(lVar5 + 0x70);
    if (lVar6 != 0) {
      iVar1 = *(int *)(lVar6 + 0x18);
      *(undefined4 *)(lVar6 + 0x18) = 0;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
        lVar5 = *(long *)(DAT_09189140 + 0xb8);
      }
      *(undefined8 *)(lVar5 + 0x80) = 0;
      *(undefined8 *)(lVar5 + 0x78) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar5 + 0x80),0);
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = System_DateTime__get_Now(0);
      lVar5 = DAT_09189140;
      *(undefined8 *)(*(long *)(DAT_09189140 + 0xb8) + 0xa0) = uVar4;
      if (**(long **)(lVar5 + 0xb8) != 0) {
        FUN_06fd85dc(**(long **)(lVar5 + 0xb8),DAT_0919ca58);
        lVar5 = *(long *)(DAT_09189140 + 0xb8);
        lVar6 = *(long *)(lVar5 + 8);
        if (lVar6 != 0) {
          iVar1 = *(int *)(lVar6 + 0x18);
          *(undefined4 *)(lVar6 + 0x18) = 0;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (0 < iVar1) {
            System_Array__Clear(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
            lVar5 = *(long *)(DAT_09189140 + 0xb8);
          }
          lVar6 = *(long *)(lVar5 + 0x10);
          if (lVar6 != 0) {
            iVar1 = *(int *)(lVar6 + 0x18);
            *(undefined4 *)(lVar6 + 0x18) = 0;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (0 < iVar1) {
              System_Array__Clear(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
              lVar5 = *(long *)(DAT_09189140 + 0xb8);
            }
            lVar6 = *(long *)(lVar5 + 0x18);
            if (lVar6 != 0) {
              iVar1 = *(int *)(lVar6 + 0x18);
              *(undefined4 *)(lVar6 + 0x18) = 0;
              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
              if (0 < iVar1) {
                System_Array__Clear(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
                lVar5 = *(long *)(DAT_09189140 + 0xb8);
              }
              if (*(long *)(lVar5 + 0x20) != 0) {
                FUN_061a7274(*(long *)(lVar5 + 0x20),DAT_091bb5d0);
                lVar5 = *(long *)(*(long *)(DAT_09189140 + 0xb8) + 0x28);
                if (lVar5 != 0) {
                  FUN_06fd85dc(lVar5,DAT_0919ea20);
                  lVar5 = *(long *)(*(long *)(DAT_09189140 + 0xb8) + 0x30);
                  if (lVar5 != 0) {
                    FUN_06fca5d0(lVar5,DAT_0919f998);
                    lVar5 = *(long *)(*(long *)(DAT_09189140 + 0xb8) + 0x38);
                    if (lVar5 != 0) {
                      FUN_06fca5d0(lVar5,DAT_0919f998);
                      lVar5 = *(long *)(*(long *)(DAT_09189140 + 0xb8) + 0x40);
                      if (lVar5 != 0) {
                        FUN_06fca5d0(lVar5,DAT_0919f998);
                        lVar5 = *(long *)(*(long *)(DAT_09189140 + 0xb8) + 0x48);
                        if (lVar5 != 0) {
                          FUN_06fca5d0(lVar5,DAT_0919f998);
                          lVar5 = *(long *)(*(long *)(DAT_09189140 + 0xb8) + 0x50);
                          if (lVar5 != 0) {
                            FUN_06fca5d0(lVar5,DAT_0919f998);
                            lVar5 = *(long *)(*(long *)(DAT_09189140 + 0xb8) + 0x58);
                            if (lVar5 != 0) {
                              FUN_06fca5d0(lVar5,DAT_0919f998);
                              lVar5 = *(long *)(*(long *)(DAT_09189140 + 0xb8) + 0x60);
                              if (lVar5 != 0) {
                                FUN_06fca5d0(lVar5,DAT_0919f998);
                                lVar5 = *(long *)(DAT_09189140 + 0xb8);
                                *(undefined4 *)(lVar5 + 0x9c) = 0;
                                *(undefined8 *)(lVar5 + 0x88) = 0;
                                *(undefined8 *)(lVar5 + 0x90) = 0;
                                *(undefined1 *)(lVar5 + 0x98) = 0;
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
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

